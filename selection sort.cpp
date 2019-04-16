#include <iostream>
using namespace std;
int findindexofmax(unsigned long long A[],int start,int End){
    int i,currmaxindex=start;
    for(i=start;i<End;i++){
        if(A[i]<=A[currmaxindex]) currmaxindex=i;
    }
    return currmaxindex;
}
void Swap(unsigned long long A[],int index1,int index2){
    int temp=0;
    temp=A[index1];
    A[index1]=A[index2];
    A[index2]=temp;
    return;
}
int main(){


    int Count;
    unsigned long long A[5];

    for(Count=0;Count<5;Count++){cin>>A[Count];}
    //selection sort
    int currtop=0,currmaxindex=0;
    for(currtop=0;currtop<5;currtop++){
        currmaxindex=findindexofmax(A,currtop,5);
        Swap(A,currtop,currmaxindex);
    }

    unsigned long long i,minsum1=0,maxsum2=0;
    for(i=0;i<4;i++){
       minsum1=minsum1+A[i];
    }
    for(i=1;i<5;i++){
        maxsum2=maxsum2+A[i];
    }
    cout<<maxsum2<<" "<<minsum1<<endl;
    return 0;
}
