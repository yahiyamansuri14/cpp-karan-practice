#include<iostream>
#include<algorithm>
 using namespace std;
 int maxProfit(int price[], int n){
     int cost = 0;
     int maxProfit = 0;
     if (n==0)
        return 0;
     int min_price = price[0];

     for (int i=0; i<n; i++){
         min_price = min(min_price,price[i]);
         cost = price[i] - min_price;
         maxProfit = max(maxProfit, cost);
     }
     return maxProfit;
 }
 int main(){

     int price [] = {7,1,5,3,6,4};
     int size = sizeof(price)/sizeof(price[0]);
     cout<<maxProfit(price,size);
     return 0;
 }