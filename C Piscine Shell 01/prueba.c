void	ft_ft(int *nbr)		

{
	*nbr = 42;				
}


int		main(void)
{
	int		i;				

	i = 21;					

	ft_ft(&i);	
	ft_putnbr(i);	
	return (0);
}
