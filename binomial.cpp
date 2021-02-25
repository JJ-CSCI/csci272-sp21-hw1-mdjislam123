#include "binomial.h"
Binomial::Binomial (double c1, double c2, int p1, int p2)
{
	coefft1 = c1; coefft2 = c2;
	if (p1 < 1) p1 = 1;
	if (p2 < 1) p2 = 1;
	power = p1; power2= p2;

}
double Binomial::GetCofficient (int idx) const 
{
	if (idx == 1) retuen cofft1;
	else if (idx == 2) return coefft2;
	else return -1;

}

int Binomial::GetPower (int idx) const 
{
	if (idx == 1) return power1;
	else if (idx == 2) return power2;
	else return -1;

}

int Binomial::SetPower (int idx, int pwr)
{
if (pwr <=0) pwr = 1;
if (idx ==1) power1=pwr;
else if (idx ==2) power 2 = pwr;
else return -1;
return 0;

}
int Binomial::add (const Binomial other)
{
	if (other.getpower (1) == power1) &&other.getpower (2)== power2))
	{
		cofft1 += other.GetCoefficient (1);
		cofft2 += other.GetCoefficient (2);
		return 0;
	
	}
}

else if ((other.Getpower (2) == power1) && other .getpower (1) == power2))
{
	cofft2 += other.GetCoefficient (2);
	cofft1 += other.GetCoefficient (1);
	return 0;

}
else 
return -1;

}
void Binomial :: Multiply (double f)
{
	cofft1 *= f;
	cofft2 *= f;


}

void Binomial :: Multiply (double cofft, int pwr)
{

	coefft1 *= coefft;
	coefft2 *= coefft;
	power += pwr;
	power2 += pwr;
}







