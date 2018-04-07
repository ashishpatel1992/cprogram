#include <stdio.h>


int f(int n){
  static int a = 2;
  if(n<=1){
    return 2;
  }
  else{
    a=a+1;
    return a+n*f(n-1);
  }
}
int main(){

  printf("%d\n", f(3));

}
