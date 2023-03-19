// WAP to print all even number in the range 1 to 100 (use for loop). 
// Also print sum of these even numbers;

#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    cout<<"Even numbers between 1 to 100: \n";
    for(int i = 1; i <= 100; i++){
        sum+=i;
        if(i % 2 == 0){
            cout<<i<<",";
        }
    }
    cout<<"\nThe sum of all even number between 1 to 100: "<<sum;;
}