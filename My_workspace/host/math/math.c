/*
 * math.c
 *
 *  Created on: 04.04.2023
 *      Author: mathi
 */




int math_add(int n1,int n2)
{
	return n1+n2;
}
int math_sub(int n1,int n2)
{
	return n1-n2;
}
long long int math_mul(int n1,int n2)
{
	long long int mul = (long long int)n1 * (long long int)n2;
	return mul;
}
float math_div(int n1,int n2)
{
	if (n2==0) return 0;
	else {
		float mul = (float)n1 / (float)n2;
		return mul;
	}
}
