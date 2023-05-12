#include "NVVP.h"

using namespace std;

NVVP::NVVP()
{
	TenNVVP="";
	ngay=thang=nam=SoNgayLamViec=0;
}

NVVP::NVVP(string ten, int dd, int mm , int yyyy, int snlv)
{
	TenNVVP=ten;
	ngay=dd;
	thang=mm;
	nam=yyyy;
	SoNgayLamViec=snlv;
}

void NVVP::NhapNVVP()
{
	cout<<"Nhap ten nhan vien: ";
	cin.ignore();
	getline(cin,TenNVVP);
	cout<<"Nhap lan luot ngay thang nam sinh nhan vien: ";
	cin>>ngay>>thang>>nam;
	cout<<"Nhap so ngay lam viec cua nhan vien: ";
	cin>>SoNgayLamViec;
}

void NVVP::XuatNVVP()
{
	cout<<"Ho ten nhan vien: "<<TenNVVP<<endl;
	cout<<"Ngay sinh nhan vien: "<<ngay<<"/"<<thang<<"/"<<nam<<endl;
	cout<<"So ngay lam viec cua nhan vien: "<<SoNgayLamViec<<endl;
}

int NVVP::TinhLuongNVVP()
{
	return SoNgayLamViec*100000;
}

int NVVP::TinhTuoiNVVP()
{
	return 2023-nam;
}

string NVVP::HoNVVP()
{
	stringstream ten(TenNVVP);
	string ho;
	while(ten>>ho)
	{
		return ho;
	}
 } 
