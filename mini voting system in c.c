#include <stdio.h>

int A=0, B=0, C=0, D=0;

void electionResult()
{
    int wonByVote;
    //if this condition is true then candidate 1 is winning.
    if (A > B && A > C && A > D)
    {

        printf("\n**CANDIDATE1 won the election**\n\n");
        printf("Total vote of CANDIDATE1 : %d\n",A);
        wonByVote=A-B;
        printf("CANDIDATE 1 won by %d votes to CANDIDATE 2\n",wonByVote);
        wonByVote=A-C;
        printf("CANDIDATE 1 won by %d votes to CANDIDATE 3\n",wonByVote);
        wonByVote=A-D;
        printf("CANDIDATE 1 won by %d votes to CANDIDATE 4\n",wonByVote);

        //by using if else statements we will find out the candidate that got the maximum number of votes
        //using certain conditions in else if we can find out the candidate that is winning the election
    }
    else if (B > C && B > D)
        //if this condition is true then candidate 2 is winning
    {
        printf("\n**CANDIDATE 2 won the election**\n\n");
        printf("Total vote of CANDIDATE2 : %d\n",B);
        wonByVote=B-A;
        printf("CANDIDATE 2 won by %d votes to CANDIDATE 1\n",wonByVote);
        wonByVote=B-C;
        printf("CANDIDATE 2 won by %d votes to CANDIDATE 3\n",wonByVote);
        wonByVote=B-D;
        printf("CANDIDATE 2 won by %d votes to CANDIDATE 4\n",wonByVote);
    }
    else if (C > D)
    //if this condition is true then candidate 3 is winning

    {

        printf("\n**CANDIDATE 3 won the election**\n\n");
        printf("Total vote of CANDIDATE3 : %d\n",C);
        wonByVote=C-A;
        printf("CANDIDATE 3 won by %d votes to CANDIDATE 1\n",wonByVote);
        wonByVote=C-B;
        printf("CANDIDATE 3 won by %d votes to CANDIDATE 2\n",wonByVote);
        wonByVote=C-D;
        printf("CANDIDATE 3 won by %d votes to CANDIDATE 4\n",wonByVote);
    }

    else if(A == B && A == C && A == D)
        //this condition is true then no one is winning the election
    {

        printf("\nNo one won the election\n\n");
        printf("-----------------Election is considered to be draw among all the participating candidates----------\n");
        printf("Total Vote   %d       %d        %d     %d\n",A,B,C,D);

    }
    else

        //if this condition is true then candidate 4 is winning
    {

        printf("\n**CANDIDATE 4 won the election**\n\n");
        printf("Total vote of CANDIDATE4 : %d\n",D);
        wonByVote=D-A;
        printf("CANDIDATE 4 won by %d votes to CANDIDATE 1\n",wonByVote);
        wonByVote=D-B;
        printf("CANDIDATE 4 won by %d votes to CANDIDATE 2\n",wonByVote);
        wonByVote=D-C;
        printf("CANDIDATE 4 won by %d votes to CANDIDATE 3\n",wonByVote);
    }
}

void calculateVote(int vote)
//switch case will tell us how many votes each candidate is getting

{
    switch (vote)
    {
    case 1:
        A+=1;
        break;
    case 2:
        B+=1;
        break;
    case 3:
        C+=1;
        break;
    case 4:
        D+=1;
        break;
    }

}

void main()
{
    int choose;


        printf("\n********WELCOME TO OUR PROJECT ON MINI VOTING SYSTEM IN C********\n\n");
        printf("                         SIMPLE ELECTION                       \n\n");
        printf("*******************************************************************\n");
        printf("|           1.CANDIDATE1           |          2.CANDIDATE2        |\n");
        printf("*******************************************************************\n");
        printf("|           3.CANDIDATE3             |          4.CANDIDATE4      |\n");
        printf("*******************************************************************\n\n");
    do
    {
        printf("Press 1 to vote CANDIDATE1\n");
        printf("Press 2 to vote CANDIDATE2\n");
        printf("Press 3 to vote CANDIDATE3\n");
        printf("Press 4 to vote CANDIDATE4\n");
        printf("Press 5 to show election result\n");
        printf("Please choose : ");
        scanf("%d", &choose);
        if (choose==5)
        {
            electionResult();

            //calling the function election result
        }else
        {
            calculateVote(choose);

            //calling the function calculate vote
        }
        printf("\n");
    } while (choose != 5);
}
