#include <stdio.h>


void noArgumentNoReturn(){
     printf ("1.No argument, no return!\n");
}

const char* noArgumentWithReturn(){
     return ("2.No argument, yes return! and returns exactly this text you read right now! \n");
     
    
}

void withArgumentNoReturn(char *myString){
     printf("%s", myString);
     
    
}


int main() {
    

    noArgumentNoReturn();
    
    printf("%s", noArgumentWithReturn());
    
    char *argument = "3.Yes argument, no return! and tex you see is passed as a string argument to function! \n" ;
    withArgumentNoReturn(argument);
    return 0;
}
