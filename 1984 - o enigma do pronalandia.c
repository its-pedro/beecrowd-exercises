#include<stdio.h>
#include<string.h>
#define N_MAX 10

int main (){
  char num[N_MAX+1], size, i;

  scanf("%s", num);
  size = strlen(num);

  for(i = size-1; i > 0; i--){
    printf("%c", num[i]);
  }
  printf("%c\n", num[0]);
  
  return 0;
}
