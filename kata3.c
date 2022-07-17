/* Rock Paper Scissors
Examples(Input1, Input2 --> Output):
"scissors", "paper" --> "Player 1 won!"
"scissors", "rock" --> "Player 2 won!"
"paper", "paper" --> "Draw!"
*/

#include <stdio.h>

enum tool {ROCK, PAPER, SCISSORS};
enum outcome {P1_WON, P2_WON, DRAW};

enum outcome rps (enum tool p1, enum tool p2)
{
    if ((p1 == 0 && p2 == 2) || (p1 == 1 && p2 == 0) || (p1 == 2 && p2 == 1)){
        printf("%d \n", P1_WON);
        return P1_WON;
    }
    else if (p1 == p2){
        printf("%d \n", DRAW);
        return DRAW;
    }
    else{
        printf("%d \n", P2_WON);
        return P2_WON;
    } 
}

int main() {
    rps(PAPER, ROCK);
    return 0;
}
