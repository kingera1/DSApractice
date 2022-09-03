int sqr(int n)
{
	int pS = sqrt(n);
	int nS = pS + 1;
	pS = pS * pS;
	nS = nS * nS;
	int s= (n - pS) < (nS - n)? (n-pS): (nS - n);
	return s;
}
