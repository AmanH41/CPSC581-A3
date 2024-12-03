import serial
import pygame
import time
import serial.tools.list_ports

# Initialize serial communication
arduino_port = '/dev/cu.usbmodem101'  # Replace with your Arduino port
baud_rate = 9600
ser = serial.Serial(arduino_port, baud_rate)

# Initialize pygame for audio playback
pygame.init()
pygame.mixer.init()
sound = pygame.mixer.Sound("𝐏𝐥𝐚𝐲𝐥𝐢𝐬𝐭 80's Chillout Tokyo  Lofi hiphop mix ( Chill & Study ).mp3")  # Replace with the path to your sound file

playing = False  # To track if the sound is actively playing
paused = False   # To track if the sound is paused

try:
    while True:
        if ser.in_waiting > 0:
            data = ser.readline().decode('utf-8').strip()
            print(f"Received: {data}")

            if data == "PLAY":
                if paused:  # Resume the music if it was paused
                    pygame.mixer.unpause()
                    paused = False
                    playing = True
                elif not playing:  # Start playing if not already playing
                    sound.play(loops=-1)  # Play the sound in a loop
                    playing = True
            elif data == "STOP" and playing:
                pygame.mixer.pause()  # Pause the sound
                paused = True
                playing = False

        time.sleep(0.1)

except KeyboardInterrupt:
    print("Exiting...")
finally:
    ser.close()
    pygame.mixer.quit()
