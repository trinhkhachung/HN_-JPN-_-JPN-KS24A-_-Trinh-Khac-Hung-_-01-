#include <stdio.h>

int main(){
 int arr[100];
 int currentIndex;
 int choice;
 int n;
 int value;
 int sum = 0,max=0,min=0;
 int position;
 do{
 	printf("\n**********MENU***********\n");
 	printf("1 nhap so phan tu va gia tri cho mang\n");
 	printf("2 in ra cac gia tri cac phan tu trong mang theo dang(arr[0]=1,arr[1]=5\n");
 	printf("3 tim gia tri nho nhat va lon nhat trong mang\n");
 	printf("4 in ra tong cac phan tu \n");
 	printf("5 them 1 phan tu o dau mang phan tu moi pphai do ng dung nhap vao\n");
 	printf("6 xoa phan tu tai vi tri cu the \n");
 	printf("7 sap xep mang theo thu tu giam dan\n");
 	printf("8 cho nguoi dung nhap vao 1 phan tu tim kiem phan tu do co ton tai trong mang hay khong\n");
 	printf("9 in ra toan bo so nguyen to trong mang\n");
 	printf("10 sap xep mang theo thu tu tang dan\n");
 	printf("11 thoat\n");
 	printf("moi nhap lua chon cua ban\n");
 	scanf("%d",&choice);
 	
 	switch (choice){
 		case 1:
 			 printf("Nhap so phan tu cua mang ");
            scanf("%d", &n);
            if ((n + currentIndex) > 100)
            {
                printf("mang khong hop le");
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    printf("arr[%d]=", currentIndex);
                    scanf("%d", &arr[currentIndex]);
                    currentIndex++;
                }
            }
            break;
        case 2:
        	for (int i = 0; i < currentIndex; i++){
                printf("arr[%d]=%d\n", i, arr[i]);
            }
            break;
        case 3:
        	max = arr[0];
            min = arr[0];
            for (int i = 0; i < currentIndex; i++)
            {
                max = (max > arr[i]) ? max : arr[i];
                min = (min < arr[i]) ? min : arr[i];
            }
            printf("Max=%d\tMin=%d\n", max, min);
            break;
        case 4:
        	for(int i = 0; i < currentIndex; i++){
        		sum+=arr[i];
        		printf("tong cac phan tu trong mang la: %d",sum);
			}
        	break;
        case 6:
        	printf("nhap vi tri can xoa: ");
        	scanf("%d",&position);
        	if(position >=0 && position < n){
        		for(int i = position; i < n-1 ; i++){
        			arr[i] = arr[i+1];
				}
				n--;
			}else{
				printf("vi tri ko hop le");
			}break;
        case 11:
        	
        	break;
	 }
 }while(choice!=11);
 return 0;
}
