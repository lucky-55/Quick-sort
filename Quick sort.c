#include<stdio.h>
void quicksort(int arr[],int first,int last){
    int i,j,pivot,temp;
    if(first<last){
        pivot = first;
        i = first;
        j = last;
        while(i<j){
            while(arr[i]<=arr[pivot]&&i<last)
              i++;
            while(arr[j]>arr[pivot])
              j--;
            if(i<j){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        temp = arr[pivot];
        arr[pivot] = arr[j];
        arr[j] = temp;
        quicksort(arr,first,j-1);
        quicksort(arr,j+1,last);
    }
}
int main(){
    int i,len,arr[25];
    printf("Enter the length of Array:");
    scanf(" %d ",&len);
    printf("Enter %d element:",len);
    for(i=0;i<len;i++)
    scanf("%d",&arr[i]);
    printf("Array Before Sorting:");
    for(i=0;i<len;i++)
      printf(" %d ",arr[i]);
    quicksort(arr,0,len-1);
    printf("\nArray After Sorting:");
    for(i=0;i<len;i++)
    printf(" %d ",arr[i]);
    return 0;
}
    

                
                
                
                
