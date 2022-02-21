#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number, guess, nguesses=1;
    srand(time(0));
    number= rand()%100+1;
    do{
        printf("Guess the number between 1 to 100:\n");
        scanf("%d",&guess);
        if (guess>number){
           printf("Enter a lower number please:\n");
        }
        else if (guess<number)
        {
            printf("Enter a higher number please:\n");
        }
        else{
            printf("You guessed the correct number in %d attempts\n", nguesses);
        }
        nguesses++;
        
        
    } while (guess!=number);
    

return 0;
}