#include "ListNVSX.h"

using namespace std;

ListNVSX::ListNVSX(){}

void ListNVSX::NhapListNVSX()
{
	cout<<"Nhap so nhan vien san xuat: ";
	cin>>SoNVSX;
	A = new NVSX[SoNVSX];
	for(int i=0; i<SoNVSX; i++)
	{
		cout<<"Nhap thong tin nhan vien san xuat thu "<<i+1<<" :"<<endl;
		A[i].NhapNVSX();
	}
}

void ListNVSX::XuatListNVSX()
{
	cout<<"Danh sach nhan vien san xuat cua cong ty: "<<endl;
	for(int i=0; i<SoNVSX; i++)
	{
		A[i].XuatNVSX();
		cout<<endl;
	}
}

int ListNVSX::TongLuongNVSX()
{
	int tongluong=0;
	for(int i=0; i<SoNVSX; i++)
	{
		tongluong+=A[i].TinhLuongNVSX();
	}
	return tongluong;
}

int ListNVSX::MaxLuongNVSX(){
	int maxluong=A[0].TinhLuongNVSX();
	for(int i=1; i<SoNVSX; i++)
	{
		if(A[i].TinhLuongNVSX()>maxluong)
			maxluong=A[i].TinhLuongNVSX();
	}
	return maxluong;
}

void ListNVSX::XuatNVSXcoLuongcaonhat()
{
	cout<<"Danh sach nhan vien san xuat co luong cao nhat: "<<endl;
	for(int i=0; i<SoNVSX; i++)
	{
		if(A[i].TinhLuongNVSX()==MaxLuongNVSX())
		{
			A[i].XuatNVSX();
			cout<<endl;
		}
	}
}

void ListNVSX::XuatNVSXcoHoStr(string ho)
{
	for(int i=0; i<SoNVSX; i++)
	{
		if(A[i].HoNVSX()==ho)
		{
			A[i].XuatNVSX();
			cout<<endl;	
		}	
	}
}

int ListNVSX::TongTuoiNVSX()
{
	int tongtuoi=0;
	for(int i=0; i<SoNVSX; i++)
	{
		tongtuoi+=A[i].TinhTuoiNVSX();	
	}
	return tongtuoi;	
}

int ListNVSX::GetSoNVSX()
{
	return SoNVSX;
}

int ListNVSX::MaxTuoiNVSX()
{
	int tuoimax=A[0].TinhTuoiNVSX();
	for(int i=1; i<SoNVSX; i++)
	{
		if(A[i].TinhTuoiNVSX()>tuoimax)
		{
			tuoimax=A[i].TinhTuoiNVSX();
		}
	}
	return tuoimax;
}

void ListNVSX::XuatNVSXcoTuoiMax()
{
	for(int i=0; i<SoNVSX; i++)
	{
		if(A[i].TinhTuoiNVSX()==MaxTuoiNVSX())
		{
			A[i].XuatNVSX();
		}
	}
}

ListNVSX::~ListNVSX()
{
	if(A!=NULL)
	{
		delete []A;
	}
	A=NULL;
}
