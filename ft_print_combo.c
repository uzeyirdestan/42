#include <unistd.h>
void ft_putchar(char c){
	write(1, &c, 1);
}
void ft_putInt(int i){
	char c= '0'+i;
	ft_putchar(c);
}
void ft_print_comb(void){
	for(int i=0;i<10;i++){
		for (int j=0;j<10;j++){
			for(int k=0;k<10;k++){
				if (i!=j&&j!=k&&i!=k){
					ft_putInt(i);
					ft_putInt(j);
					ft_putInt(k);
					ft_putchar(',');
				}
			}
		}
	}
}
int main(){
	ft_print_comb();
	return 1;
}
