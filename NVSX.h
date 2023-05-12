#include <bits/stdc++.h>

using namespace std;

class NVSX{
	private:
		string TenNVSX;
		int Ngay, Thang, Nam, LuongCanBan, SoSanPham;
	public:
		NVSX();
		NVSX(string ten, int ngay, int thang, int nam, int luongcb, int sosp);
		void NhapNVSX();
		void XuatNVSX();
		int TinhLuongNVSX();
		int TinhTuoiNVSX();
		string HoNVSX() ;
};


