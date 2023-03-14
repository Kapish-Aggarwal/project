#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int j;
    for (int i=0;i<n;i++){
        scanf("%d",&j);
        arr[i]=j;
    }
    int min=arr[0];
    for (int k=0;k<n;k++){
        if (min>arr[k]){
            min=arr[k];
        }
    }
    printf("Minimun is %d\n",min);
    int max=arr[0];
    for (int l=0;l<n;l++){
        if (max<arr[l]){
            max=arr[l];
        }
    }
    printf("Maximun is %d\n",max);
}