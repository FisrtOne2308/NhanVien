#include "NVVP.h"

using namespace std;

class ListNVVP{
	private:
		int SoNVVP;
		NVVP *B;
	public:
		ListNVVP();
		void NhapListNVVP();
		void XuatListNVVP();
		int TongLuongNVVP();
		int MaxLuongNVVP();
		void XuatNVVPcoLuongcaonhat();
		void XuatNVVPcoHoStr(string ho);
		int TongTuoiNVVP();
		int MaxTuoiNVVP();
		void XuatNVVPcoTuoiMax();
		int GetSoNVVP();
		~ListNVVP();
};
