#include <unistd.h>
void ft_print_numbers(void){
	char array[10];
	for (int i=0;i<10;i++){
		array[i]='0'+i;
	}
	write(1,&array,10);
}

int main(){
	ft_print_numbers();
	return 1;
}
