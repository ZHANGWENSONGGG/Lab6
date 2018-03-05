// <Wensong Zhang G01046100>
// CS 262, Section <204>
// Lab 6

#include <stdio.h>
#include <stdlib.h>
#include <mem.h>

int main() {
    char nameOfInputFile[100];
    char nameOfOutputFile[100];
    FILE *inFile;
    FILE *outFile;
    char *line = NULL;
    size_t len = 0;
    ssize_t read = 0;
    char *token;
    char delim[] = " ";
    char wordForDel[100];
    char removeWords[100];

    printf("Please enter the name of input file: ");
    fgets(nameOfInputFile, 20, stdin);

    printf("Please enter the name of output file: ");
    fgets(nameOfInputFile, 20, stdin);

    inFile = fopen(nameOfInputFile, "r");
    outFile = fopen(nameOfOutputFile, "w");

    if(inFile == NULL){
        printf("Error1.");
        exit(1);
    }
    if(outFile == NULL){
        printf("Error2.");
        exit(1);
    }

    while(read == getline(&line, &len, inFile) != -1){
        printf("%s\n", line);
        printf("Enter position of word to delete (Start counting at 0). Enter -1 to skip deletion: ");
        fgets(wordForDel, 100, stdin);

        token = strtok(line, delim);
        while (token != wordForDel){
            token = strtok(NULL, delim);
        }

        //get the index of every string, and connect every one except the deleted word.
    }

    return 0;
}