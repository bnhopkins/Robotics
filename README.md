# Performing Robots


## Robotic Performance
Glowing tetrahedron suspended in space within a concrete chamber. A performance of the audience and the space interacting through light robotics. The robots respond to the audience through sensors and seek to engage the audience through childlike curiosity. This performance by Ruairi Glynn took place at the Tate Modern.
https://www.youtube.com/watch?v=TEq3oczAt7o
![Tate Robotic Art](tate.png)

## Update on Robot
![John Sexton Robot](jsexRobot.jpg)


## Response to Today’s Disussion
Some interesting tidbits...

[Isaac Asimov's "Three Laws of Robotics"](https://www.auburn.edu/~vestmon/robotics.html)
1. A robot may not injure a human being or, through inaction, allow a human being to come to harm.
2. A robot must obey orders given it by human beings except where such orders would conflict with the First Law.
3. A robot must protect its own existence as long as such protection does not conflict with the First or Second Law.


[Guiness World Record Dancing Robots](https://qz.com/1061372/watch-1069-robots-dance-their-way-to-a-guinness-world-record/)

Maybe our class should make the world record in Abu Dhabi ;)


## Interesting Artist : Eric Siu
![Eric Siu](ericsiu.jpg)
[Eric Siu](http://ericsiu.net/) has done some really interesting work in the space of new media robticesque art.
The project above is called touchy. "Touchy is a human camera – a wearable device that literally transforms a human being into a functioning camera. The wearer is constantly “blinded” unless someone touches his/her skin that causes the shutters to open and restores the wearer’s vision. When physical contact is held for 10 seconds, the camera takes a “Touch-Snap”, which is displayed on the device’s LCD."


## Some thoughts on cybernetics
[Claude Shannon](https://www.youtube.com/watch?v=z2Whj_nL-x8)

As we start out in the this class discussing cybernetics, I think it is interesting to go back to one of the original people who started it all in the world of communication.

## Bluetooth Module Update

![Bluetooth Module 1](bluetooth1.jpg)
Putting together the bluetooth module..
![Bluetooth Module 2](bluetooth.jpg)


## Orlando

While in Orlando, I went to OMART, Orlando Museum of Modern Art. The exhibition was a very cool new media exhibition.

![OMART Piece](orlando1.jpg)
![OMART SoftwareArt](orlando2.jpg)


## Idea for final project
![Sketch of final project](finalProjectIdea.jpg)

## Fritz
#### Things that could have been better
the robot created for open studios was stupendous! However, there could have been a better use of space. Also, many of the pieces were not quite coordinated, and it could have been nice if the dragon and durm were coordinated. 



## Detailed plan for actor

#### Areas of greatest risk or uncertainty
Risk: Creating smooth transitions and motions of actors
Uncertainity: story line

#### Mechanical
There will be a play or story that culminates in the death of an actor.
Necessary for performance
- create sustainable actors, ensure they wont fall apart
- pushing a button with a robotic arm

#### Electronics
We will create three main robot actors, one be a head on the wall head:
- 3 Arduino uno
- printed PCB board to clean up electronics
- switch for actor
- light sensor
- Adafruit bluetooth module
- large button

#### Software
- program motions and actions into actor
- integrate speech element into actor

#### Power
The actors will have batteries will attatched, and these should be able to last the durration of the performance.

#### Parts list
The scenes will need to be designed and fabricated:
- wood
- possibly paint?

#### Organizational
Use readme for updates, wiki for project documentation

#### Inspiration
https://www.youtube.com/watch?v=xzHz484y9hI
https://www.youtube.com/watch?v=AiFGATFzgfU
https://www.youtube.com/watch?v=y8D8mHF1Jqw

## Discussion with Michael
LED to signify dying?
Servos
think about degrees of freedom

## Final Project Schedule
###### Tuesday November 14 9-10:15 AM
- create 3 prototypes
###### Thursday November 16 9-11:40 AM
- work on 3 prototypes
###### Tuesday November 21 9-10:15 AM
- finish 3 prototypes
- brainstorm 3 story lines
- look deeply into famous plays and pupppets
###### Thursday November 23 9-11:40 AM
- settle on a prototype
- create a prototype 2.0
###### Saturday November 25 9-11:40 AM
- create the scene
- program Actors
###### Tuesday November 28 9-10:15 AM
- final touches on scene and actors
###### Thursday December 7 9-11:40 AM -  Team presentation: Tech rehearsal
###### Tuesday December 12 9-10:15 AM - Team presentation: Dress rehearsal
###### Wednesday December 13 5:30-7:30 PM - FINAL SHOW



## Nov 21 Update

##### Project description to date: 
We have decdied to pursue a "Charlie Chaplin Modern times" esq scene with one robot as the "proliteriate" robot that is on the assembly line as a worker and another "capitalist" boss that is telling the robot what to do faster and faster until the robot starts to fall apart and almost die. Then the audience is given the option to kill the boss robot, and the manaquin on the wall forcing the robot to work dies.

##### Greatest risk or uncertainty
The robot actions will be the hardest part. We have to figure out how to lift a stamp and stamp the stamp.

##### Detailed parts list
###### "Worker" Robot
- Paper body, possibly also made with cloth
- Paper maché / plaster face
- Step motor for turning body (need stronger motors)
- Step motor lifting arm (need stronger motors)
- Motor shield
- 1 arduino uno (Arduino will handle both motors, fine because the delays will be at appropriate times. As the motor lifts the hand up, the other motor will be still and visa versa)
- Bluetooth module (for manual override)
- String/wire to pull the hand up

###### "Capitalist" Robot
- Manaquin body
- Cloth head

###### Background pipes
- Black paper
- Cardboard
- Step/Servo Motor
- Arduino

###### Clock
- White paper
- Black plastic/paper for clock hands
- Arduino (could potentially share with background pipes)

##### Electronic and electromechanical items not figured out
- How to lift the arm

##### Hand drawn sketch & Block diagram of the electronics
![Diagram](diagram.JPG)

##### Outline of programs
###### "Worker" Robot
1. lift stamp
2. turn right 35 degrees 
3. put stamp in ink
4. lift stamp
5. turn left 70 degrees 
6. stamp
7. turn right 70 degrees

###### "Capitalist" Robot
No robotic movements (only speaking and projection)

###### Background pipes
1. move forward/ upwards
2. delay
3. move backwards/downwards
4. delay

###### Clock
1. start motor
2. move forward
3. with manual commands (bluetooth), move faster

##### Interactive Element
For our performance, we will ask the audience to decide if we should kill the "capitalist" robot or not. This will be in the form of a website. The audience input will not actually decide the fate of the robot, but rather it will be a tool to engage the audience and make them think hard about the direction the play should proceed in. 

##### Github repository
- Final project is in the folder "Final project"folder.


