#include<iostream>

using namespace std;

int main()
{
int k ,i=1, sum_k=0, number;
cout << "Enter amount of integers to sum= "; cin>>k;
if (k=0) return 0;
   do{
      cout <<"Enter the integers nr." << I <<": ";
      cin >> number;
      sum_k+=number; i++;
   }while (i<=k);
   cout << "The total sum of " << k << " integers is: " << sum_k; 
return 0;
}
