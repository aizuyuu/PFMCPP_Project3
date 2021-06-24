/*
Project 3 - Part 1d / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3. 
Part1 will be broken up into 5 separate steps 
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

    The goal of this step is to get you to think about breaking down an object into smaller and smaller objects, 
    until the smallest object is made of up only C++ primitives. 

    Continuing the previous example:  Cell Phone

    A Cell Phone is made up of the following 5 properties/sub-objects and 3 actions:
        Display
        Memory
        CPU
        Radio
        Applications
    3 actions:
        make a call
        send a text
        run an application.

    These 5 properties can be broken down into their own sub-objects and properties. 

    If we break down the first property 'Display' into its 5 properties we get:
        brightness
        amount of power consumed.
        pixels
        width in cm
        height in cm

    the Display's brightness can be represented with a Primitive, such as a double. 

    The amount of power consumed can also be represented with a Primitive, such as a float or integer (i.e. 250mWa)
    
    The 'pixels' property must be represented with an array of Pixel instances, as the screen has more than 1 row of pixels.
        Arrays have not been discussed and can't be used in this project.
        Instead, we can use an Integer primitive to store the Number of Pixels:

    Display:
        Number of Pixels
        Amount of Power consumed (milliwatt-hours)
        Brightness
        width in cm
        height in cm
************************

1) Fill in #5 - #9 with plain-english UDTs for the 5 properties you created for UDT #10
    example: 
        If #10's first property was 'Engine', then your `Thing 5)` will be `Engine` and 
        you will need to provide 5 properties and 3 member functions of that Engine object in plain English
*/

/*
Thing 1) school
5 properties:
    1) number of classes
    2) number of teachers
    3) number of students
    4) number of new students each year
    5) number of graduated students
3 things it can do:
    1) teach students
    2) charge parents
    3) make students socialize
 */

/*
Thing 2) snack factory
5 properties:
    1) number of products produced each day
    2) amount of ingredients ordered each week
    3) amount of money for ordering ingredients
    4) number of workers
    5) number of packaging machines
3 things it can do:
    1) produce snacks
    2) distribute snacks
    3) recruit workers
 */

/*
Thing 3) coffee shop
5 properties:
    1) amount of coffee in stock
    2) number of coffee maker machines
    3) net sales per day
    4) number of seats available
    5) number of cups to wash
3 things it can do:
    1) serve coffee
    2) give customers place to laze around
    3) sell snacks
 */

/*
Thing 4) guitar amp
5 properties:
    1) number of speakers
    2) number of bands in the EQ
    3) amount of gain
    4) number of output speaker impedance options
    5) types of effects
3 things it can do:
    1) amplify guitar sound
    2) equalize guitar tone
    3) change guitar sound
 */

/*
Thing 5) door knob
5 properties:
    1) knob type
    2) color
    3) length in cm
    4) y position from ground
    5) spring tension
3 things it can do:
    1) twist
    2) make door usable
    3) pull stopper
 */

/*
Thing 6) lock
5 properties:
    1) lock type
    2) key type
    3) number of key turns
    4) key length in mm
    5) hole depth in mm
3 things it can do:
    1) locks door movement
    2) disable knob
    3) receive key
 */

/*
Thing 7) hinge
5 properties:
    1) length in cm
    2) number of screws
    3) y position
    4) hinge type
    5) screw type
3 things it can do:
    1) join door panel onto door frame
    2) make creaky sound
    3) swing door panel
 */

/*
Thing 8) door frame
5 properties:
    1) length in m
    2) width in m
    3) depth in cm
    4) wood type
    5) color
3 things it can do:
    1) limit door movement
    2) hold door panel
    3) hold wall
 */

/*
Thing 9) eye viewer
5 properties:
    1) viewer type
    2) lens diameter
    3) depth in mm
    4) amount of zoom
    5) lens angle of view
3 things it can do:
    1) project image from outside
    2) zoom image from outside
    3) block projection from inside
 */

/*
Thing 10) front door
5 properties:
    1) door knob
    2) lock
    3) hinge
    4) door frame
    5) eye viewer
3 things it can do:
    1) make way into the house
    2) separate inside and outside of house
    3) make creaky sound
 */




/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
