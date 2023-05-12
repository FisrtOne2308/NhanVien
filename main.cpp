#include<bits/stdc++.h>
#include "ListNVVP.h"
#include "ListNVSX.h"

int main()
{
	ListNVSX nvsx;
	ListNVVP nvvp; 
	nvsx.NhapListNVSX();
	nvvp.NhapListNVVP();
	nvsx.XuatListNVSX();
	nvvp.XuatListNVVP();
	cout << endl;
	cout << "Tong so nhan vien cong ty dang quan li la: " << nvvp.GetSoNVVP() + nvsx.GetSoNVSX() << endl;
	cout << endl;
	nvsx.XuatNVSXcoLuongcaonhat();
	cout << endl;
	nvvp.XuatNVVPcoLuongcaonhat();
	string ho = "Le";
	cout << endl;
	cout<<"Danh sach nhan vien co ho Le: "<<endl;
	nvsx.XuatNVSXcoHoStr(ho);
	cout << endl;
	nvvp.XuatNVVPcoHoStr(ho);
	cout << endl;
	cout << "Tuoi trung binh cua nhan vien san xuat la: " << nvsx.TongTuoiNVSX() / nvsx.GetSoNVSX() << endl;
	cout << "Tuoi trung binh cua nhan vien van phong la: " << nvvp.TongTuoiNVVP() / nvvp.GetSoNVVP() << endl;
	cout << "Tuoi trung binh cua nhan vien trong cong ty la: " << (nvsx.TongTuoiNVSX() + nvvp.TongTuoiNVVP()) / (nvsx.GetSoNVSX() + nvvp.GetSoNVVP()) << endl;
	cout << endl;
	cout << "Danh sach nhan vien co tuoi lon nhat: "
	if(nvsx.MaxTuoiNVSX() < nvvp.MaxTuoiNVVP())
	{
		nvvp.XuatNVVPcoTuoiMax();
	}
	else if(nvsx.MaxTuoiNVSX() > nvvp.MaxTuoiNVVP())
	{
		nvsx.XuatNVSXcoTuoiMax();
	}
	else
	{
		nvsx.XuatNVSXcoTuoiMax();
		nvvp.XuatNVVPcoTuoiMax();
	}
	cout << endl;
	cout << "Tong luong cong ty phia tra cho nhan vien san xuat la: " << nvsx.TongLuongNVSX() << endl;
	cout << "Tong luong cong ty phia tra cho nhan vien van phong la: " << nvvp.TongLuongNVVP() << endl;
	cout << "Tong luong cong ty phai tra cho tat ca nhan vien la: " << nvsx.TongLuongNVSX() + nvvp.TongLuongNVVP() << endl; 
	return 0;
}
