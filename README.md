# Dim Sum Automaton 
### [Assignment 1](https://amanh41.github.io/CPSC581A1/) [Assignment 2](https://amanh41.github.io/CPSC581A2/) [Individual Project](https://amanh41.github.io/CPSC581IndividualProject/) 

### [Arduino code](https://github.com/AmanH41/CPSC581-A3/blob/ad48f7fe931ab418af80a7792366b0aff2f22288/581A3.ino)  [Python code](https://github.com/AmanH41/CPSC581-A3/blob/ad48f7fe931ab418af80a7792366b0aff2f22288/581A3.py) 

## Overall Description
The Dim Sum Automaton is a self-rotating table designed to simplify food distribution in a Chinese restaurant setting. It eliminates the need to manually rotate the table, avoiding awkward interactions when trying to turn it to your side. The table operates using sensors placed along its bottom edge, which detect hand gestures. When a hand gesture is detected, the motor that rotates the table stops. Once the gesture is no longer detected, the table resumes its rotation.

## Concept sketches
<div style="text-align: center;">
  <img src="A2 sketch/A2_SKETCHES_concept__Refined_241027_171422_1.jpg" alt="img1" style="width: 45%; height: auto; display: inline-block; margin: 10px;">
</div>
1. Where's Waldo: Select a specific item or individual known only to the device owner to unlock the phone.
2. Home Direction: Unlock the phone by holding it in the direction of your home for a prolonged period.
3. Make a Protein Shake: Choose specific ingredients and shake them into a protein shake to unlock the phone.
4. Create hand puppets in front of the phone's camera to unlock it.
5. Perform certain gym movements, like a bench press or squat, to unlock the phone.
6. Choose the correct door among several in a 3D space and use a keyhole feature to unlock the phone.
7. Unlock the phone by singing at a specific pitch.
8. Play a song using a digital flute interface on the screen. Blow on the microphone while holding the correct notes and play a pre-selected sequence to unlock.
9. Perform a multi-directional gesture sequence to unlock the phone.
10. Roll a dice and select the correct numbers to unlock the phone

## Refined Sketches 
<div style="text-align: center;">
  <img src="A2 sketch/A2_SKETCHES_concept__Refined_241027_171422_2.jpg" style="width: 45%; height: auto; display: inline-block; margin: 10px;">

  <p>
The first idea we explored was creating a drink-making challenge, initially focusing on protein shakes but later considering other options like alcoholic beverages or sodas. The concept involves the user selecting an ingredient and shaking the phone to mix it. This process is repeated a specific number of times based on a predefined combination of ingredients and shake intensity set by the owner. If the user makes a mistake or wants to start over, they can tilt the phone 180 degrees to "pour out" the drink, resetting the entire process.
  </p>
</div>

<div style="text-align: center;">
  <img src="A2 sketch/A2_SKETCHES_concept__Refined_241027_232042_4.jpg" style="width: 45%; height: auto; display: inline-block; margin: 10px;">
  <p>
This idea was inspired by Where’s Waldo. The concept involved a 3D image filled with numerous people, animals, and objects. To unlock the phone, the user would need to scan across the scene with their phone and select specific objects or individuals. The main challenge, and the reason we decided not to pursue this concept, was the uncertainty around the project's scope. Implementing a fully interactive 3D image with touch capabilities and multiple selectable objects seemed complex and time-consuming, especially given our project’s time constraints.
  </p>
</div>

<div style="text-align: center;">
  <img src="A2 sketch/A2_SKETCHES_concept__Refined_241027_171422_3.jpg" alt="img3" style="width: 45%; height: auto; display: inline-block; margin: 10px;">
<p>
The idea we ultimately chose was a dice-shaking unlock system. Similar to the drink maker concept, the user selects a set number of colored dice and then shakes the phone at a chosen intensity—low, moderate, or high. This process is repeated three times, with each combination of dice color and shake intensity forming a part of the PIN. To unlock the device, the user must correctly replicate their preset combinations three times. At the end, a message indicates if the "House" has won or lost. If the House wins, the input is incorrect; if the House loses, the input is correct, unlocking the device. The sum indicator is included purely as a red herring to mislead anyone attempting to guess the PIN.
</p> 

</div>

##  Dim Sum Automaton  Demo

<div style="text-align: center;">
  <iframe width="560" height="315" 
  src="https://www.youtube.com/embed/iQQwU-qSa0I" 
  title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen>
  </iframe>
</div>
