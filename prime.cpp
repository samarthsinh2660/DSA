#include<iostream>
using namespace std;

int main(){
   
   int n;
   cin >> n;
   int f =1;
   for(int i =2 ; i<n; i++){
     if(n%i == 0){
         f = 0;
         break;
     }
     else{
         f= 1;
     }
    } 

   if (f == 1){
     cout<< "it is prime" << endl;
   }
   else{
     cout<< " it is not prime" << endl;
   }
     

    return 0; 
}