int ifout(int x)	//�����������������
{
	if (x >= 15)
	{
		x -= 15;
	}
	else if (x <= -1)
	{
		x += 15;
	}
	return x;
}