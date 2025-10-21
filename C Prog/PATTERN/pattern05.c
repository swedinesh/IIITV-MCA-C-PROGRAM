#include<stdio.h>
int main(){
    /*
          
        $ 
      $ $ $ 
    $ $ $ $ $ 
  $ $ $ $ $ $ $ 
$ $ $ $ $ $ $ $ $ 
  $ $ $ $ $ $ $
    $ $ $ $ $
      $ $ $  
        $

    */

    //upper
    /*
        $ 
      $ $ $ 
    $ $ $ $ $ 
  $ $ $ $ $ $ $ 
$ $ $ $ $ $ $ $ $
    */
     for(int i=1; i<=5; i++){
     for(int j=1; j<=5-i; j++){
        printf("  ");
     }   
     for(int s=1; s<=2*i-1; s++){
        printf("$ ");
     }
      printf("\n");
    }
      //lower 
  /*

  _  $ $ $ $ $ $ $
  _  _ $ $ $ $ $
  _  _ _ $ $ $  
           $
  */

     for(int i=4; i>=1; i--){
     for(int j=1; j<=5-i; j++){
        printf("  ");
     }   
     for(int a=1; a<=2*i-1; a++){
         printf("$ ");
     }
       printf("\n");
     }
     
    

    return 0;
}