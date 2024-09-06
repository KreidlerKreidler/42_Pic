void ft_ultimate_div_mod(int *a, int *b)
{
	int temp_a = *a;
	
	*a = *a / *b;
	*b = temp_a % *b;
}
