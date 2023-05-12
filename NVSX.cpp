#include "NVSX.h"

using namespace std;

NVSX::NVSX()
{
	TenNVSX="";
	Ngay=Thang=Nam=LuongCanBan=SoSanPham=0;
}

NVSX::NVSX(string ten, int ngay, int thang, int nam, int luongcb, int sosp)
{
	TenNVSX=ten;
	Ngay=ngay;
	Thang=thang;
	Nam=nam;
	LuongCanBan=luongcb;
	SoSanPham=sosp;
}

void NVSX::NhapNVSX()
{
	cout<<"Nhap ten nhan vien: ";
	cin.ignore();
	getline(cin,TenNVSX);
	cout<<"Nhap lan luot ngay thang nam sinh nhan vien: ";
	cin>>Ngay>>Thang>>Nam;
	cout<<"Nhap luong can ban cua nhan vien: ";
	cin>>LuongCanBan;
	cout<<"Nhap so san pham cua nhan vien: ";
	cin>>SoSanPham;
}

void NVSX::XuatNVSX()
{
	cout<<"Ho ten nhan vien: "<<TenNVSX<<endl;
	cout<<"Ngay sinh nhan vien: "<<Ngay<<"/"<<Thang<<"/"<<Nam<<endl;
	cout<<"Luong can ban cua nhan vien: "<<LuongCanBan<<endl;
	cout<<"So san pham cua nhan vien: "<<SoSanPham<<endl;
}

int NVSX::TinhLuongNVSX()
{
	return LuongCanBan+SoSanPham*5000;
}

int NVSX::TinhTuoiNVSX()
{
	return 2023-Nam;
}

string NVSX::HoNVSX()
{
	stringstream ten(TenNVSX);
	string ho;
	while(ten>>ho)
	{
		return ho;
	}
 } 
