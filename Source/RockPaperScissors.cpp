/* ---------------------------------------------------------------------------
Author:              Chad Duffey 
Contact:             chadduffey@hotmail.com

Date Created:        19th March 2010
Last Modification:

Program Description: A virtual game of "Paper, Scissors, Rock"
File Description:    All program functions (except main) for the game.
*/// --------------------------------------------------------------------------    

#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include "RockPaperScissors.h"
using namespace std;

//=== Initialise Function
//=== Prepare Random Number generation using time as the seed

void initialise()
{
  srand ( time(NULL) );
}

//=== Simulate_hand function
//=== Simulate a player making a choice of rock, paper or scissors

int simulate_hand()
{
    int chosen_hand = 1;
    chosen_hand = rand() % 3 + 1;
    return chosen_hand;
}

//=== calculate_winner function
//=== Decide the winner of the game

int calculate_winner(int p1, int p2)
{
    int result = ERROR;
    
    if (p1 == p2)
       result = DRAW;
    else
    {
        if (p1 == ROCK)
           if (p2 == SCISSORS)
              result = PLAYER1;
           else
              result = PLAYER2;
        if (p1 == PAPER)
           if (p2 == SCISSORS)       
              result = PLAYER2;
           else
              result = PLAYER1;
        if (p1 == SCISSORS)
           if (p2 == ROCK)
              result = PLAYER2;
           else
              result = PLAYER1;
    }
                          
    return result;   
}

//== overall_champion function
//== Determine the overall champion of the game

int overall_champion(int c1, int c2)
{
    int champion = PLAYER1;
 
    if (c1 == c2)
       champion = DRAW;
    else
    {
        if (c1 > c2)
           champion = PLAYER1;
        else
            champion = PLAYER2;
    } 
        
    return champion;   
}
