#include<bits/stdc++.h>
using namespace std;
void getElements(int arr[],int n)
{  
    //Ager Array me 0 or 1 hi ho to -1 -1 return krega bas  
    if(n==0 || n==1)
        cout<<-1<<" "<<-1<<endl;  // edge case when only one element is present in array
    // Yaha small and second small dono ko INT_MAX  se declear kiya gya he 
    int small=INT_MAX,second_small=INT_MAX; 

    //  Is case me large ko or second large ko INT_MIN se diclear kiya gya he 
    int large=INT_MIN,second_large=INT_MIN;
    int i;
    for(i=0;i<n;i++)
    {
        //small min ke equal he 
        small=min(small,arr[i]);
        // Or large Max ke equall he 
        large=max(large,arr[i]);
    }
    for(i=0;i<n;i++)
    { 
        //  Condition check krege ki aar[i] second small se or arr[i] small ke not equal  he  
        if(arr[i]<second_small && arr[i]!=small)
            //  to vaha second small arr[i] hi he 
            second_small=arr[i];

        // yaha arr[i] check kr raha he ke second large  or arr[i] not equall he large  
        if(arr[i]>second_large && arr[i]!=large)
             //  to vaha second large arr[i] ho jayga 
            second_large=arr[i];
    }
    // bas print kr do jo bhi arr he 
    cout<<"Second smallest is "<<second_small<<endl;
    cout<<"Second largest is "<<second_large<<endl;
}
int main()
{
    int arr[]={1,2,4,6,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    getElements(arr,n);
    return 0;
}
