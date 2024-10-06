/* Name: Emma Du
 * KUID: 3134852
 * Lab Session: Friday at 1pm with Toye
 * Lab Assignment: 04
 * Program Description: Program produces all possible combinations of scoring plays based on the score that the user provides
*/

#include <stdio.h>

/* Continues to prompt user for a score until a value less than or equal to 1 is entered, at which point program will terminate */
int main() {
    int user_input;
    while (1) {
        printf("Enter 0 or 1 to STOP: \nEnter the NFL score: ");
        scanf("%d", &user_input);
        if (user_input <= 1) {
            break;
        }
       /* Saves scoring plays in an NFL game as integers */
        int TD = 6;
        int FG = 3;
        int Safety = 2;
        int TD1 = 8;
        int TD2 = 7;

        /* Produces output of the possible combinations of scoring plays that result in the score the user inputted */
        printf("Possible combinations of scoring plays if a team's score is %d:\n", user_input);

        /* Nested loops determine all possible combinations of scoring plays that result in user inputted score */
        for (int td1_count = 0; td1_count * TD1 <= user_input; td1_count++) {
            for (int td2_count = 0; td1_count * TD1 + td2_count * TD2 <= user_input; td2_count++) {
                for (int td_count = 0; td1_count * TD1 + td2_count * TD2 + td_count * TD <= user_input; td_count++){
                    for (int fg_count = 0; td1_count * TD1 + td2_count * TD2 + td_count * TD + fg_count * FG <= user_input; fg_count++){
                        for (int safety_count = 0; td1_count * TD1 + td2_count * TD2 + td_count * TD + fg_count * FG + safety_count * Safety <= user_input; safety_count++){
                            if (td1_count * TD1 + td2_count * TD2 + td_count * TD + fg_count * FG + safety_count * Safety == user_input) {
                                printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3 pt FG, %d Safety\n",
                                        td1_count, td2_count, td_count, fg_count, safety_count);
                        }
                    }
                }
            }
        }
    }

    return 0;
}
}
