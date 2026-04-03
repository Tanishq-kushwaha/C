#include<stdio.h>
#include<windows.h>
    void main(){
        //ye hame type karwana hai
        char text[] = "radha...radha...";
        int i;
        //infinity loop
        while (1)
       {
        // ik ik ko chek karke print kawane ke liye 
        for(i=0;text[i]!='\0';i++){
        // ik letter print karane ke liye 
        printf("%c",text[i]);
        // buffer me atakne par force kiya jyega
        fflush(stdout);
        // milisec. me speed set karne ke liye
        Sleep(0001);     
     }
     printf("\n");
    }
    return 0;
}