/* ---------------------------------------------------------------------------- 
Author:              Chad Duffey 
Contact:             chadduffey@hotmail.com

Date Created:        19th March 2010
Last Modification:   ----

Program Description: A virtual game of "Paper, Scissors, Rock"
File Description:    Main program only, controlling program flow - 
                     functions are defined and maintained in separate files.
*/// --------------------------------------------------------------------------

#include <cstdlib>
#include <iostream>
#include "RockPaperScissors.h"

using namespace std;

int main()
{
    int player1_score = 0, player2_score = 0;
    
    initialise();
    
    for (int count = 0; count < 100; count++)
    {
        int player1_hand = simulate_hand();
     
        switch (player1_hand)
        {
            case ROCK:
                 cout << "Player 1: ROCK\t\t";
                 break;
            case PAPER:
                 cout << "Player 1: PAPER\t\t";
                 break;
            case SCISSORS:
                 cout << "Player 1: SCISSORS\t";
                 break;
            default:
                 cout << "Player 1: ERROR in simulate_hand\t";
        }
     
        int player2_hand = simulate_hand();
     
        switch (player2_hand)
        {
            case ROCK:
                 cout << "Player 2: ROCK\t\t";
                 break;
            case PAPER:
                 cout << "Player 2: PAPER\t\t";
                 break;
            case SCISSORS:
                 cout << "Player 2: SCISSORS\t";
                 break;
            default:
                 cout << "Player 2: ERROR in simulate_hand\t" << endl;
        }
     
        int winner = calculate_winner(player1_hand, player2_hand);
        
        switch (winner)
        {
            case PLAYER1:
                 cout << "Player 1 wins the hand" << endl;
                 player1_score++;
                 break;
            case PLAYER2:
                 cout << "Player 2 wins the hand" << endl;
                 player2_score++;
                 break;
            case DRAW:
                 cout << "Drawn Game" << endl;
                 break;
            default:
                 cout << "ERROR in calculate_winner" << endl;
        }
      
   }
    
   cout << "\n\nPlayer 1 scored:\t" << player1_score;
   cout << "\nPlayer 2 scored:\t" << player2_score;
   cout << "\nDrawn Games:\t\t" << (100 - (player1_score + player2_score));
   
   int champion = overall_champion(player1_score, player2_score);
   switch (champion)
   {
          case PLAYER1:
               cout << "\n\nPlayer 1 is the Champion\n\n";
               break;
          case PLAYER2:
               cout << "\n\nPlayer 2 is the Champion\n\n";
               break;
          case DRAW:
               cout << "\n\nDRAWN GAME\n\n";
               break;
          default:
               cout << "\n\nERROR Calculating Champion\n\n";
   }   
   
   system("PAUSE");
   return EXIT_SUCCESS;
}
