#include <stdio.h>

int c(int n){
  if(n == 0 || n == 1)
    return n;
  return 3*c(n-1) - 2 * c(n-2);
}
int f(int n){
  static int a = 2;
  if(n<=1){
    return 2;
  }
  else{
    a=a+1;
    return a+n+f(n-1);
  }
}
int main(){
  printf("%d\n", f(3));

}
