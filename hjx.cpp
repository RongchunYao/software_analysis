int fb(int *h)
{
	return h[1]+3;
}

int a(int arg)
{
	int * b=new int[3];
	b[1]=arg;
	int *c=b;
	if(arg*arg*arg*arg*arg+arg+1>0) c[1]=114514;
	return fb(b);
}


