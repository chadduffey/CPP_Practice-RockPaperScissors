/* ----------------------------------------------------------------------------
Author:              Chad Duffey 
Contact:             chadduffey@hotmail.com

Date Created:        19th March 2010
Last Modification:

Program Description: A virtual game of "Paper, Scissors, Rock"
File Description:    Function declarations.
*/// --------------------------------------------------------------------------

//PROGRAM CONSTANTS

int const ROCK     = 1;
int const PAPER    = 2;
int const SCISSORS = 3;

int const PLAYER1 = 10;
int const PLAYER2 = 20;
int const DRAW    = 30;

int const ERROR   = 100;

//Function to initialise (seed) the random number generator
//No arguments taken, and no arguments returned

void initialise();

/* Function to simulate a player choosing paper, scissors or rock
Returns the choice player has made, which will be based on random number
generator - which is seeded using the time in the initialise function */

int simulate_hand();

/* Function to calculate the winner of the hand. Winner is determined using 
paper, scissors, rock logic - where paper beats rock, rock beats scissors, scissors
beat paper. Function takes in the choice determined from the simulate hand function
and returns the winner of the two hands as an integer*/

int calculate_winner(int p1, int p2);

/* function to tally game wins and determine the overall champion. Two integers 
are passed in from the main function which are the current scores of each player
then this function returns the player who has the higher score as an integer */

int overall_champion(int c1, int c2);
