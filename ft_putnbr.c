#include <unistd.h>
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
void ft_putnbr(int i){
	int counter=1;
	int isNegative=0;
	if(i < 0){
		i = i*-1;
		isNegative=1;
	}
	while (i > ft_abs(10,counter)){
		counter++;
	}
	if(isNegative==1){
		ft_putchar('-');
	}
	counter--;
	while (counter >=0){
		int tmp = (i/ft_abs(10,counter));
		i=i-tmp*ft_abs(10,counter);
		ft_putInt(tmp);
		counter--;
	}
}
int main(){
	ft_putnbr(-123456789);
	return 1;
}
