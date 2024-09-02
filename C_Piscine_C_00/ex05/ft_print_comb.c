#include <unistd.h>

void ft_print_comb(void){
	char buffer[5];

	for(int i = 0; i <= 7; i ++){
		for(int j = i + 1; j <= 8; j++){
			for(int k =  j + 1; k <= 9;k ++){
			
			buffer[0] = '0' + i;
                        buffer[1] = '0' + j;
                        buffer[2] = '0' + k;
				if(i ==7 && j == 8 && k == 9){
				write(1, buffer, 3);
				}
				else{
                        	buffer[3] = ',';
                        	buffer[4] = ' ';
				write(1, buffer, 5);
				}
			}
		}


	}
			write(1, "\n", 1);
}
