#include <stdio.h>
#include <string.h>
int main(){
    char str1[20], str2[20];
    int i,j,temp;
     printf("Enter the first string: ");
        scanf("%s",&str1);
        printf("Enter the second string: ");
        scanf("%s",&str2);
    if (strlen(str1)==strlen(str2)){
       
    
        int len=strlen(str1);
        
        for (i=0;i<len-1;i++){
            for (j=0;j<len-1;j++){
                if (str1[j]>str1[j+1]){
                    temp=str1[j];
                    str1[j]=str1[j+1];
                    str1[j+1]=temp;
                }
            }
        }
        
        for (i=0;i<len-1;i++){
            for (j=0;j<len-1;j++){
                if (str2[j]>str2[j+1]){
                    temp=str2[j];
                    str2[j]=str2[j+1];
                    str2[j+1]=temp;
                }
            }
        }
        
        if (strcmp(str1,str2)==0){
            printf("Entered strings are anagrams");
        }
        else {
            printf("Not anagrams");
        }
    }
    else {
        printf("Not anagrams");
    }
    return 0;
}
