// bits/stdc++.h yaha ek ese (STL) laibery he jo sabhi header file ko store krte he 
// Example 1) yah age likhte ho to aap ko <iostream>,<vector> jese koi bhi header file likhne ki jarurt nahi he   

#include<bits/stdc++.h>

using namespace std;
 
//Function ek vector ka reference leta hai (original vector modify hoga). & ka mtlb refrence lena hota he   

int sortArr(vector<int>& arr)

{
  // Ye C++ STL ka sort() function hai jo vector ke elements ko ascending order me sort kar deta hai.
    sort(arr.begin(),arr.end());

    // Sorting ke baad first element smallest hota hai, to use return kar diya.
    return arr[0];
}
 
int main() {
   //  Two vectors define kiye gaye hai 
    // Point to be noted Vector ek daynamic  memory allocation krta he  DMA
    vector<int> arr1 = {2,5,1,3,0};
    vector<int> arr2 = {8,10,5,7,9};
    
   //  Element ko print krne ke liye ham ne function ko call kiya  tabhi short element print huye
    cout<<"The smallest element in the array is: "<<sortArr(arr1)<<endl;
    cout<<"The smallest element in the array is: "<<sortArr(arr2);
   
    return 0;
}