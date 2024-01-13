#include<stdio.h>
#include "getPattern.h"

void letterA()
{

int i,j;

printf("\n______________\n\n");

    for(i=1;i<=7;i++)
    {
        printf("   ",i);
        for(j=1;j<=5;j++)
        {
            if(i==1 && (j!=1 && j!=5))
            {
                printf("*");
            }
            else if(i==1 &&(j==1 || j==5))
            {
                printf(" ");
            }

            if((i==2 || i==3) && (j==5 || j==1))
            {
                printf("*");
            }
            else if((i==2 || i==3) && (j!=5 && j!=1))
            {
                printf(" ");
            }

            if(i==4)
            {
                printf("*");
            }

             if(i>4 && (j==1 || j==5))
            {
                printf("*");
            }
            else if(i>4 && (j!=1 && j!=5))
            {
                printf(" ");
            }
        }
        printf("\n",i);
    }

    printf("\n______________\n\n");
}


void letterB()
{
    int i,j;

    printf("\n______________\n\n");

    for(i=1;i<=7;i++)
    {
        printf("   ");
        for(j=1;j<=5;j++)
        {
            if((i==1 || i==4 || i==7) && (j!=5))
            {  // printf("",i,j);
                printf("*");
            }
            else if((i==1 || i==4 || i==7) &&(j==5))
            {
               // printf("",i,j);
                printf(" ");
            }


            if((i==2 || i==3 || i==5 || i==6)&&(j==1 || j==5))
            {
                printf("*");
            }
            else if((i==2 || i==3 || i==5 || i==6) && (j!=5 || j!=1))
            {
                 printf(" ");
            }

        }
        printf("\n");
    }
    printf("\n______________\n\n");
}



void letterC()
{
    int i,j;
    printf("\n______________\n\n");
    for(i=1;i<=7;i++)
    {
        printf("   ");
        for(j=1;j<=5;j++)
        {
           if((i==1 || i==7) && (j!=1 && j!=5))
            {
                printf("*");
            }
            else if((i==1 || i==7) && (j==1 || j==5))
            {
                printf(" ");
            }


            if((i==2 || i==6) && (j==1 || j==5))
            {
                printf("*");
            }
            else if((i==2 || i==6) && (j!=1 && j!=5))
            {
                printf(" ");
            }


            if((i==3 || i==4 || i==5) && (j==1))
            {
                printf("*");
            }
            else if((i==3 || i==4 || i==5) && (j!=5))
            {
                printf(" ");
            }
        }
        printf("\n");
    }
printf("\n______________\n\n");
}


void letterD()
{
    int i,j;

    printf("\n______________\n\n");

    for(i=1;i<=7;i++)
    {
        printf("   ");
        for(j=1;j<=5;j++)
        {
            if((i==1 || i==7) && (j!=5))
            {
                printf("*");
            }
            else if((i==1 || i==7) && (j>=5))
            {
                 printf(" ");
            }

// (i==2 || i==3|| i==4 || i==5|| i==6)

            if((i>=2 && i<=6) && (j==1 || j==5))
            {
                 printf("*");
            }
            else if((i>=2 && i<=6) && (j!=1 && j!=5))
            {
                 printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n______________\n\n");

}

void letterE()
{
    int i,j;
    printf("\n______________\n\n");
    for(i=1;i<=7;i++)
    {
        printf("   ");
        for(j=1;j<=5;j++)
        {
            if(i==1 || i==7)
            {   //printf("i=%dj=%d",i,j);
                printf("*");
            }

            if((i==4) && (j!=5))
            {
                printf("*");
            }
            else if((i==4)&& (j==5))
            {
                printf(" ");
            }

            if((i==2 || i==3 || i==5 || i==6)&&(j==1))
            {
                printf("*");
            }
            else if((i==2 || i==3 || i==5 || i==6)&&(j!=1))
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n______________\n\n");
}




void letterF()
{
    int i,j;
    printf("\n______________\n\n");
    for(i=1;i<=7;i++)
    {
        printf("   ");
        for(j=1;j<=5;j++)
        {
            if(i==1)
            {   //printf("i=%dj=%d",i,j);
                printf("*");
            }

            if((i==4) && (j!=5))
            {
                printf("*");
            }
            else if((i==4)&& (j==5))
            {
                printf(" ");
            }

            if((i==2 || i==3 || i==5 || i==6 || i==7)&&(j==1))
            {
                printf("*");
            }
            else if((i==2 || i==3 || i==5 || i==6 || i==7)&&(j!=1))
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n______________\n\n");
}




void letterG()
{
    int i,j;
    printf("\n______________\n\n");
    for(i=1;i<=7;i++)
    {
        printf("   ");
        for(j=1;j<=5;j++)
        {

           if((i==1 || i==7)&& (j!=5 && j!=1))
           {
               printf("*");
           }
           else if((i==1 || i==7) && (j==5 || j==1))
           {
               printf(" ");
           }

           if((i==2 || i==5 || i==6) && (j==1 || j==5))
           {
               printf("*");
           }
           else if((i==2 || i==5 || i==6) && (j!=1 && j!=5))
           {
               printf(" ");
           }

           if((i==3)&&(j==1))
           {
               printf("*");
           }
           else if((i==3)&&(j!=1))
           {
               printf(" ");
           }

           if((i==4) && (j!=2 && j!=3))
           {
               printf("*");
           }
           else if((i==4) && (j==2 || j==3))
           {
               printf(" ");
           }

        }
        printf("\n");
    }

    printf("\n______________\n\n");
}


void letterH()
{
    int i,j;
printf("\n______________\n\n");
    for(i=1;i<=7;i++)
    {
        printf("   ");
        for(j=1;j<=5;j++)
        {
            if( ((i>=1 && i<=7)&&(i!=4)) && (j==1 || j==5))
            {
                printf("*");
            }
            else if( ((i>=1 && i<=7)&&(i!=4)) && (j!=1 || j!=5))
            {
                printf(" ");
            }

            if(i==4)
            {
                printf("*");
            }
        }

        printf("\n");
    }

    printf("\n______________\n\n");
}



void letterI()
{
    int i,j;
    printf("\n______________\n\n");
    for(i=1;i<=7;i++)
    {
        printf("   ");
        for(j=1;j<=5;j++)
        {
            if((i==1 || i==7) && (j!=1 && j!=5))
            {
                printf("*");
            }
            else if((i==1 || i==7) && (j==1 || j==5))
            {
                printf(" ");
            }

            if((i>=2 && i<=6) && (j==3))
            {
                printf("*");
            }
            else if((i>=2 && i<=6) && (j!=3))
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n______________\n\n");
}


void letterJ()
{
    int i,j;
    printf("\n______________\n\n");
    for(i=1;i<=7;i++)
    {
        printf("   ");
        for(j=1;j<=5;j++)
        {
            if((i==1)&&(j==4 || j==5))
            {
                printf("*");
            }
            else if((i==1) && (j!=4 && j!=5))
            {
                printf(" ");
            }

            if((i>=2 && i<=5) && (j==5))
            {
                printf("*");
            }
            else if((i>=2 && i<=5) && (j!=5))
            {
                printf(" ");
            }


            if((i==6) && (j==1 || j==5))
            {
                printf("*");
            }
            else if((i==6) && (j!=1 && j!=5))
            {
                printf(" ");
            }


            if((i==7) && (j!=1 && j!=5))
            {
                //printf("*i%d",i);
                printf("*");
            }
            else if((i==7) && (j==1 || j==5))
            {
                //printf("_si%d",i);
                printf(" ");
            }

        }
        printf("\n");
    }

    printf("\n______________\n\n");
}



void letterK()
{
    int i,j,k=5;
    int p=-2;
    printf("\n______________\n\n");
    for(i=1;i<=7;i++)
    {
        p=p+1;
        printf("   ");
        for(j=1;j<=5;j++)
        {

            if((i>=1 && i<=4) && (j==k || j==1))
            {
                printf("*");

            }
           else if((i>=1 && i<=4) && (j!=k && j!=1))
           {

               printf(" ");

           }


            if((i>=5 && i<=7) && (j==p || j==1))
            {
               //printf("|j=%dp=%d*|",j,p);
               printf("*");
                //printf("*|");

            }
            else if((i>=5 && i<=7) && (j!=p && j!=1))
            {
               // printf("_j=%dp=%d$",j,p);
              // printf(" --y=%d_s--",y);
              printf(" ");

            }

        }

        k--;

        printf("\n");
    }

    printf("\n______________\n\n");
}

void letterL()
{
    int i,j;
    printf("\n______________\n\n");
    for(i=1;i<=7;i++)
    {
        printf("   ");
        for(j=1;j<=5;j++)
        {
            if((i>=1 && i<=6) && (j==1))
            {
                printf("*");
            }
            else if((i>=1 && i<=6) && (j!=1))
            {
                printf(" ");
            }

            if(i==7)
            {
                printf("*");
            }
        }
        printf("\n");
    }

    printf("\n______________\n\n");
}



void letterM()
{
    int i,j;
    printf("\n______________\n\n");
    for(i=1;i<=7;i++)
    {
        printf("   ");
        for(j=1;j<=5;j++)
        {
            if(((i>=1 && i<=7)&&(i!=2 && i!=3)) && (j==1 || j==5))
            {
                printf("*");
            }
            else if(((i>=1 && i<=7)&&(i!=2 && i!=3)) && (j!=1 || j!=5))
            {
                printf(" ");
            }

            if((i==2)&& ((j>=1 && j<=5) && (j!=3)))
            {
                printf("*");
            }
            else if((i==2)&& ((j>=1 && j<=5) && (j==3)))
            {
                printf(" ");
            }

            if((i==3) && (i==3) && (j!=2 && j!=4))
            {
                printf("*");
            }
            else if((i==3) && (j==2 || j==4 ))
            {
                printf(" ");
            }

        }
        printf("\n");
    }

    printf("\n______________\n\n");
}





void letterN()
{
    int i,j,k=2;
    printf("\n______________\n\n");
    for(i=1;i<=7;i++)
    {
        printf("   ");
        for(j=1;j<=5;j++)
        {
            if((i==1 || i==2 || i==6 || i==7) && (j==1 || j==5))
            {
                printf("*");
            }
            else if((i==1 || i==2 || i==6 || i==7) && (j!=1 && j!=5))
            {
                printf(" ");
            }


            if((i>=3 && i<=5) && (j==1||j==5 || j==i-1))
            {   //printf("*k=%d&j=%d",k,j);
                printf("*");

            }
            else if((i>=3 && i<=5) && ( j!=1 && j!=5 && j!=i-1))
            {
               // printf("_k=%d&j=%d",k,j);
            printf(" ");
            }
        }

        printf("\n");
    }

    printf("\n______________\n\n");
}



void letterO()
{
    int i,j;
    printf("\n______________\n\n");
    for(i=1;i<=7;i++)
    {
        printf("   ");
        for(j=1;j<=5;j++)
        {
            if((i==1 || i==7)&& (j>=2 && j<=4))
            {
                printf("*");
            }
            else if((i==1 || i==7) && (j==1 || j==5))
            {
                printf(" ");
            }


            if((i>=2 && i<=6) && (j==1 || j==5))
            {
                printf("*");
            }
            else if((i>=2 && i<=6) && (j!=1 && j!=5))
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n______________\n\n");
}




void letterP()
{
    int i,j;
    printf("\n______________\n\n");
    for(i=1;i<=7;i++)
    {
        printf("   ");
        for(j=1;j<=5;j++)
        {
            if((i==1 || i==4) && (j>=1 && j<=4))
            {
                printf("*");
            }
            else if((i==1 || i==4) && (j==5))
            {
                printf(" ");
            }


            if((i==2 || i==3) && (j==1 || j==5))
            {
                printf("*");
            }
            else if((i==2 || i==3) && (j!=1 && j!=5))
            {
                printf(" ");
            }

            if((i>=5) && (j==1))
            {
                printf("*");
            }
            else if((i>=5) && (j!=1))
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n______________\n\n");
}



void letterQ()
{
    int i,j;
    printf("\n______________\n\n");
    for(i=1;i<=7;i++)
    {
        printf("   ");
        for(j=1;j<=5;j++)
        {
            if((i==1) && (j>=2 && j<=4))
            {
                printf("*");
            }
            else if((i==1) && (j==1 || j==5))
            {
                printf(" ");
            }

            if((i>=2 && i<=4) && (j==1 || j==5))
            {
                printf("*");
            }
            else if((i>=2 && i<=4) && (j!=1 && j!=5))
            {
                printf(" ");
            }

            if((i==5 || i==6) &&(j==1 || j==5 || j==i-2))
            {
                printf("*");
            }
            else if((i==5 || i==6) && (j!=1 && j!=5 && j!=i-2))
            {
                printf(" ");
            }

            if((i==7) && (j!=1))
            {
                printf("*");
            }
            else if((i==7) && (j==1))
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n______________\n\n");
}




void letterR()
{
    int i,j;
    printf("\n______________\n\n");
    for(i=1;i<=7;i++)
    {
        printf("   ");
        for(j=1;j<=5;j++)
        {
            if((i==1 || i==4) && (j>=1 && j<=4))
            {
                printf("*");
            }
            else if((i==1 || i==4) && (j==5))
            {
                printf(" ");
            }


            if((i==2 || i==3) && (j==1 || j==5))
            {
                printf("*");
            }
            else if((i==2 || i==3) && (j!=1 && j!=5))
            {
                printf(" ");
            }

            if((i>=5) && (j==1 || j==i-2))
            {
                printf("*");
            }
            else if((i>=5) && (j!=1 && j!=i-2))
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n______________\n\n");
}


void letterS()
{
    int i,j;
    printf("\n______________\n\n");
    for(i=1;i<=7;i++)
    {
        printf("   ");
        for(j=1;j<=5;j++)
        {
            if((i==1 || i==4 || i==7) && (j>=2 && j<=4))
            {
                printf("*");
            }
            else if((i==1 || i==4 || i==7) && (j==1 || j==5))
            {
                printf(" ");
            }

            if((i==2 || i==6) && (j==1 || j==5))
            {
                printf("*");
            }
            else if((i==2 || i==6) && (j!=1 && j!=5))
            {
                printf(" ");
            }

            if((i==3) && (j==1))
            {
                printf("*");
            }
            else if((i==3) && (j!=1))
            {
                printf(" ");
            }

            if((i==5) && (j==5))
            {
                printf("*");
            }
            else if((i==5) && (j!=5))
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n______________\n\n");
}




void letterT()
{
    int i,j;
    printf("\n______________\n\n");
    for(i=1;i<=7;i++)
    {
        printf("   ");
        for(j=1;j<=5;j++)
        {
            if(i==1)
            {
                printf("*");
            }

            if((i>=2 && i<=7) && (j==3))
            {
                printf("*");
            }
            else if((i>=2 && i<=7) && (j!=3))
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n______________\n\n");
}


void letterU()
{
    int i,j;
    printf("\n______________\n\n");
    for(i=1;i<=7;i++)
    {
        printf("   ");
        for(j=1;j<=5;j++)
        {
            if((i>=1 && i<=6) && (j==1 || j==5))
            {
                printf("*");
            }
            else if((i>=1 && i<=6) && (j!=1 && j!=5))
            {
                printf(" ");
            }


            if((i==7) && (j>=2 && j<=4))
            {
                printf("*");
            }
            else if((i==7) && (j==1 || j==5))
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n______________\n\n");
}


void letterV()
{
    int i,j;
    printf("\n______________\n\n");
    for(i=1;i<=7;i++)
    {
        printf("   ");
        for(j=1;j<=5;j++)
        {
            if((i>=1 && i<=5) && (j==1 || j==5))
            {
                printf("*");
            }
            else if((i>=1 && i<=5) && (j!=1 && j!=5))
            {
                printf(" ");
            }


            if((i==6) && (j==2 || j==4))
            {
                printf("*");
            }
            else if((i==6) && (j!=2 && j!=4))
            {
                printf(" ");
            }

            if((i==7) && (j==3))
            {
                printf("*");
            }
            else if((i==7) && (j!=3))
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n______________\n\n");
}



void letterW()
{
    int i,j;
    printf("\n______________\n\n");
    for(i=1;i<=7;i++)
    {
        printf("   ");
        for(j=1;j<=5;j++)
        {
            if((i>=1 && i<=4) && (j==1 || j==5))
            {
                printf("*");
            }
            else if((i>=1 && i<=4) && (j!=1 && j!=5))
            {
                printf(" ");
            }

            if((i==5 || i==6) && (j!=2 && j!=4))
            {
                printf("*");
            }
            else if((i==5 || i==6) && (j==2 || j==4))
            {
                printf(" ");
            }

            if((i==7) && (j==2 || j==4))
            {
                printf("*");
            }
            else if((i==7) && (j!=2 && j!=4))
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n______________\n\n");
}



void letterX()
{
    int i,j;
    printf("\n______________\n\n");
    for(i=1;i<=7;i++)
    {
        printf("   ");
        for(j=1;j<=5;j++)
        {
            if((i==1 || i==2 || i==6 || i==7) && (j==1 || j==5))
            {
                printf("*");
            }
            else if((i==1 || i==2 || i==6 || i==7) && (j!=1 && j!=5))
            {
                printf(" ");
            }


            if((i==3 || i==5) && (j==2 || j==4))
            {
                printf("*");
            }
            else if((i==3 || i==5) && (j!=2 && j!=4))
            {
                printf(" ");
            }

            if((i==4) && (j==3))
            {
                printf("*");
            }
            else if((i==4) && (j!=5))
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n______________\n\n");
}



void letterY()
{
    int i,j;
    printf("\n______________\n\n");
    for(i=1;i<=7;i++)
    {
        printf("   ");
        for(j=1;j<=5;j++)
        {
            if((i==1 || i==2) && (j==1 || j==5))
            {
                printf("*");
            }
           else if((i==1 || i==2) && (j!=1 && j!=5))
            {
                printf(" ");
            }


            if((i==3) && (j==2 || j==4))
            {
                printf("*");
            }
            else if((i==3) && (j!=2 && j!=4))
            {
                printf(" ");
            }

            if((i>=4 && i<=7) && (j==3))
            {
                printf("*");
            }
            else if((i>=4 && i<=7) && (j!=3))
            {
                printf(" ");
            }

        }
        printf("\n");
    }

    printf("\n______________\n\n");
}



void letterZ()
{
    int i,j;
    printf("\n______________\n\n");
    for(i=1;i<=7;i++)
    {
        printf("   ");
        for(j=1;j<=5;j++)
        {
           if((i==1 || i==7) && (j>=1 && j<=5))
            {
                printf("*");
            }

            if((i>=2 && i<=6) && (j==7-i))
            {
                printf("*");
            }
            else if((i>=2 && i<=6) && (j!=7-i))
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n______________\n\n");
}





















