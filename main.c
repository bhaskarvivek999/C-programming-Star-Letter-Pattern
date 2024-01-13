#include <stdio.h>
#include <stdlib.h>
#include "getPattern.h"

int main()
{
    char letter;
    int loop;

   /* letterA();
    letterB();
    letterC();
    letterD();
    letterE();
    letterF();
    letterG();
    letterH();
    letterI();
    letterJ();
    letterK();
    letterL();
    letterM();
    letterN();
    letterO();
    letterP();
    letterQ();
    letterR();
    letterS();
    letterT();
    letterU();
    letterV();
    letterW();
    letterX();
    letterY();
    letterZ();*/



do{
    printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("Enter capital letter to print pattern of that letter:-");
    scanf(" %c",&letter);

    switch(letter)
    {
    case 'A':
    letterA();
    break;

    case 'B':
    letterB();
    break;

    case 'C':
    letterC();
    break;

    case 'D':
    letterD();
    break;

    case 'E':
    letterE();
    break;

    case 'F':
    letterF();
    break;

    case 'G':
    letterG();
    break;

    case 'H':
    letterH();
    break;

    case 'I':
    letterI();
    break;

    case 'J':
    letterJ();
    break;

    case 'K':
    letterK();
    break;

    case 'L':
    letterL();
    break;

    case 'M':
    letterM();
    break;

    case 'N':
    letterN();
    break;

    case 'O':
    letterO();
    break;

    case 'P':
    letterP();
    break;

    case 'Q':
    letterQ();
    break;

    case 'R':
    letterR();
    break;

    case 'S':
    letterS();
    break;

    case 'T':
    letterT();
    break;

    case 'U':
    letterU();
    break;

    case 'V':
    letterV();
    break;

    case 'W':
    letterW();
    break;

    case 'X':
    letterX();
    break;

    case 'Y':
    letterY();
    break;

    case 'Z':
    letterZ();
    break;

    default:
    printf("\n ENTER ONLY CAPITAL LETTERS...!");
    }

    printf("\n PRESS 1 CONTINUE....\n\n PRSS ANY KEY TO EXTI...! \n >> ");
    scanf("%d",&loop);

    if(loop!=1)
    {
        loop =0;
    }
}while(loop);

    return 0;
}
