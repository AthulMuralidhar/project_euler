/* p2 febonacci series */
#include<stdio.h>
int main(){
	int a = 2;
	int b = 3;
	int sum_febo = 0;
	for ( int i=0;i<=1000;i++ ){
		if (a>=4000000){
			break;
		}
		if ((a<b) &&  (a<4000000)) {
			int c = a;
			a = b;
			b = c + b;
			if ( c%2==0){
				sum_febo = sum_febo + c;
				}
		}

	}
	printf("%d\n",sum_febo);
	return 0;
}
