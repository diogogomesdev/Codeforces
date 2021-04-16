#include <iostream>
 
using namespace std;
 
int sumDigits(long long int n){
  int sum = 0;
  while(n>0){
    sum += n%10;
    n /= 10;
  }
 
  return sum;
}
 
long long int findMCD(long long int a, long long int b){
  if(a%b == 0) return b;
  int newb = b/2;
  if(b%newb == 0)
    if(a%newb == 0) return newb;
 
  newb--;
  while(newb >= 1){
    if(a % newb == 0 && b % newb == 0) return newb;
    newb--;
  }
  return 1;
}
 
int main(){
 
  long long int t, n, sum, gcd, max=1;
 
  cin >> t;
 
  for(int i=0;i<t;i++){
    cin >> n;
    sum = sumDigits(n);
    max = findMCD(n, sum);
    while(max<=1){
      n++;
      sum = sumDigits(n);
      max = findMCD(n, sum);
    }
 
    cout << n << endl;
  }
 
  return 0;
}
