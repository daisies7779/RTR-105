#include <stdio.h>


void noArgumentNoReturn(){
     printf ("1.No argument, no return!\n");
}

char *noArgumentWithReturn(){
     char announcement[] = ("2.No argument, yes return! and returns exactly this text you read right now! \n");
     return announcement;
    
}

int main() {
    

    noArgumentNoReturn();
    noArgumentWithReturn()
    return 0;
}
