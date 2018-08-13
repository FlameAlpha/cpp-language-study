#include"trapezoid.h"

trapezoid::trapezoid(float u,float d,float l,float r):up(u),down(d),left(l),right(r){}

void trapezoid::set_trapezoid(float u,float d,float l,float r){
up=u;
down=d;
left=l;
right=r;
}

float trapezoid::area()
{
	float p,s,h;
	p=(fabs(up-down)+left+right)/2;
	s=sqrt(p*(p-left)*(p-right)*(p-fabs(up-down)));
	h=2*s/fabs(up-down);
	s=(up+down)*h/2;
	return s;
} 

ostream& operator << (ostream&output,trapezoid&tra)
{
	output<<"up_bottom="<<tra.up<<endl;
	output<<"down_bottom="<<tra.down<<endl;
	output<<"left_hypotenuse="<<tra.left<<endl;
	output<<"right_hypotenuse="<<tra.right<<endl;
	output<<"area="<<tra.area();
	return output; 
}
