//dont forget Stdheader
void	*memset(void *ptr, int value, size_t num)
{
	size_t	i;

	i = 0;
	while (i < num)
		ptr[i++] = value;
	return (ptr);
}
