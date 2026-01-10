//重要!
#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    int arr2[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
        arr2[i]=0;
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(arr[i]==arr[j])
                arr2[i]++;
        }
    }
    int max=arr2[0];
    int cnt=0;
    for(int i=1;i<N;i++){
        if(arr2[i]>max){
            max=arr2[i];
            cnt=i;}
    }
    printf("%d %d",arr[cnt],max);
    return 0;
}