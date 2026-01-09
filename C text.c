//1 二维数组
//2 二维数组元素的比较
#include <stdio.h>
int main(){
    int M,N;
    scanf("%d %d",&M,&N);
    int arr[M][N];
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int cnt=0;
    for(int i=1;i<M-1;i++){
        for(int j=1;j<N-1;j++){
            if(arr[i][j]>arr[i-1][j]&&arr[i][j]>arr[i+1][j]&&arr[i][j]>arr[i][j-1]&&arr[i][j]>arr[i][j+1])
                {printf("%d %d %d\n",arr[i][j],i+1,j+1);
                 cnt=1;
                }
        }
    }if(!cnt)printf("None %d %d",M,N);
    return 0;
}