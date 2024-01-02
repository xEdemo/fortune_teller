#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>  // Sleep function

#define NUM_LUCKY_NUMBERS 6

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

void initializeVariables(int *player_hp, int *soothsayer_hp, int*anger_check,
                         int *decision_two, int *lucky_numbers, int*lucky_numbers_initialized, 
                         int *decision_three_int_one, int *decision_three_int_two, 
                         int *decision_three_int_four, int *decision_three_int_five, 
                         int *decision_four_int_two, int *decision_four_int_two_alt, 
                         int *decision_five_int_three) {
    *player_hp = 20;
    *soothsayer_hp = 20;
    *anger_check = 0;
    *decision_two = 0;
    for (int i = 0; i < NUM_LUCKY_NUMBERS; ++i) {
        lucky_numbers[i] = 0; // arrays in C are automatically converted to pointers when passed as function arguments.
    }
    *lucky_numbers_initialized = 0;
    *decision_three_int_one = 0;
    *decision_three_int_two = 0;
    *decision_three_int_four = 0;
    *decision_three_int_five = 0;
    *decision_four_int_two = 0;
    *decision_four_int_two_alt = 0;
    *decision_five_int_three = 0;
}

int main() {
    char decision_one;

    int player_hp;
    int soothsayer_hp;

    int anger_check;

    int decision_two;

    int lucky_numbers[NUM_LUCKY_NUMBERS];
    int lucky_numbers_initialized;

    int decision_three_int_one;
    int decision_three_int_two;
    int decision_three_int_four;
    int decision_three_int_five;

    int decision_four_int_two;
    int decision_four_int_two_alt;

    int decision_five_int_three;

    char last_decision;

    do {
        int continue_from_decision_two_while_loop = 1;

        int continue_from_decision_two_int_one_while_loop = 1;
        int continue_from_decision_two_int_two_while_loop = 1;
        int continue_from_decision_two_int_four_while_loop = 1;
        int continue_from_decision_two_int_five_while_loop = 1;

        int continue_from_decision_three_int_two_while_loop = 1;

        int continue_from_decision_four_int_three_while_loop = 1;

        initializeVariables(&player_hp, &soothsayer_hp, &anger_check, &decision_two, 
                             lucky_numbers, &lucky_numbers_initialized, &decision_three_int_one, 
                             &decision_three_int_two, &decision_three_int_four, 
                             &decision_three_int_five, &decision_four_int_two, 
                             &decision_four_int_two_alt, &decision_five_int_three);

        printf("As you wander down the street, you feel a gaze upon you. You look up and notice you have come across a soothsayer. \n");
        sleep(3);
        printf("Hey you! Come here and let me tell you your fortune. I can provide you the knowledge that can lead you to success. \n");
        sleep(3);

        while (1) {
            printf("Continue? y/n: \n");
            scanf(" %c", &decision_one);  // Note the space before %c to consume any whitespace characters

            if (decision_one == 'y') {
                printf("Oh! Come here! Please, take a seat. \n");
                sleep(2);
                printf("What can I do for you today? \n");
                sleep(1);
                printf("1: Tell me my fortune, please. \n");
                printf("2: Tell me my fortune. \n");
                printf("3: What is the purpose of all of this? \n");
                printf("4: What are my lucky numbers? \n");
                printf("5: *Attempt to leave without saying anything* \n");
                break;  // Exit the loop if the user enters 'y'
            } else if (decision_one == 'n') {
                printf("That is disappointing. If you change your mind, I'll be here. \n");
                sleep(2);
                break;
            } else {
                printf("Enter 'y' or 'n'. \n");
            }
        }

        if (decision_one == 'y'){
            while (continue_from_decision_two_while_loop) {
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
                            continue_from_decision_two_while_loop = 0; // Need decision 3
                            break;
                        case 2:
                            printf("That was kind of rude of you, don't you think? How about we try that again, but ask politely this time. \n");
                            sleep(3);
                            anger_check = 1;
                            continue_from_decision_two_while_loop = 0; // Need decision 3
                            break;
                        case 3:
                            printf("You seek the purpose, the grand design behind the veil of fate. \n");
                            sleep(2);
                            printf("Listen closely, for the threads of destiny weave a tapestry unknown to many. \n");
                            sleep(3);
                            printf("In this realm of uncertainty, I am but a guide, revealing glimpses of the unknown. \n");
                            sleep(2);
                            printf("The purpose lies not solely in the answers but in the journey of self-discovery. \n");
                            sleep(3);
                            printf("As you traverse the winding paths, reflect on the choices that shape your destiny. \n");
                            sleep(3);
                            printf("*You blankly stare at the soothsayer, as you try to figure out what kind of drugs she is on.* \n");
                            sleep(4);
                            break;
                        case 4:
                            printf("You want to know your lucky numbers, huh. \n");
                            sleep(1);
                            printf("Very well. Let me concentrate for a few seconds. \n");
                            sleep(2);
                            printf("*You look around in confusion as the fortune teller seems to be in deep concentration, almost as if she is very constipated.* \n");
                            sleep(5);
                            printf("Ahh, yes. Your lucky numbers are: ");

                            // Generate and print 5 numbers from 1 to 70
                            for (int i = 0; i < 5; ++i) {
                                lucky_numbers[i] = rand() % 70 + 1;
                                printf("%d ", lucky_numbers[i]);
                            }

                            // Generate and print 1 number from 1 to 25
                            lucky_numbers[5] = rand() % 25 + 1;
                            printf("%d.\n", lucky_numbers[5]);
                            sleep(2);
                            printf("Use these numbers wisely! \n");
                            sleep(1);
                            printf("Is there anything else I can do for you? \n");
                            sleep(1);
                            continue_from_decision_two_while_loop = 0; // Need decision 3
                            break;
                        case 5:
                            printf("I don't think I can let that happen. \n");
                            sleep(1);
                            printf("How about you think about your decisions and try again? \n");
                            sleep(2);
                            anger_check = 1;
                            continue_from_decision_two_while_loop = 0;
                            break;
                        default:
                            printf("Enter an interger between 1 and 5. \n");
                            break;
                    }
                }
            }
        }

        if (decision_two == 2) {
            while (continue_from_decision_two_int_two_while_loop) {
                printf("Choose an option as an interger: \n");
                printf("1: My apologies. Tell me my fortune, please. \n");
                printf("2: Tell me my fortune (fuck you essentially). \n");
                printf("3: What is the purpose of all of this? \n");
                printf("4: What are my lucky numbers? \n");
                printf("5: *Attempt to leave without saying anything* \n");
                if (scanf(" %d",&decision_three_int_two) != 1) {
                    // Handle invalid input (non-integer)
                    printf("Invalid input. Please enter an integer. \n");

                    // Clear the input buffer
                    while (getchar() != '\n');
                } else {
                    switch (decision_three_int_two) {
                            case 1:
                                printf("That is more like it. \n");
                                sleep(1);
                                printf("What practice would you like me to use today? \n");
                                decision_two = 1;
                                sleep(3);
                                continue_from_decision_two_int_two_while_loop = 0;
                                break;
                            case 2:
                                printf("Have you lost your mind? \n");
                                sleep(2);
                                printf("*The soothsayer approaches you and punches you in the face* \n");
                                sleep(2);

                                int damage = rand() % 20 + 2;
                                player_hp = player_hp - damage;

                                if (player_hp <= 0) { 
                                    decision_two = 0;
                                    decision_three_int_two = 0;
                                    printf("You somehow died to a fortune teller. Nice going big shot. \n");
                                }
                                if (player_hp > 0) {
                                    printf("You lost %d health and now have %d health.\n", damage, player_hp);
                                    sleep(2);
                                    printf("You get frustrated and plan to retaliate on the soothsayer. Although, now you are at a disadvantage. \n");
                                }
                                sleep(3);
                                continue_from_decision_two_int_two_while_loop = 0;
                                break;
                            case 3:
                                printf("You seek the purpose, the grand design behind the veil of fate. \n");
                                sleep(2);
                                printf("Listen closely, for the threads of destiny weave a tapestry unknown to many. \n");
                                sleep(3);
                                printf("In this realm of uncertainty, I am but a guide, revealing glimpses of the unknown. \n");
                                sleep(2);
                                printf("The purpose lies not solely in the answers but in the journey of self-discovery. \n");
                                sleep(3);
                                printf("As you traverse the winding paths, reflect on the choices that shape your destiny. \n");
                                sleep(3);
                                printf("*You blankly stare at the soothsayer and nod as if you were paying attention.* \n");
                                sleep(4);
                                break;
                            case 4:
                                printf("You want to know your lucky numbers, huh. \n");
                                sleep(1);
                                printf("I guess I can do that even though you're rude. Let me concentrate for a few seconds. \n");
                                sleep(3);
                                printf("*You look around in confusion as the fortune teller seems to be in deep concentration, almost as if she is very constipated.* \n");
                                sleep(5);
                                printf("Ahh, yes. Your lucky numbers are: ");

                                // Generate and print 5 numbers from 1 to 70
                                for (int i = 0; i < 5; ++i) {
                                    lucky_numbers[i] = rand() % 70 + 1;
                                    printf("%d ", lucky_numbers[i]);
                                }

                                // Generate and print 1 number from 1 to 25
                                lucky_numbers[5] = rand() % 25 + 1;
                                printf("%d.\n", lucky_numbers[5]);
                                sleep(2);
                                printf("Use these numbers wisely! \n");
                                sleep(1);
                                printf("Is there anything else I can do for you? \n");
                                sleep(1);
                                decision_two == 4;
                                continue_from_decision_two_int_two_while_loop = 0;
                                break;
                            case 5:
                                printf("That's enough. Prepare to die! \n");
                                sleep(1);
                                decision_three_int_two = 2;
                                continue_from_decision_two_int_two_while_loop = 0;
                                break;
                            default:
                                printf("Enter an interger between 1 and 5. \n");
                                break;
                    }
                }
            }
        }

        if (decision_two == 4) {
            while (continue_from_decision_two_int_four_while_loop){
                printf("Choose an option as an interger: \n");
                printf("1: Tell me my fortune, please. \n");
                printf("2: Tell me my fortune. \n");
                printf("3: What is the purpose of all of this? \n");
                printf("4: What are my lucky numbers again? \n");
                printf("5: *Attempt to leave without saying anything* \n");
                printf("6: *Say thank you and mention that you will be leaving now.* \n");
                if (scanf(" %d",&decision_three_int_four) != 1) {
                // Handle invalid input (non-integer)
                printf("Invalid input. Please enter an integer. \n");

                // Clear the input buffer
                while (getchar() != '\n');
            } else {
                    switch (decision_three_int_four) {
                        case 1:
                                if (anger_check != 1) {
                                    printf("Very well. What practice would you like me to use today? \n");
                                    sleep(3);
                                } else {
                                    printf("Thank you for asking politely this time! \n");
                                    sleep(2);
                                    printf("What practice would you like me to use today? \n");
                                    sleep(2);
                                }
                                decision_two = 1;
                                continue_from_decision_two_int_four_while_loop = 0;
                                break;
                            case 2:
                                if (anger_check == 1) {
                                    printf("You fucked with the wrong bitch. \n");
                                    sleep(2);
                                    printf("*The soothsayer flips her desk and pulls out a weapon.* \n");
                                    printf("*You're thinking that this soothsayer is absolutely nuts to escalate the situation this way.* \n");
                                    sleep(3);
                                    decision_three_int_two = 2;
                                    continue_from_decision_two_int_four_while_loop = 0;
                                } else {
                                    printf("You meant to say please right? \n");
                                    sleep(2);
                                    printf("Let's try that again, but the right way this time. \n");
                                    anger_check = 1;
                                }
                                break;
                            case 3:
                                printf("Blah blah blah. \n");
                                sleep(2);
                                printf("Blah blah blah. \n");
                                sleep(2);
                                printf("Blah blah blah. \n");
                                sleep(2);
                                printf("Blah blah blah. \n");
                                sleep(2);
                                printf("Blah blah blah. \n");
                                sleep(2);
                                printf("*You completely spaced out while the soothsayer was speaking and she noticed.* \n");
                                sleep(3);
                                printf("How about we listen when I am telling you important information? \n");
                                sleep(3);
                                anger_check = 1;
                                break;
                            case 4:
                                printf("You already forgot? \n");
                                sleep(1);
                                printf("How about we write it down this time? \n");
                                sleep(4);
                                printf("Here you go: ");
                                for (int i = 0; i < NUM_LUCKY_NUMBERS; ++i) {
                                    printf("%d ", lucky_numbers[i]);
                                }
                                printf("\n");
                                sleep(1);
                                continue_from_decision_two_int_four_while_loop = 0;
                                break;
                            case 5:
                                if (anger_check == 1) {
                                    printf("Who raised you to be such a menace? \n");
                                    sleep(2);
                                    printf("I think you need someone to teach you your leason. \n");
                                    sleep(2);
                                    printf("The soothsayer pulls out a weapon and threatens you with it. \n");
                                    sleep(2);
                                    continue_from_decision_two_int_four_while_loop = 0;
                                } else {
                                    printf("Where do you think you are going? \n");
                                    sleep(2);
                                    printf("Don't be rude, come back here and talk to me. \n");
                                    sleep(2);
                                    printf("You proceed back to the soothsayer awkwardly. \n");
                                    sleep(2);
                                    anger_check = 1;
                                }
                                break;
                            case 6:
                                printf("Is that all you wanted? \n");
                                sleep(3);
                                printf("Very well. Be on your way then. \n");
                                sleep(2);
                                continue_from_decision_two_int_four_while_loop = 0;
                                break;
                            default:
                                printf("Enter an interger between 1 and 6. \n");
                                break;
                    }
                }
            }
        }

        if (decision_two == 5) {
            while (continue_from_decision_two_int_five_while_loop) {
                printf("Choose an option as an interger: \n");
                printf("1: Tell me my fortune, please. \n");
                printf("2: Tell me my fortune. \n");
                printf("3: What is the purpose of all of this? \n");
                printf("4: What are my lucky numbers? \n");
                printf("5: *Attempt to leave again without saying anything* \n");

                if (scanf(" %d",&decision_three_int_five) != 1) {
                // Handle invalid input (non-integer)
                printf("Invalid input. Please enter an integer.\n");

                // Clear the input buffer
                while (getchar() != '\n');
            } else {
                    switch (decision_three_int_five) {
                            case 1:
                                printf("Very well. What practice would you like me to use today? \n");
                                sleep(3);
                                decision_two = 1;
                                continue_from_decision_two_int_five_while_loop = 0;
                                break;
                            case 2:
                                printf("You think you can just walk in here, try to leave without saying anything, and demand special treatment? \n");
                                sleep(3);
                                printf("I don't think so! \n");
                                sleep(1);
                                printf("*The soothsayer gets so flustered that she flips her desk and pulls out a weapon.* \n");
                                sleep(2);
                                printf("*You prepare to fight the soothsayer.* \n");
                                sleep(2);
                                decision_three_int_two = 2;
                                continue_from_decision_two_int_five_while_loop = 0;
                                break;
                            case 3:
                                printf("Blah blah blah. \n");
                                sleep(2);
                                printf("Blah blah blah. \n");
                                sleep(2);
                                printf("Blah blah blah. \n");
                                sleep(2);
                                printf("Blah blah blah. \n");
                                sleep(2);
                                printf("Blah blah blah. \n");
                                sleep(2);
                                printf("*You completely spaced out while the soothsayer was speaking and she noticed.* \n");
                                sleep(3);
                                printf("This is the second time you have pissed me off this session. \n");
                                sleep(2);
                                printf("I think you need someone to teach you a lesson. \n");
                                sleep(2);
                                printf("*You prepare to battle the soothsayer.* \n");
                                sleep(2);
                                decision_three_int_two = 2;
                                continue_from_decision_two_int_five_while_loop = 0;
                                break;
                            case 4:
                                if (!lucky_numbers_initialized) {
                                    printf("You want to know your lucky numbers, huh. \n");
                                    sleep(1);
                                    printf("I guess I can do that even though you were rude to me. Let me concentrate for a few seconds. \n");
                                    sleep(3);
                                    printf("*You look around in confusion as the fortune teller seems to be in deep concentration, almost as if she is very constipated.* \n");
                                    sleep(5);
                                    printf("Ahh, yes. Your lucky numbers are: ");

                                    // Generate and print 5 numbers from 1 to 70
                                    for (int i = 0; i < 5; ++i) {
                                        lucky_numbers[i] = rand() % 70 + 1;
                                        printf("%d ", lucky_numbers[i]);
                                    }

                                    // Generate and print 1 number from 1 to 25
                                    lucky_numbers[5] = rand() % 25 + 1;
                                    printf("%d.\n", lucky_numbers[5]);
                                    sleep(2);
                                    printf("Use these numbers wisely! \n");
                                    sleep(1);
                                    printf("Is there anything else I can do for you? \n");
                                    sleep(1);
                                    lucky_numbers_initialized = 1;
                                } else {
                                    printf("You already forgot? \n");
                                    sleep(1);
                                    printf("How about we write it down this time? \n");
                                    sleep(4);
                                    printf("Here you go: ");
                                    for (int i = 0; i < NUM_LUCKY_NUMBERS; ++i) {
                                        printf("%d ", lucky_numbers[i]);
                                    }
                                    printf("\n");
                                    sleep(1);
                                }
                                break;
                            case 5:
                                printf("I don't think I can let that happen. \n");
                                decision_three_int_two = 2;
                                continue_from_decision_two_int_five_while_loop = 0;
                                break;
                            default:
                                printf("Enter an interger between 1 and 5. \n");
                                break;
                    }
                }
            }
        }

        if (decision_two == 1) {
            printf("Here are your options: \n");
            sleep(1);

            while (continue_from_decision_two_int_one_while_loop) {
                printf("Choose an option as an interger: \n");
                printf("1: Cartomancy (playing cards) \n"); // Still need logic
                printf("2: Chiromancy (palm reading) \n"); // Still need logic
                printf("3: Chronomancy (manipulating time) \n"); // Still need logic
                printf("4: Crystallomancy (crystal gazing) \n"); // Still need logic
                if (scanf(" %d",&decision_three_int_one) != 1) {
                    // Handle invalid input (non-integer)
                    printf("Invalid input. Please enter an integer. \n");

                    // Clear the input buffer
                    while (getchar() != '\n');
                } else {
                    switch (decision_three_int_one) {
                            case 1:
                                printf("Ahh! Cartomancy! \n");
                                sleep(1);
                                printf("Very well then, let's get started then. \n");
                                sleep(1);
                                printf("*This feature is still in progress* \n");
                                sleep(3);
                                continue_from_decision_two_int_one_while_loop = 0;
                                break;
                            case 2:
                                printf("Chiromancy! One of my favorites! \n");
                                sleep(1);
                                printf("Let's waste no time then. \n");
                                sleep(1);
                                printf("*This feature is still in progress* \n");
                                sleep(3);
                                continue_from_decision_two_int_one_while_loop = 0;
                                break;
                            case 3:
                                printf("Chronomancy, huh. \n");
                                sleep(1);
                                printf("This is one of the more complex practices that I provide and I am happy you choose it. \n");
                                sleep(3);
                                printf("*This feature is still in progress* \n");
                                continue_from_decision_two_int_one_while_loop = 0;
                                sleep(3);
                                break;
                            case 4:
                                printf("Crystallomancy. One of my most popular methods. \n");
                                sleep(2);
                                printf("Let's proceed. \n");
                                sleep(1);
                                printf("*This feature is still in progress* \n");
                                sleep(3);
                                continue_from_decision_two_int_one_while_loop = 0;
                                break;
                            default:
                                printf("Enter an interger between 1 and 4. \n");
                                break;
                    }
                }
            }
        }

        if (decision_three_int_two == 2) {
            printf("Choose your next plan of action: \n");
            sleep(1);

            while (continue_from_decision_three_int_two_while_loop) {
                printf("Choose an option as an interger: \n");
                printf("1: Pull out your switch blade and stand your ground. \n");
                printf("2: Try to run away. \n");
                printf("3: Beg for remorse. \n");
                printf("4: Do nothing. \n");

                int soothsayer_weapon = rand() % 3 + 1;
                int soothsayer_hit_chance = rand() % 100 + 1;
                int player_hit_chance = rand() % 100 + 1;

                int player_escape_chance = rand() % 100 + 1;

                int acceptance = rand() % 3 + 1;

                if (scanf(" %d", &decision_four_int_two) != 1) {
                    // Handle invalid input (non-integer)
                    printf("Invalid input. Please enter an integer. \n");

                    // Clear the input buffer
                    while (getchar() != '\n');
                } else {
                    switch (decision_four_int_two) {
                            case 1:
                                printf("*You pull out your switch blade. You then proceed to yell bring it bitch!* \n");
                                sleep(2);
                                printf("I don't think you know who you are messing with. \n");
                                sleep(1);
                                switch (soothsayer_weapon) {
                                    case 1:
                                        printf("*The soothsayer pulls out a pistol and puts one in the chamber and aims it at your chest.* \n");
                                        sleep(3);
                                        printf("You begin to approach the soothsayer as she fires the pistol nearly point blank to your chest. \n");
                                        sleep(3);
                                        if (soothsayer_hit_chance >= 74) {
                                            if (player_hit_chance >= 50) {
                                                printf("*The soothsayer misses you. You proceed to shank her multiple times in the chest, spilling her guts.* \n"); // you hit they miss
                                                sleep(2);

                                                int damage_on_soothsayer = rand() % 25 + 5;
                                                soothsayer_hp = soothsayer_hp - damage_on_soothsayer;

                                                if (soothsayer_hp <= 0) { 
                                                    printf("You killed the soothsayer with a hit of %d. How are you going to explain this one to your friends? \n", damage_on_soothsayer);
                                                    continue_from_decision_three_int_two_while_loop = 0;
                                                }
                                                if (soothsayer_hp > 0) {
                                                    printf("You delt %d damage and she now has %d health.\n", damage_on_soothsayer, soothsayer_hp);
                                                }
                                                } else {
                                                    printf("*Both you and the soothsayer wiff. Kind of embarrassing honestly.* \n");
                                                }
                                        } else {
                                            printf("*The soothsayer shot you in the chest* \n"); // they hit and fuck you up
                                            sleep(2);

                                            int damage_on_user = rand() % 30 + 10;
                                            player_hp = player_hp - damage_on_user;

                                            if (player_hp <= 0) { 
                                                printf("You somehow died to a fortune teller by taking %d damage. Nice going big shot. \n", damage_on_user);
                                                continue_from_decision_three_int_two_while_loop = 0;
                                            }
                                            if (player_hp > 0) {
                                                printf("You lost %d health and now have %d health.\n", damage_on_user, player_hp);
                                            }
                                        }
                                        sleep(2);
                                        break;
                                    case 2:
                                        printf("*The soothsayer pulls out a barbed wire bat.* \n");
                                        sleep(2);
                                        printf("You begin to approach the soothsayer as she flails her bat in your direction. \n");
                                        sleep(2);
                                        if (soothsayer_hit_chance >= 50) {
                                            if (player_hit_chance >= 50) {
                                                printf("*The soothsayer misses you. You proceed to shank her multiple times in the chest, spilling her guts.* \n"); // you hit they miss
                                                sleep(2);

                                                int damage_on_soothsayer = rand() % 25 + 5;
                                                soothsayer_hp = soothsayer_hp - damage_on_soothsayer;

                                                if (soothsayer_hp <= 0) { 
                                                    printf("You killed the soothsayer with a hit of %d. How are you going to explain this one to your friends? \n", damage_on_soothsayer);
                                                    continue_from_decision_three_int_two_while_loop = 0;
                                                }
                                                if (soothsayer_hp > 0) {
                                                    printf("You delt %d damage and she now has %d health.\n", damage_on_soothsayer, soothsayer_hp);
                                                }
                                                } else {
                                                    printf("*Both you and the soothsayer wiff. You guys reset.* \n");
                                                }
                                        } else {
                                            printf("*The soothsayer swings and directly nails you in the head.* \n"); // they hit and fuck you up
                                            sleep(2);

                                            int damage_on_user = rand() % 18 + 6;
                                            player_hp = player_hp - damage_on_user;

                                            if (player_hp <= 0) { 
                                                printf("You died by decapitation and took %d damage. Nice going big shot. \n", damage_on_user);
                                                continue_from_decision_three_int_two_while_loop = 0;
                                            }
                                            if (player_hp > 0) {
                                                printf("You lost %d health and now have %d health.\n", damage_on_user, player_hp);
                                            }
                                        }
                                        sleep(2);
                                        break;
                                    case 3:
                                        printf("*The soothsayer pulls out throwing knifes.* \n");
                                        sleep(2);
                                        printf("You begin to approach the soothsayer as she begins to ready her throwing knifes. \n");
                                        sleep(2);
                                        if (soothsayer_hit_chance >= 33) {
                                            if (player_hit_chance >= 50) {
                                                printf("*The soothsayer misses you. You proceed to shank her multiple times in the chest, spilling her guts.* \n"); // you hit they miss
                                                sleep(2);

                                                int damage_on_soothsayer = rand() % 25 + 5;
                                                soothsayer_hp = soothsayer_hp - damage_on_soothsayer;

                                                if (soothsayer_hp <= 0) { 
                                                    printf("You killed the soothsayer with a hit of %d. How are you going to explain this one to your friends? \n", damage_on_soothsayer);
                                                    continue_from_decision_three_int_two_while_loop = 0;
                                                }
                                                if (soothsayer_hp > 0) {
                                                    printf("You delt %d damage and she now has %d health.\n", damage_on_soothsayer, soothsayer_hp);
                                                }
                                                } else {
                                                    printf("*Both you and the soothsayer miss each other.* \n");
                                                }
                                        } else {
                                            printf("*The soothsayer throws her knifes and punctures your multiple areas of your trunk.* \n"); // they hit and fuck you up
                                            sleep(3);

                                            int damage_on_user = rand() % 22 + 4;
                                            player_hp = player_hp - damage_on_user;

                                            if (player_hp <= 0) { 
                                                printf("The soothsayer punctured your lungs with her throwing knifes and you took %d damage. \n", damage_on_user);
                                                continue_from_decision_three_int_two_while_loop = 0;
                                            }
                                            if (player_hp > 0) {
                                                printf("You lost %d health and now have %d health. \n", damage_on_user, player_hp);
                                            }
                                        }
                                        sleep(2);
                                        break;
                                }
                                break;
                            case 2:
                                printf("*You attempt to make a run for the exit.* \n");
                                sleep(1);
                                printf("*As you proceed to the exit, the soothsayer tries her best to stop you by blocking your path.* \n");
                                sleep(3);
                                printf("She yells, 'Not today!' \n");
                                sleep(1);
                                if (player_escape_chance >= 95) {
                                    printf("*You juke her out so bad that you were able to get behind her and snap her neck.* \n");
                                    sleep(2);
                                    printf("*You set the establishment ablaze to discard the evidence.* \n");
                                    sleep(2);
                                    printf("*You leave as if nothing ever happened.* \n");
                                    continue_from_decision_three_int_two_while_loop = 0;
                                } else if (player_escape_chance >= 90 && player_escape_chance < 95) {
                                    printf("*You successfully dodge the soothsayer.* \n");
                                    sleep(2);
                                    printf("*You you make a run for the trees and you make it to safety.* \n");
                                    sleep(3);
                                    printf("*For now...* \n");
                                } else if (player_escape_chance >= 50 && player_escape_chance < 90) {
                                    printf("*You step on a lego and fall to the ground in excruciating pain.* \n");
                                    sleep(2);
                                    printf("'Prepare for the lashing!' She yells. \n");
                                    sleep(1);
                                    printf("*The soothsayer whips you multiple times relentlessly.* \n");

                                    int damage_on_user = rand() % 16 + 4;
                                    player_hp = player_hp - damage_on_user;

                                    if (player_hp <= 0) { 
                                        printf("The soothsayer criticaly struck you in the head with her whip you took %d damage. \n", damage_on_user);
                                        sleep(2);
                                        printf("You died :( \n");
                                        continue_from_decision_three_int_two_while_loop = 0;
                                    }
                                    if (player_hp > 0) {
                                        printf("You lost %d health and now have %d health. \n", damage_on_user, player_hp);
                                    }
                                } else if (player_escape_chance >= 2 && player_escape_chance < 50) {
                                    printf("*You get body blocked by the soothsayer* \n");
                                    sleep(1);
                                    printf("*The soothsayer reaches her hand out as a jester to help you up.* \n");
                                    sleep(2);
                                    printf("You proceed to fall for the soothsayer's tricks.* \n");
                                    sleep(2);
                                    printf("*She continues to manipulate your wrist and puts you in a hucklebuck.* \n");

                                    int damage_on_user = rand() % 10 + 2;
                                    player_hp = player_hp - damage_on_user;

                                    if (player_hp <= 0) { 
                                        printf("The soothsayer somehow killed you when you. You took %d damage from that hucklebuck. \n", damage_on_user);
                                        continue_from_decision_three_int_two_while_loop = 0;
                                    }
                                    if (player_hp > 0) {
                                        printf("You lost %d health and now have %d health. \n", damage_on_user, player_hp);
                                    }
                                } else if (player_escape_chance == 1) {
                                    printf("*You somehow tripped and hit your head on the corner of the desk.* \n");
                                    sleep(2);
                                    printf("*You snapped your neck and died almost instantly.* \n");
                                    continue_from_decision_three_int_two_while_loop = 0;
                                }
                                sleep(2);
                                break;
                            case 3:
                                printf("*You beg the soothsayer to not hurt you.* \n");
                                sleep(2);
                                if (acceptance == 1) {
                                    printf("*You mention your kids and the value of your life.* \n");
                                    sleep(2);
                                    printf("*The soothsayer empahizes with you and you get on her good side.* \n");
                                    sleep(2);
                                    decision_four_int_two_alt = 3;
                                    continue_from_decision_three_int_two_while_loop = 0;
                                } else {
                                    printf("You mention how you should be spared and forgiven. \n");
                                    sleep(2);
                                    printf("The soothsayer did not seem to care about your whole spiel. \n");
                                    sleep(2);
                                    printf("Instead, the she came up to you while on you were on your knees and kills you execution style. \n");
                                    sleep(3);
                                    continue_from_decision_three_int_two_while_loop = 0;
                                }
                                break;
                            case 4:
                                printf("*You stand still as if the soothsayer could not see you.* \n");
                                sleep(2);
                                printf("*The soothsayer proceeds to approach you and looks at you with confusion.* \n");
                                sleep(2);
                                printf("*She continues to knee you in the balls and bitch slaps you.* \n");

                                int damage_on_user = rand() % 10 + 2;
                                player_hp = player_hp - damage_on_user;

                                if (player_hp <= 0) { 
                                    printf("The soothsayer burst you left nut. You die of pain and embarrassment. You took %d damage from this action. \n", damage_on_user);
                                    continue_from_decision_three_int_two_while_loop = 0;
                                }
                                if (player_hp > 0) {
                                    printf("You lost %d health and now have %d health. \n", damage_on_user, player_hp);
                                }
                                sleep(2);
                                break;
                            default:
                                printf("Enter an interger between 1 and 4. \n");
                                break;
                    }
                }
            }
        }

        if (decision_four_int_two_alt == 3) {
            printf("What would you like to do next? \n");
            printf("1: Thank her for understanding and leave. \n");
            printf("2: Assassinate her. \n");

            while (continue_from_decision_four_int_three_while_loop) {
                printf("Choose an option as an interger: \n");
                if (scanf(" %d",&decision_five_int_three) != 1) {
                    // Handle invalid input (non-integer)
                    printf("Invalid input. Please enter an integer. \n");

                    // Clear the input buffer
                    while (getchar() != '\n');
                } else {
                    switch (decision_five_int_three) {
                            case 1:
                                printf("*You thank her for her understanding.* \n");
                                sleep(2);
                                printf("*You guys say your good byes and part ways.* \n");
                                sleep(1);
                                printf("You peacefully de-escalated the situation! \n");
                                sleep(1);
                                printf("Congrats! \n");
                                sleep(1);
                                continue_from_decision_four_int_three_while_loop = 0;
                                break;
                            case 2:
                                printf("*You and the soothsayer conversate for a few minutes* \n");
                                sleep(2);
                                printf("*You gain her trust and you found an oppertunity to assassinate the soothsayer.* \n");
                                sleep(3);
                                printf("*You grab her from behind and you slit her throat.* \n");
                                sleep(2);
                                printf("*You watch her bleed out on the floor, then you flee from the scene.* \n");
                                sleep(2);
                                continue_from_decision_four_int_three_while_loop = 0;
                                break;
                            default:
                                printf("Enter an interger between 1 and 2. \n");
                                break;
                    }
                }
            }
        }

        while (1) {
            printf("Restart? y/n: \n");
            scanf(" %c", &last_decision);

            if (last_decision == 'y') {
                break;
            } else if (last_decision == 'n') {
                return 0;
            } else {
                printf("Enter 'y' or 'n'. \n");
            }
        } 
    } while (last_decision == 'y');
}