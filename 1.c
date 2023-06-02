#include <stdio.h>
void main(){

char p[3][3];
int i,j,flag=0;
char c1,x='X',o='O',p1,p2;
for(i=0;i<=2;i++)
{
    for(j=0;j<=2;j++)
    {
        p[i][j]='*';
    }
}
int row,col;
printf("Enter what symbol the player 1 is choosing\t");
scanf("%c",&c1);
if(c1==x)
{
    p1=x;
    p2=o;
}
else{
    p2=x;
    p1=o;
}
int trap;
while(flag==0)
{

printf("Enter at what position player 1 would like to push the symbol\n");
printf("enter row no.:\t");
scanf("%d",&row);
printf("enter column no.:\t");
scanf("%d",&col);
if(p[row-1][col-1]!=x&&p[row-1][col-1]!=o)
{
p[row-1][col-1]=p1;
int S=0;
for(i=0;i<=2;i++)
{
    for(j=0;j<=2;j++)
    {
        if(p[i][j]==x||p[i][j]==o)
        {
            S=S+1;

        }
    }
}
if(S==9)
{
    flag=1;
}
if(p[0][0]==p1&&p[0][1]==p1&&p[0][2]==p1)
{
    printf("Player 1 is winner");
    break;
}
else if(p[1][0]==p1&&p[1][1]==p1&&p[1][2]==p1)
{
    printf("Player 1 is winner");
    break;
}
else if(p[2][0]==p1&&p[2][1]==p1&&p[2][2]==p1)
{
    printf("Player 1 is winner");
    break;
}
else if(p[0][0]==p1&&p[1][0]==p1&&p[2][0]==p1)
{
    printf("Player 1 is winner");
    break;
}
else if(p[0][1]==p1&&p[1][1]==p1&&p[2][1]==p1)
{
    printf("Player 1 is winner");
    break;
}
else if(p[0][2]==p1&&p[1][2]==p1&&p[2][2]==p1)
{
    printf("Player 1 is winner");
    break;
}
else if(p[0][0]==p1&&p[1][1]==p1&&p[2][2]==p1)
{
printf("Player 1 is winner");
break;
}
else if(p[0][2]==p1&&p[1][1]==p1&&p[2][0]==p1)
{
    printf("Player 1 is winner");
    break;
}
else if(p[0][0]==p2&&p[0][1]==p2&&p[0][2]==p2)
{
    printf("Player 2 is winner");
    break;
}
else if(p[1][0]==p2&&p[1][1]==p2&&p[1][2]==p2)
{
    printf("Player 2 is winner");
    break;
}
else if(p[2][0]==p2&&p[2][1]==p2&&p[2][2]==p2)
{
    printf("Player 2 is winner");
    break;
}
else if(p[0][0]==p2&&p[1][0]==p2&&p[2][0]==p2)
{
    printf("Player 2 is winner");
    break;
}
else if(p[0][1]==p2&&p[1][1]==p2&&p[2][1]==p2)
{
    printf("Player 2 is winner");
    break;
}
else if(p[0][2]==p2&&p[1][2]==p2&&p[2][2]==p2)
{
    printf("Player 2 is winner");
    break;
}

else if(p[0][0]==p2&&p[1][1]==p2&&p[2][2]==p2)
{
printf("Player 2 is winner");
break;
}
else if(p[0][2]==p2&&p[1][1]==p2&&p[2][0]==p2)
{
    printf("Player 2 is winner");
    break;
}
}
else{
    printf("Cell already filled choose another!");
}
printf("Enter at what position player 2 would like to push the symbol\n");
printf("enter row no.:\t");
scanf("%d",&row);
printf("enter column no.:\t");
scanf("%d",&col);
if(p[row-1][col-1]!=x&&p[row-1][col-1]!=o)
{
p[row-1][col-1]=p2;
if(p[0][0]==p1&&p[0][1]==p1&&p[0][2]==p1)
{
    printf("Player 1 is winner");
    break;
}
else if(p[1][0]==p1&&p[1][1]==p1&&p[1][2]==p1)
{
    printf("Player 1 is winner");
    break;
}
else if(p[2][0]==p1&&p[2][1]==p1&&p[2][2]==p1)
{
    printf("Player 1 is winner");
    break;
}
else if(p[0][0]==p1&&p[1][0]==p1&&p[2][0]==p1)
{
    printf("Player 1 is winner");
    break;
}
else if(p[0][1]==p1&&p[1][1]==p1&&p[2][1]==p1)
{
    printf("Player 1 is winner");
    break;
}
else if(p[0][2]==p1&&p[1][2]==p1&&p[2][2]==p1)
{
    printf("Player 1 is winner");
    break;
}
else if(p[0][0]==p1&&p[1][1]==p1&&p[2][2]==p1)
{
printf("Player 1 is winner");
break;
}
else if(p[0][2]==p1&&p[1][1]==p1&&p[2][0]==p1)
{
    printf("Player 1 is winner");
    break;
}
else if(p[0][0]==p2&&p[0][1]==p2&&p[0][2]==p2)
{
    printf("Player 2 is winner");
    break;
}
else if(p[1][0]==p2&&p[1][1]==p2&&p[1][2]==p2)
{
    printf("Player 2 is winner");
    break;
}
else if(p[2][0]==p2&&p[2][1]==p2&&p[2][2]==p2)
{
    printf("Player 2 is winner");
    break;
}
else if(p[0][0]==p2&&p[1][0]==p2&&p[2][0]==p2)
{
    printf("Player 2 is winner");
    break;
}
else if(p[0][1]==p2&&p[1][1]==p2&&p[2][1]==p2)
{
    printf("Player 2 is winner");
    break;
}
else if(p[0][2]==p2&&p[1][2]==p2&&p[2][2]==p2)
{
    printf("Player 2 is winner");
    break;
}

else if(p[0][0]==p2&&p[1][1]==p2&&p[2][2]==p2)
{
printf("Player 2 is winner");
break;
}
else if(p[0][2]==p2&&p[1][1]==p2&&p[2][0]==p2)
{
    printf("Player 2 is winner");
    break;
}
}
else{
    printf("Cell already chosen choose another cell");
}
}
if(flag!=0)
{
printf("Game drawed");
}

}