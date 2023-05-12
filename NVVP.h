#include <bits/stdc++.h>

using namespace std;

class NVVP{
	private:
		string TenNVVP;
		int ngay, thang, nam, SoNgayLamViec;
	public:
		NVVP();
		NVVP(string ten, int ngay, int thang, int nam, int snvl);
		void NhapNVVP();
		void XuatNVVP();
		int TinhLuongNVVP();
		int TinhTuoiNVVP();
		string HoNVVP() ;
};


