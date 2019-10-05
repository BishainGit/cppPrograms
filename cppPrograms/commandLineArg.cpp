#include<stdio.h> 
  int test(char c[]){
      
    if(c == "xyz"){
        return 0;
     }
    else {
       return 1;
       }
  }
void print(char c[]){
     
     char v[] ="xyz";
     if(c == v){
      printf("%s",v);

    }
    printf("%s",c);
    printf("%s",v);
}
int main(int argc,char* argv[]) 
{ 
     
     
     char c[10];
     scanf("%s",c);

     printf("%d\n",test(c));
     print(c);
    return 0; 
} 
