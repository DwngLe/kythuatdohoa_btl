#include<bits/stdc++.h>
using namespace std;

struct point{
	int x, y, z;
	void in(){
		cout<<"Toa do moi la:"<<endl;
		cout<<x<<" "<<y<<" "<<z<<endl;
	}
};

void tinhtien(point &p){
	cout<<"Nhap cac toa do tinh tien theo x, y ,z"<<endl;
	int x, y, z;
	cin>>x>>y>>z;
	p.x+=x;
	p.y+=y;
	p.z+=z;
}

void tyle(point &p){
	cout<<"Nhap ty le scale:"<<endl;
	int sx, sy, sz;
	cin>>sx>>sy>>sz;
	p.x*=sx;
	p.y*=sy;
	p.z*=sz;
}

void biendang(point &p){
	int a, b;
	cout<<"Nhap ty le meo theo Ox:"<<endl;
	cin>>a>>b;
	p.x = p.x + p.y*a + p.z*b;
	cout<<"Nhap ty le meo theo Oy"<<endl;
	cin>>a>>b;
	p.y = p.x*a + p.y + p.z*b;
	cout<<"Nhap ty le meo theo Oz"<<endl;
	cin>>a>>b;
	p.z = p.x*a + p.y*b + p.z;
}


int main(){
	point p;
	cout<<"Nhap toa do diem x, y , z:";
	cin>>p.x>>p.y>>p.z;
	cout<<"Toa do cua diem vua nhap la:";
	p.in();
	int choose;
	while(1){
		cout<<"____________________"<<endl;
		cout<<"case 0: Thoat"<<endl;
		cout<<"case 1: Tinh tien"<<endl;
		cout<<"case 2: Ty le"<<endl;
		cout<<"case 3: Bien dang"<<endl;
		cin>>choose;
		switch (choose){
			case 0:
				return 0;
			case 1:
				tinhtien(p);
				p.in();
				break;
			case 2:
				tyle(p);
				p.in();
				break;
			case 3:
				biendang(p);
				p.in();
				break;
		}
		
	}
	
	
}
