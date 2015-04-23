//用C语言的采用log n的方法求x的n次方
int sy(int s,int n){
	int result=1;
	if(n==0)return 1;
	else if (n==1)
	{
		return s;
	}
	else{
	while (n!=0)
	{
		if (0!=(n&1))
		{
			result=result*s;
		}
		s*=s;
		n=n>>1;
	}
	}
	return result;
}
