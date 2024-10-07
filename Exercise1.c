#include <stdio.h>

void print_combinations(int score, int td, int td_2pt, int fg, int safety) {
    if (td >= 0 && td_2pt >= 0 && fg >= 0 && safety >= 0) {
        printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n", td_2pt, td, td, fg, safety);
    }
}

void find_combinations(int score) {
    int td, td_2pt, fg, safety;
    for (td = 0; td <= score / 6; td++) {
        for (td_2pt = 0; td_2pt <= score / 8; td_2pt++) {
            for (fg = 0; fg <= score / 3; fg++) {
                for (safety = 0; safety <= score / 2; safety++) {
                    if (6 * td + 8 * td_2pt + 3 * fg + 2 * safety == score) {
                        print_combinations(score, td, td_2pt, fg, safety);
                    }
                }
            }
        }
    }
}

int main() {
    int score;
    printf("Enter 0 or 1 to STOP\n");
    while (1) {
        printf("Enter the NFL score: ");
        scanf("%d", &score);
        if (score <= 1) {
            break;
        }
        printf("Possible combinations of scoring plays if a team's score is %d:\n", score);
        find_combinations(score);
    }
    return 0;
}