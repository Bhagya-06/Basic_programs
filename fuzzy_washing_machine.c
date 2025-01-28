/* Question: A washing machine works on the principle of Fuzzy System, the weight of clothes put inside it for washing is uncertain but based on weight measured by sensors and the water level chosen, it decides total time needed. 

For low level water, the time estimate is 25 minutes where approximately weight is between 2000 grams or any nonzero positive number below that.

For medium level water, the time estimate is 35 minutes, where approximately weight is between 2001 grams and 4000 grams.

For high level water, the time estimate is 45 minutes, where approximately weight is above 4000 grams. Assume the capacity of machine is maximum 7000 grams. 

When the weight is zero, time needed is 0 minutes. If the weight exceeds maximum weight limit, then, print “OVERLOADED”, and for all negative weights, the output is “INVALID INPUT”.

Sample Input-1: 2000, L
Sample Output-1: Time Estimated: 25 minutes
Input should be in the form of integer value. 
Output must have the following format: Time Estimated: NN Minutes
*/

#include <stdio.h>
int main(){
    int weight,estimated_time;
    char level;
    printf("Enter weight and level (L,M,H):");
    scanf("%d %c",&weight,&level);
    
    switch(level){
        /*For low level water, the time estimate is 25 minutes where approximately weight is between 2000 grams or any nonzero positive number below that.*/
        case 'L':
            if (weight>0 && weight<=2000) estimated_time = 25;
            else estimated_time = 1;
            break;
        /*For medium level water, the time estimate is 35 minutes, where approximately weight is between 2001 grams and 4000 grams.*/    
        case 'M':
            if (weight>2000 && weight<=4000) estimated_time = 35;
            else estimated_time = 1;
            break;
        /*For high level water, the time estimate is 45 minutes, where approximately weight is above 4000 grams. Assume the capacity of machine is maximum 7000 grams. */
        case 'H':
            if (weight>4000 && weight<=7000) estimated_time = 45;
            else estimated_time = 1;
            break;
    }
    
    /*When the weight is zero, time needed is 0 minutes. If the weight exceeds maximum weight limit, then, print “OVERLOADED”, and for all negative weights, the output is “INVALID INPUT”.*/
    if (weight==0) estimated_time = 0;
    
    if (weight<0 || estimated_time==1) printf("Invalid input");
    else if(weight > 7000) printf("Overloaded");
    else printf("Time estimated: %d",estimated_time);
    
    return 0;
    
}
