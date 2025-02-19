#include<bits/stdc++.h>
using namespace std;
 
int sortArr(vector<int>& arr) {
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}
 
int main() {
    //  Two vectors define kiye gaye hai 
    // Point to be noted Vector ek daynamic  memory allocation krta he  DMA
    vector<int> arr1 = {2,5,1,3,0};
    vector<int> arr2 = {8,10,5,7,9};
   
    //  Element ko print krne ke liye ham ne function ko call kiya  tabhi short element print huye 
    cout<<"The largest  element in the array is: "<<sortArr(arr1)<<endl;
    cout<<"The largest  element in the array is: "<<sortArr(arr2);
   
    return 0;
}