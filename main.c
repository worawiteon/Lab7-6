#include <stdio.h>
int main(void) {
 int i,j,k;
 int A[5][6],B[6][3];
 int sum[5][3] = {{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0}};
 printf("\n\tProgram for even number\n\n");
 //A
 for(i=0;i<5;i++){
 printf("Data A[%d][0-5]\n",i);
 for(j=0;j<6;j++){
 printf("\tA[%d][%d] :",i,j);
 scanf("%d",&A[i][j]);
 }
 printf("\n");
 }
 //b
 for(i=0;i<6;i++){
 printf("Data B[%d][0-0]\n",i);
 for(j=0;j<6;j++){
 printf("\tB[%d][%d] :",i,j);
 scanf("%d",&B[i][j]);
 }
 printf("\n");
 }
 //Value input
 printf("Number A[5][6]\n ");
 for(i=0;i<5;i++){
 for(j=0;j<6;j++){
 printf("%-3d",A[i][j]);
 }
 printf("\n");
 }
 printf("Number B[6][3]\n ");
 for(i=0;i<6;i++){
 for(j=0;j<3;j++){
 printf("%-3d",A[i][j]);
 }
 printf("\n");
 }
 for(i=0;i<5;i++){
 for(j=0;j<3;j++){
 for(k=0;k<6;k++){
 sum[i][k] += (A[i][k] * B[k][j]);
 }
 }
 }
 //Show output
 printf("\n\n\t ANSWER \n\n");
 for(i=0;i<5;i++){
 for(j=0;i<3;j++){
 printf("\t%-5d",sum[i][j]);
 }
 printf("\n");
 }
 return 0;
}