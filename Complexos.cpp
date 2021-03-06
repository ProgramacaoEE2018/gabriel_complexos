#include <math.h>
#include "Complexo.h"

Complexo Complexo::Conjugado()
{
	return Complexo(real, -im);
}

Complexo Complexo::operator+(Complexo z)
{
	return Complexo(real + z.real, im + z.im);
}

Complexo Complexo::operator-(Complexo z)
{
	return Complexo(real - z.real, im - z.im);
}

Complexo Complexo ::operator*(Complexo z)
{
	return Complexo(real*z.real - im * z.im, real*z.im + im * z.real);
}

Complexo Complexo::operator/(Complexo z)
{
	return ((real*z.real + im * z.im) / (z.real*z.real + z.im*z.im), (im*z.real - real * z.im) / (z.real*z.real + z.im*z.im));
}

float Complexo::Modulo()
{
	float mod;
		mod = sqrt(real*real + im*im);
	return mod;
}