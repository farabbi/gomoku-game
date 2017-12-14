int ifout(int x)	//将光标限制在棋盘内
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