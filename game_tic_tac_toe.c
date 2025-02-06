#include<stdio.h>
#include<stdlib.h>

#define ROWS 3
#define COL 3

char grid[ROWS][COL]={'1','2','3','4','5','6','7','8','9'};
/*if grid define as grid[r][c] = {1,2,3,4,5,6,7,8,9} : these treat as numbers
if you want compare and check kindly assign as character shown in above */

//functions prototypes
void print_tic_toc(void);
void draw_board(void);
int markboard (int grid_value,char input);
int checkforwin(void);

int main()
{
    
    print_tic_toc();
    draw_board();
    return 0;
}

//check for win
int checkforwin(){
    int ret = 0;
     
        //ret = ((grid[0][0] == grid [1][1] == grid[2][2]) ||(grid[0][2] == grid [1][1] == grid[2][0])) ? 1:0;
        /*can't compare all three variable at once :: prority issues*/
        
    //diag
    ret = ((grid[0][0] == grid [1][1] && grid [1][1]== grid[2][2]) || (grid[0][2] == grid [1][1] && grid [1][1] == grid[2][0])) ? 1:0;

    //rows
    for(int i=0;i<ROWS && ret == 0 ;i++)
    {
        ret = ((grid[i][0] == grid [i][1]) && (grid [i][1] == grid[i][2])) ? 1:0;
    }

    //column
    for(int i=0;i<COL && ret == 0 ;i++)
    {
       ret = ((grid[0][i] == grid [1][i]) && (grid [1][i] == grid[2][i])) ? 1:0; 
    }

    return ret;
}
//printing grid value
void print_tic_toc(void)
{
     printf("\033[H\033[J"); //clear the screen     /*system(cls); - will work for command prompt

    printf("\n TIC TAC TOC \n");
    printf("player(1): X player(2): O \n\n");
    
    for(int i=0; i<ROWS ;i++)
    {
        for(int j=0; j<COL ;j++)
        {
            printf("  %c  ",grid[i][j]);
            if(j<COL-1)
                printf("|");
        }
        if(i<ROWS-1){
            printf("\n_____|_____|_____\n");
            printf("     |     |     \n");
        }    
    }
    printf("\n \n ");
}

//Draw X & O on board
void draw_board(void){

    int grid_value = 0,player = 1,ret = 1;
    char input;
    for(int i=0; i < (ROWS*COL); i++) 
    {
        printf("player %d ,enter the number : ",player);
        scanf("%d",&grid_value);
        input = (player == 1) ? 'X' : 'O';
        ret = markboard(grid_value,input);
        if(ret > 0)
        {
            player = (player == 2) ? 1 : 2;
            print_tic_toc();
        }    
        else if(ret == 0)
        {
            print_tic_toc();
            printf("congrats! winner player %d \n",player);
            break;
        }
        else if(ret < 0) 
        {
            printf("Invaild number !try again \n");
            i--;
        }
        else {
            /*nothing*/
        }
        if( i == (ROWS*COL -1))
        {
            printf("This match was draw  :/ \n");
        }
    }    
}

//markboard with x & O
int markboard (int grid_value,char input)
{
    int ret = 1;
    switch (grid_value){
        case 1:
            if(grid[0][0] == '1')
                grid[0][0] = input;
            else
                ret = -2;
            break;
        case 2:
            if(grid[0][1] == '2')
                grid[0][1] = input;
            else
                ret = -2;
            break;
        case 3:
            if(grid[0][2] == '3')
                grid[0][2] = input;
            else
                ret = -2;
            break;
        case 4:
            if(grid[1][0] == '4')
                 grid[1][0] = input;
            else
                ret = -2;
            break;
        case 5:
            if(grid[1][1] == '5')
                grid[1][1] = input;
            else
                ret = -2;
            break;
        case 6:
            if(grid[1][2] == '6')
                grid[1][2] = input;
            else
                ret = -2;
            break;
        case 7:
            if(grid[2][0] == '7')
                grid[2][0] = input;
            else
                ret = -2;
            break;
        case 8:
            if(grid[2][1] == '8')
                grid[2][1] = input;
            else
                ret = -2;
            break;
        case 9:
            if(grid[2][2] == '9')
                grid[2][2] = input;
            else
                ret = -2;
            break;
        default:
            ret = -1;
            break;
    }
    if(checkforwin()!= 0){
        ret =0;
    }

    return ret;
}