#include <stdio.h>
int main(){
	int arr[100],n,i,key,found=0;
	printf("enter number of elements:");
	scanf("%d",&n);
	printf("enter %d elements:\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&sum[i]);
		printf("enter the no to search:");
		scanf("%d",&key);
		for(i=0;i<n;i++){
			if(arr[i]==key){
				printf("element%d found at position%d found at position %d/n",key,i+1);
				found=1;
				break;
				if(!found){
					printf("element %d not found in the array.\n",key);
				}
			}
		}
	}
	
}
