#include<iostream>
using namespace std;


int squareRoot(int n){

    int s =0;
    int e=n;
    int mid = s+(e-s)/2;

    while (s<=e)
    {
        int square = mid *mid;
        if (square==n)
        return mid;
        int ans;

        if (square<n)
        {
            ans = mid;
            s = mid+1;
        }
        else{
            e=mid-1;

        }
        mid = s+(e-s)/2;
        
        
    }
    return -1;
    
}

double morePrecision(int n, int precision, int tempSolution) {
    double factor =1;
    double ans = tempSolution;

    for (int  i = 0; i < precision; i++)
    {
        factor = (factor/10);
        for (double j = ans; j*j < n; j= j+factor)
        {
            ans=j;
        }
        
    }
    return ans;

    
}

int main(){

    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    int tempSol= squareRoot(n);

    cout<<tempSol<<endl;

    cout<<"Answer is:"<<morePrecision(n,3,tempSol)<<endl;

    return 0;


}
