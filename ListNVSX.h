#include "NVSX.h"

using namespace std;

class ListNVSX{
	private:
		int SoNVSX;
		NVSX *A;
	public:
		ListNVSX();
		void NhapListNVSX();
		void XuatListNVSX();
		int TongLuongNVSX();
		int MaxLuongNVSX();
		void XuatNVSXcoLuongcaonhat();
		void XuatNVSXcoHoStr(string ho);
		int TongTuoiNVSX();
		int GetSoNVSX();
		int MaxTuoiNVSX();
		void XuatNVSXcoTuoiMax();
		~ListNVSX();
};
