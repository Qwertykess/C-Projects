#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int cube(int value){
//A return statement that can provide the cube of a number
    scanf("%d", &value);
    return value * value * value;

    printf("Give a number to get its cubed value: ");
    printf("The answer is: %d", cube(0));
}



int main(){
    FILE * TryLang = fopen("testFile_C.txt", "w"); //writes a new file

    fprintf(TryLang, "Something something blablabla\nBoom may text na sa file");

    fclose(TryLang);
    return 0;
}

void ProjectLoop(){
/*    printf("Take a look at Kenchoy's C Projects!\n");
    printf("____________________________________\n\n");

    ProjectLoop();*/

    int userInput;
    int validuserInput;

    while (1){
        printf("What project do you want to try? (Input the number of your choice)\n");
        printf("1.\) Calculator\n");
        printf("2.\) Guess my ELO\n");
        printf("3.\) MadLibs\n");
        printf("4.\) Exit\n");

        validuserInput = scanf("%d", &userInput);
        if (validuserInput != 1) {
            while (getchar() != '\n');
            printf("Invalid input. Please enter an integer.\n");
            continue;
        }

        switch (userInput){
        case 1:
            Calculator();
            break;
        case 2:
            GuessTheElo();
            break;
        case 3:
            MadLibs();
            break;
        case 4:
            exit(1);
            break;
        default:
            printf("Number pls.\n");
            break;
        }
    }
}

void Calculator() {

    int result, num_1, num_2, calculation_type;

    do {
        printf("\nWhat is the first number? \n");
        scanf("%d", &num_1);
    } while (getchar() != '\n');

    do {
        printf("\nWhat operation would you like to use? \n");
        printf("Please enter \"1\" (for addition)\,\"2\" (for subtraction)\,\"3\" (for multiplication)\,\"4\" (for division)\n");
        scanf("%s", &calculation_type);
    } while (getchar() != '\n');

    do {
        printf("\nWhat is the second number? \n");
        scanf("%d", &num_2);
    } while (getchar() != '\n');

    switch (calculation_type){
    case '1':
        result = num_1+num_2;
        break;
    case '2':
        result = num_1-num_2;
        break;
    case '3':
        result = num_1*num_2;
        break;
    case '4':
        if (num_2!=0){
            result = num_1/num_2;
        } else {
            printf("\nBawal yan boi!\n");
            return Calculator();
        }
    default:
        printf("\Only 1-4 pls\n");
        return Calculator();
        break;
    }

    if (result != -1) {
        printf("\nThe result is: %d\n\n\n", result);
    }
}

void GuessTheElo(){
    int EloGuess;
    int GuessCounter = 1;
    int GuessLimit = 5;
    int validInput;

    printf("\n\n\n***************************************\n");
    printf("Guess the ELO - You only have 5 chances\n");
    printf("***************************************\n\n");

    printf("What MY person's ELO? \n");

    while ((EloGuess < 1500 || EloGuess > 1600) && GuessCounter <= GuessLimit){

        printf("%d. ", GuessCounter);

        validInput = scanf("%d", &EloGuess);
        if (validInput != 1) {
            // Clear the input buffer if scanf fails
            while (getchar() != '\n');
            printf("Invalid input. Please enter an integer.\n");
            continue;  // Skip the rest of the loop and prompt again
        }

        if (EloGuess >= 1500 && EloGuess <= 1600) {
            printf("///  Correct!  ///\n");
        } else {
            printf("XXX  Wrong  XXX\n");
            GuessCounter++;
        }

    }
    if (EloGuess >= 1500 && EloGuess <= 1600){
        printf("Tama ka jan. My rapid chess(dot)com ELO is around %d.\n\n\n", EloGuess);
    } else {
        printf("You are out of chances to guess...\n\n\n");
    }
}

void MadLibs(){
    char name[20];
    char color[20];
    char noun[20];
    char Full_Name[20];

    printf("\nWhat do I call you? ");
    scanf("%s", name);

    printf("Hello %s!\n\n", name);

    printf("Name a celebrity: ");
    scanf("%s", Full_Name);
    printf("Enter a color: ");
    scanf("%s", &color);
    printf("Enter a noun: ");
    scanf("%s", &noun);

	printf("\nRoses are %s\n", color);
	printf("%s are blue, \n", noun);
	printf("Damn, you like %s?\n\n", Full_Name);

//	printf("Would you like to try once more?");

}

void NumberInList(){
//
	int numbers[4];
	printf("Enter 4 numbers: ");
	scanf("%d", &numbers);
	printf("The third number is: %d", numbers[2]);
}

