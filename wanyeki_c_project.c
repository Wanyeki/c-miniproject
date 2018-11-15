#include <stdio.h>
#include <stdlib.h>

int i,totals[4]={0,0,0,0},votes[30],y=0,x=1,total=0;
int percentage[4]={0,0,0,0};
int winner = 1;
int win=6,max=0,max2=0;
FILE* myfile;
int ret_val;


//main method
int main(){
open_file();
calculate_total();
seperate();
calculate_percentage();
seperate();
draw_table();
seperate();
seperate();
find_winner();
return 0;
}
//end main method


//////////////////////Other methods//////////////////

//opening file method
void open_file(){
FILE* myfile;

if((myfile = fopen("results.txt" ,"r"))==NULL){
        perror("results,txt" );
        exit(EXIT_FAILURE);

}

for(i=0;i<25;i++){

         ret_val=fscanf(myfile,"%d ",&votes[i]);
             if(ret_val==EOF){
                break;
                }

            }}
//end of opening



//summing up the votes per candidate
void calculate_total(){
for (y=0;y<5;y++){
for(i=x;i<25;i=i+5){

 totals[y]=totals[y]+votes[i];
}
x++;
}

for(i=0;i<4;i++){
total=total+totals[i];}
}
//end of totals



//calculating percentage
void calculate_percentage(){
for(i=0;i<4;i++){
percentage[i]=totals[i]*100/total;
}
}
//end of percentage



//displaying a table

void draw_table(){
printf("\n");
printf("county\t A \t B \t C \t D\n");
for (i=0;i<5;i++){printf("%d \t",votes[i]);}printf("\n");
for (i=5;i<10;i++){printf("%d \t",votes[i]);}printf("\n");
for (i=10;i<15;i++){printf("%d \t",votes[i]);}printf("\n");
for (i=15;i<20;i++){printf("%d \t",votes[i]);}printf("\n");
for (i=20;i<25;i++){printf("%d \t",votes[i]);}printf("\n");
seperate();seperate();
printf("\n\n");
printf("cand  \tA\tB\tC\tD\ntotals  ");
for(i=0;i<4;i++){
    printf("%d\t",totals[i]);
}
printf("\npercent ");
for(i=0;i<4;i++){
    printf("%d\t",percentage[i]);
}
printf("\n");
}
//end of table



//showing results

void find_winner(){
printf("\n\n");
for (i=0;i<4;i++){
if(percentage[i]>50){
winner=0;
win=i;
}}

if (winner==0){
printf("the winner is: candidate ");
if (win=0){printf("A");}
if (win=1){printf("B");}
if (win=2){printf("C");}
if (win=3){printf("D");}
}

if(winner==1){

printf("There has been a run off.....\na rematch is to be carried out between: \ncandidate ");
for (i=0;i<4;i++){
if (percentage[i]>max){
max=i;
}
}
for (i=0;i<4;i++){
if (i!=max&&percentage[i]>max2){
max2=i;
}
}
if (max==0){printf("A");}
if (max==1){printf("B");}
if (max==2){printf("C");}
if (max==3){printf("D");}
printf("\ncandidate ");
if (max2==0){printf("A");}
if (max2==1){printf("B");}
if (max2==2){printf("C");}
if (max2==3){printf("D");}
}
printf("\n");
seperate();seperate();
}
//end of results


//creating a separator line
void seperate(){
printf("_____________________________________");
}
//end of line creation


//wanyeki made this//
