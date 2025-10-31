#include <stdio.h>
#include <unistd.h>

int main(){
// Hello world
    puts("Hello World");
    puts("Welcome to C programming");

// ASCII banner
    puts("********");
    puts("*C is fun*");
    puts("*********");

// Fputs
    fputs("Keep pushing forward\n", stdout);
    fputs("Never give up\n",stdout);

// Quote.txt
    FILE *quo;
    quo = fopen("Quote.txt", "w");
    fputs( "journey of a thousand miles begin with a single step", quo );
    fclose(quo);

// Echo is the fun part of sound
    /*
    char words[100];
    fgets(words,100, stdin);
    fputs(words, stdout);
    */

// print users name using fgets
    /*
    char name[50];
    printf("Enter your name here; ");
    fgets(name, 50, stdin);
    printf("Hello, %s", name);
    */

// Using write function

    FILE *rite;

    rite = fopen("write.txt", "w");

    write(1, "Coding in C is powerful\n", 25);

// Using putchar
    int c;
    for (c ='a'; c <= 'z'; c++)
    {
        /* code */
        putchar(c);
        // return 0;
    };

// Using the getchar()
    /*
    int i = 30;
    int charac;
    printf("\nEnter your text here (press enter to stop): ");

    while (i--)
    {
        // code 
            charac = getchar();
            putchar(charac);
    }

    */
// Manipulating files
    

    FILE *fp;
    char sentence;
    int ex = '!';
    int ch;

    fp = fopen("data.txt", "w");
    fprintf(fp, "C programming is fun");

    fputc(ex, fp);
    fclose(fp);

    fp = fopen("data.txt", "r");
    
    fscanf(fp, "%c", sentence);
    printf("\nFirst Word; %c\n", sentence);

    while(!feof(fp)){
        ch = fgetc(fp);
        putchar(ch);

    }

}