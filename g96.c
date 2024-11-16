/*In a carnival game, players are given a certain number of chances, as represented by the input x. Each turn, a player is prompted to input a numerical score. The program keeps track of the cumulative score using a static storage class by adding each player's score. 



After all turns are completed, the program displays the total score achieved by the players which is calculated in a function called add.

Input format :
The first line consists of an integer x, representing the number of players' attempts.

The second line consists of x space-separated integers, indicating the score rolled in that attempt.

Output format :
The output displays an integer representing the total cumulative score m, achieved by summing up all players' scores, separated by a space.*/

#include <stdio.h>

static int m = 0;

int add() {
    static int n = 0;
    scanf("%d", &n);
    m += n;
    return n;
}

int main() {
    int x;
    scanf("%d", &x);
    
    int y, n;
    for (int i = 0; i < x; i++) {
        y = i + 1;
        n = add();
    }
    
    printf("%d", m);
    return 0;
}

