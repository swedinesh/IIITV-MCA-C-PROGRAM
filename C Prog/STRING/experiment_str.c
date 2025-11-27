#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Bhosdi Wallah";
    char *ptr = str;
    char *htr = "Kya Kami Thi mujh mai Behan ki Lori";
 
   // htr = str;
    //str[0]='m';
    //str = htr; wrong
     // htr ='n'; wrong
     
    printf("%s\n", htr);
    printf("%s\n", str);
    // char *ntr = "Kaisi Hai Behan Ki Lori";
    // char *bsd = "chala ja bsdk";
    // ntr = bsd;
    // printf("%s\n", ntr);
    // printf("%s\n", bsd);
      
    return 0;
}