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

const char* withArgumentWithReturn(char *myString){
     return myString;
     
    
}


int main() {
    

    noArgumentNoReturn();
    
    printf("%s", noArgumentWithReturn());
    
    char *argument = "3.Yes argument, no return! Text you see is passed as a string argument to function and function itself prints it! \n" ;
    withArgumentNoReturn(argument);
     
    
    printf("%s", withArgumentWithReturn("4.Yes argument, Yes return! Tex you see is passed as an argument to fuction, which returns it as a value, \nthen main() function prints it."));
     
    return 0;
}

