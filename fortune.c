#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>  // Sleep function

#define NUM_LUCKY_NUMBERS 6

int main() {
    char decision_one;

    int decision_two;
    int continue_from_second_while_loop = 1;
    int lucky_numbers[NUM_LUCKY_NUMBERS];

    int decision_three_int_four;
    int decision_three_int_five;
    int continue_from_decision_two_int_four_while_loop = 1;
    int continue_from_decision_two_int_five_while_loop = 1;
    
    //int astrology;
    //int cartomancy;
    //int chiromancy;
    //int chronomancy;
    //int crystallomancy;

    
    printf("As you wonder down the street, you feel a gaze upon you. You look up and notice you have come across a soothsayer. \n");
    sleep(4);
    printf("Hey you! Come here and let me tell you your fortune. I can provide you the knowledge that can lead you to success. \n");
    sleep(4);

    while (1) {
        printf("Continue? y/n: \n");
        scanf(" %c", &decision_one);  // Note the space before %c to consume any whitespace characters

        if (decision_one == 'y') {
            break;  // Exit the loop if the user enters 'y'
        } else if (decision_one == 'n') {
            printf("That is disappointing. If you change your mind, I'll be here. \n");
            return 0;
        } else {
            printf("Enter 'y' or 'n'. \n");
        }
    }

    printf("Oh! Come here! Please, take a seat. \n");
    sleep(2);
    printf("What can I do for you today? \n");
    sleep(1);
    printf("1: Tell me my fortune, please. \n");
    printf("2: Tell me my fortune. \n");
    printf("3: What is the purpose of all of this? \n");
    printf("4: What are my lucky numbers? \n");
    printf("5: *Attempt to leave without saying anything* \n");

    while (continue_from_second_while_loop) {
        printf("Choose an option as an interger: \n");
        if (scanf(" %d", &decision_two) != 1) {
            // Handle invalid input (non-integer)
            printf("Invalid input. Please enter an integer. \n");

            // Clear the input buffer
            while (getchar() != '\n');
        } else {
            switch (decision_two) {
                case 1:
                    printf("Of course! What practice would you like me to use today? \n");
                    sleep(2);
                    continue_from_second_while_loop = 0; // Need decision 3
                    break;
                case 2:
                    printf("That was kind of rude of you, don't you think? How about we try that again, but ask politely this time. \n");
                    sleep(4);
                    break; // Need decision 3
                case 3:
                    break;
                case 4:
                    printf("You want to know your lucky numbers, huh. \n");
                    sleep(1);
                    printf("Very well. Let me concentrate for a few seconds. \n");
                    sleep(2);
                    printf("You look around in confusion as the fortune teller seems to be in deep concentration, almost as if she is very constipated. \n");
                    sleep(5);
                    printf("Ahh, yes. Your lucky numbers are: ");

                    // Generate and print 5 numbers from 1 to 70
                    for (int i = 0; i < 5; ++i) {
                        lucky_numbers[i] = rand() % 71;
                        printf("%d ", lucky_numbers[i]);
                    }

                    // Generate and print 1 number from 1 to 25
                    lucky_numbers[5] = rand() % 26;
                    printf("%d.\n", lucky_numbers[5]);
                    sleep(1);
                    printf("Use them wisely! \n");
                    sleep(1);
                    printf("Is there anything else I can do for you? \n");
                    sleep(1);
                    continue_from_second_while_loop = 0; // Need decision 3
                    break;
                case 5:
                    printf("I don't think I can let that happen. \n");
                    sleep(2);
                    printf("How about you think about your decisions and try again? \n");
                    continue_from_second_while_loop = 0;
                    break;
                default:
                    printf("Enter an interger between 1 and 5. \n");
                    break;
            }
        }
    }

    if (decision_two == 4) {
        printf("1: Tell me my fortune, please. \n");
        printf("2: Tell me my fortune. \n");
        printf("3: What is the purpose of all of this? \n");
        printf("4: What are my lucky numbers again? \n");
        printf("5: *Attempt to leave without saying anything* \n");
        printf("6: *Say thank you and mention that you will be leaving now.* \n");

        while (continue_from_decision_two_int_four_while_loop){
            printf("Choose an option as an interger: \n");
            if (scanf(" %d",&decision_three_int_four) != 1) {
            // Handle invalid input (non-integer)
            printf("Invalid input. Please enter an integer. \n");

            // Clear the input buffer
            while (getchar() != '\n');
        } else {
                switch (decision_three_int_four) {
                    case 1:
                            break;
                        case 2:
                            break;
                        case 3:
                            break;
                        case 4:
                            printf("You already forgot? \n");
                            sleep(1);
                            printf("How about we write it down this time? \n");
                            sleep(5);
                            for (int i = 0; i < NUM_LUCKY_NUMBERS; ++i) {
                                printf("%d ", lucky_numbers[i]);
                            }
                            printf("\n");
                            continue_from_decision_two_int_four_while_loop = 0;
                            break;
                        case 5:
                            break;
                        default:
                            printf("Enter an interger between 1 and 5. \n");
                            break;
                }
            }
        }
    }

    if (decision_two == 5) {
        printf("1: Tell me my fortune, please. \n");
        printf("2: Tell me my fortune. \n");
        printf("3: What is the purpose of all of this? \n");
        printf("4: What are my lucky numbers? \n");
        printf("5: *Attempt to leave again without saying anything* \n");

        while (continue_from_decision_two_int_five_while_loop) {
            printf("Choose an option as an interger: \n");
            if (scanf(" %d",&decision_three_int_five) != 1) {
            // Handle invalid input (non-integer)
            printf("Invalid input. Please enter an integer.\n");

            // Clear the input buffer
            while (getchar() != '\n');
        } else {
                switch (decision_three_int_five) {
                        case 1:
                            break;
                        case 2:
                            break;
                        case 3:
                            break;
                        case 4:
                            break;
                        case 5:
                            printf("I don't think I can let that happen. \n");
                            continue_from_decision_two_int_five_while_loop = 0;
                            break;
                        default:
                            printf("Enter an interger between 1 and 5. \n");
                            break;
                }
            }
        }
    }

    return 0;
}

// ANSI escape codes for text color
// #define ANSI_RESET   "\x1B[0m"
// #define ANSI_RED     "\x1B[31m"
// #define ANSI_GREEN   "\x1B[32m"
// #define ANSI_YELLOW  "\x1B[33m"
// #define ANSI_BLUE    "\x1B[34m"
// #define ANSI_MAGENTA "\x1B[35m"
// #define ANSI_CYAN    "\x1B[36m"
// #define ANSI_WHITE   "\x1B[37m"

// int whatever() {
//     printf(ANSI_RED "This is red text\n" ANSI_RESET);
//     printf(ANSI_GREEN "This is green text\n" ANSI_RESET);
//     printf(ANSI_YELLOW "This is yellow text\n" ANSI_RESET);
//     printf(ANSI_BLUE "This is blue text\n" ANSI_RESET);
//     printf(ANSI_MAGENTA "This is magenta text\n" ANSI_RESET);
//     printf(ANSI_CYAN "This is cyan text\n" ANSI_RESET);
//     printf(ANSI_WHITE "This is white text\n" ANSI_RESET);

//     return 0;
// }