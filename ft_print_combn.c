#include <unistd.h>
typedef enum {true,false} bool;
void ft_putchar(char c){
	write(1, &c, 1);
}
void ft_putInt(int i){
	char c= '0'+i;
	ft_putchar(c);
}
int ft_abs(int n,int e){
	if(e==0){
		return 1;
	}
	else {
		int total=n;
		for(int i=1;i<e;i++){
			total = total * n;
		}
		return total;
	}
}
void ft_print_combn(int n){
	char values[n];
	for(int i=0;i<ft_abs(10,n);i++){
		int tmp=i;
		bool isHaveSameNumber = false;
		for(int j=0;j<n;j++){
			int value = (tmp/ft_abs(10,n-1-j));
			tmp = tmp - value*ft_abs(10,n-1-j);
			for(int k=0;k<j;k++){
				if(value==values[k]){
					isHaveSameNumber = true;
					break;
				}
			}
			values[j]=value;
		}
		if (isHaveSameNumber==false){
			for(int j=0;j<n;j++){
				ft_putInt(values[j]);
			}
			ft_putchar(',');
		}
		
	}
}
int main(){
	ft_print_combn(2);
	return 1;
}
