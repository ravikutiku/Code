int Solution::pow(int x, int n, int d) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
int i;
int pow =n;
int temp;
temp =x;
if (x == 0 && d ==1)
{
	return 0;
}
if (n == 0)
{
	return 1;
	}
	
while(n!=1)
{
	temp *=temp;
	n= n/2;
}

if (pow %2 !=0 && pow !=1)
{
	temp = temp *x;
}
 temp = temp %d;
if (temp <0)
{
	temp = d+temp;
}	
return temp;
}