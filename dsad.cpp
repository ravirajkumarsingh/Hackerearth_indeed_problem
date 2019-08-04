/*This is a problem set where you are given the number set and you have to find the first digit of the first half of the testcase
and the last digit of the second half of the testcases and then make a complete number from both halves and if the number is
divisible by 11 print OUI else print NON.

INPUT
1) First line contains the number of elements in the array.
2) This line consist of the number in the array

OUTPUT
1) It contains whether the number is divisible by 11 if yes print OUI else print NON.


6                                                       OUI
15478 8452 8262 874 985 4512


Explanation

Here the 1ine consist of the required digit and the number formed is 188452 which is divisible by 11 so print OUI.
1
8
8
4
5
2
*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int i,t,p,a[100],c[100],d[100],k=0,l;
    int *arr1,*arr2,*arr3,arr4;
    int size1(k), size2(k);


    cin>>t;
    for(i=0;i<t;i++)
        cin>>a[i];


    int j = t;
    if(t%2 == 0)
        k=t/2;
    else
        k=(t/2) + 1;

    for(i=0;i<k;i++)
    {
        p=a[i];
        while(p>=10)
            p/=10;

        c[i]=p;
    }
    for(i=k;i<t;i++)
    {
        a[i]%=10;
        d[i]=a[i];
    }
    arr1=c;
    arr2=d;
    arr3=new int;
    arr4=0;
    for(i=0;i<t;i++)
    {
        if(i<k)
            arr3[i]=arr1[i];
    }
    for(i=k;i<t;i++)
        arr3[i]=arr2[i];


    for(i=0;i<t;i++)
        cout<<arr3[i]<<"\n";

        for(i=0;i<t;i++)
        {
            j--;
            arr4+=arr3[i]*pow(10,j);
        }
    cout<<arr4+1;

    cout<<"\n";

        if((arr4+1) % 11 == 0)
            cout<<"OUI"<<"\n";
        else
            cout<<"NON"<<"\n";

    return 0;
}
