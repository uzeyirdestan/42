#include <unistd.h>
void ft_print_alphabet(void){
	char alphabet [26];
	for (int i=0;i<26;i++){
		alphabet[i] = 'a'+i;
	}
	write(1,&alphabet,26);
}

int main(){
	ft_print_alphabet();
	return 1;
}
