/*
Project 3 - Part 1e / 5
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

Convert your 10 Plain-english UDTs into code.

I recommend compiling after finishing each one and making sure it compiles 
without errors or warnings before moving on to writing the next UDT. 

1) define an empty struct below your plain-english UDT. i.e.:

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#if false //ignore these #if #endif lines. they're just here to prevent compiler errors.
struct CarWash
{

};
#endif
/*
    - Do this for all 10 UDTs

2) Below your plain-english UDT, Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    - Do this for all 10 UDTs
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
    - Do this for all 10 UDTs
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
    - Do this for all 10 UDTs
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
 */

/*
 example:  

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>

struct CarWash //                                   1) define an empty struct for each of your 10 types.       
{
    //number of vacuum cleaners                     2) copied and commented-out plain-english property
    int numVacuumCleaners = 3; //                   3) member variables with relevant data types.
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car //5)                                 Note that the nested type 'Car' is related to the 'CarWash' 
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};


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
