#include<stdio.h>
int main(){
    int max,min,sum=0,val;
    float avg,count=0;
    scanf("%d",&val);
    max=val;
    min=val;
    for(;val!=-1;scanf("%d",&val))
    {
        sum+=val;
        if(max<val){
            max=val;
        }
        if(min>val){
            min=val;
        }
        count++;
    }
    avg = sum/count;

    printf("Min = %d\nMax = %d\nSum = %d\nAverage = %f",min,max,sum,avg);
    return 0;
}
