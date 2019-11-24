int fact(int val)
{
	int ret=1;
	while (val > 1)
		ret *= val--;
	return ret;
}
int abs(int val)
{
	if (val < 0)
		return -val;
	else
		return val;
}