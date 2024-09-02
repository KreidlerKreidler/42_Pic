#include <unistd.h>

void ft_print_comb2(void){
	char buffer[7];
		for(int i = 0; i <= 98; i++){
			for(int j = i + 1; j <= 99; j ++){
			
			buffer[0] = '0' + i / 10;
			buffer[1] = '0' + i % 10;
			buffer[2] = ' ';
			buffer[3] = '0' + j / 10;
			buffer[4] = '0' + j % 10;
			
			if (i == 98 && j == 99) {
			 write(1, buffer, 5);
			}
			else{
			buffer[5] = ',';
			buffer[6] = ' ';
			write(1, buffer, 7);
				}
			}
		}
	write(1, "\n", 1);
}
