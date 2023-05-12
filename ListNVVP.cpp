#include "ListNVVP.h"

using namespace std;

ListNVVP::ListNVVP(){}

void ListNVVP::NhapListNVVP()
{
	cout<<"Nhap so nhan vien van phong: ";
	cin>>SoNVVP;
	B = new NVVP[SoNVVP];
	for(int i=0; i<SoNVVP; i++)
	{
		cout<<"Nhap thong tin nhan vien van phong thu "<<i+1<<" :"<<endl;
		B[i].NhapNVVP();
	}
}

void ListNVVP::XuatListNVVP()
{
	cout<<"Danh sach nhan vien van phong cua cong ty: "<<endl;
	for(int i=0; i<SoNVVP; i++)
	{
		B[i].XuatNVVP();
		cout<<endl;
	}
}

int ListNVVP::TongLuongNVVP()
{
	int tongluong=0;
	for(int i=0; i<SoNVVP; i++)
	{
		tongluong+=B[i].TinhLuongNVVP();
	}
	return tongluong;
}

int ListNVVP::MaxLuongNVVP(){
	int maxluong=B[0].TinhLuongNVVP();
	for(int i=1; i<SoNVVP; i++)
	{
		if(B[i].TinhLuongNVVP()>maxluong)
			maxluong=B[i].TinhLuongNVVP();
	}
	return maxluong;
}

void ListNVVP::XuatNVVPcoLuongcaonhat()
{
	cout<<"Danh sach nhan vien van phong co luong cao nhat: "<<endl;
	for(int i=0; i<SoNVVP; i++)
	{
		if(B[i].TinhLuongNVVP()==MaxLuongNVVP())
		{
			B[i].XuatNVVP();
			cout<<endl;
		}
	}
}

void ListNVVP::XuatNVVPcoHoStr(string ho)
{
	for(int i=0; i<SoNVVP; i++)
	{
		if(B[i].HoNVVP()==ho)
		{
			B[i].XuatNVVP();
			cout<<endl;	
		}	
	}
}

int ListNVVP::TongTuoiNVVP()
{
	int tongtuoi=0;
	for(int i=0; i<SoNVVP; i++)
	{
		tongtuoi+=B[i].TinhTuoiNVVP();	
	}
	return tongtuoi;	
}

int ListNVVP::GetSoNVVP()
{
	return SoNVVP;
}

int ListNVVP::MaxTuoiNVVP()
{
	int tuoimax=B[0].TinhTuoiNVVP();
	for(int i=1; i<SoNVVP; i++)
	{
		if(B[i].TinhTuoiNVVP()>tuoimax)
		{
			tuoimax=B[i].TinhTuoiNVVP();
		}
	}
	return tuoimax;
}

void ListNVVP::XuatNVVPcoTuoiMax()
{
	for(int i=0; i<SoNVVP; i++)
	{
		if(B[i].TinhTuoiNVVP()==MaxTuoiNVVP())
		{
			B[i].XuatNVVP();
		}
	}
}

ListNVVP::~ListNVVP()
{
	if(B!=NULL)
	{
		delete []B;
	}
	B=NULL;
}

