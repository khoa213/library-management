/*
 ============================================================================
 Name        : DoAnNMLT.c
 Author      : khoa
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ThongTinDocGia.h"
#include "ThongTinSach.h"
#include "PhieuMuonTraSach.h"
#include "ThongKe.h"

int main() {

	struct DocGia DanhSachDocGia[100];

	struct Sach ThongTinSach[100];

	int MaDocGiaMuon[100];
	char NgayMuon[100][12];
	char NgayTra[100][12];
	char NgayTraThuc[100][12];
	char MaSachMuon[100][20];

// khai bao bien thuc hien viec chon menu
	int LuaChon;
	Menu();
	fflush(stdout);
	scanf("%d", &LuaChon);
	getchar();

	// khi nao menu = 0 thi thoat chuong trinh
	while (LuaChon!=0) {
		// khi chon menu 1

		if(LuaChon==1) {
			// chay ham tuong ung
			XemThongTinDocGia(DanhSachDocGia);
			//chon lai menu
			Menu();
			fflush(stdout);
			scanf("%d", &LuaChon);
			getchar();
		}
			//chon menu 2
			else if (LuaChon==2) {
			ThemDocGia(DanhSachDocGia);
			Menu();
			fflush(stdout);
			scanf("%d", &LuaChon);
			getchar();
		}  else if (LuaChon==3) {
			ChinhSua(DanhSachDocGia);
			Menu();
			fflush(stdout);
			scanf("%d", &LuaChon);
			getchar();
		} /* else if (LuaChon==4) {
			XoaThongTin(MaDocGia,HoTen,Cmnd,NgaySinh,GioiTinh,Email,DiaChi,NgayLapThe,NgayTheHetHan);
			Menu();
			fflush(stdout);
			scanf("%d", &LuaChon);
			getchar();
		}*/ else if (LuaChon==5) {
			TimKiemTheoCmnd(DanhSachDocGia);
			Menu();
			fflush(stdout);
			scanf("%d", &LuaChon);
			getchar();
		} else if (LuaChon==6) {
			TimKiemTheoTen(DanhSachDocGia);
			Menu();
			fflush(stdout);
			scanf("%d", &LuaChon);
			getchar();
		}
			else if (LuaChon==7) {
			XemThongTinSach(ThongTinSach);
			Menu();
			fflush(stdout);
			scanf("%d", &LuaChon);
			getchar();
		} else if (LuaChon==8) {
			ThemSach(ThongTinSach);
			Menu();
			fflush(stdout);
			scanf("%d", &LuaChon);
			getchar();
		}/* else if (LuaChon==9) {
			SuaThongTinSach(MaSach,TenSach,TacGia,NhaXuatBan,NamXuatBan,TheLoai,GiaTien,SoQuyen);
			Menu();
			fflush(stdout);
			scanf("%d", &LuaChon);
			getchar();
		} else if (LuaChon==10) {
			XoaSach(MaSach,TenSach,TacGia,NhaXuatBan,NamXuatBan,TheLoai,GiaTien,SoQuyen);
			Menu();
			fflush(stdout);
			scanf("%d", &LuaChon);
			getchar();
		}*/ else if (LuaChon==11) {
			TimTheoMaSach(ThongTinSach);
			Menu();
			fflush(stdout);
			scanf("%d", &LuaChon);
			getchar();
		} else if (LuaChon==12) {
			TimTheoTen(ThongTinSach);
			Menu();
			fflush(stdout);
			scanf("%d", &LuaChon);
			getchar();
		} else if (LuaChon==13) {
			ThemPhieuMuonTra(MaDocGiaMuon,NgayMuon,NgayTra,NgayTraThuc,MaSachMuon);
			Menu();
			fflush(stdout);
			scanf("%d", &LuaChon);
			getchar();
		} else if (LuaChon==14) {
			XemPhieu(MaDocGiaMuon,NgayMuon,NgayTra,NgayTraThuc,MaSachMuon);
			Menu();
			fflush(stdout);
			scanf("%d", &LuaChon);
			getchar();
		}/* else if (LuaChon==15) {
			SoLuongSach(SoQuyen);
			Menu();
			fflush(stdout);
			scanf("%d", &LuaChon);
			getchar();
		}*/ else if (LuaChon==16) {
			SoLuongDocGia(DanhSachDocGia);
			Menu();
			fflush(stdout);
			scanf("%d", &LuaChon);
			getchar();
		} else if (LuaChon==17) {
			SoLuongDocGiaTheoGioiTinh(DanhSachDocGia);
			Menu();
			fflush(stdout);
			scanf("%d", &LuaChon);
			getchar();
		}
			// muc chon khong co
			/*else {
			printf("Muc chon khong ton tai. Moi chon lai. \n");
			Menu();
			fflush(stdout);
			scanf("%d", &LuaChon);
			getchar();
		}*/

	}
	printf("Chuong trinh ket thuc.");
	return 0;
}

//ham in menu lua chon
void Menu(){
	printf("Thu vien Dai hoc KHTN\n");
	printf("1.Xem danh sach doc gia.\n");
	printf("2.Them doc gia.\n");
	printf("3.Chinh sua thong tin doc gia.\n");
	printf("4.Xoa thong tin doc gia.\n");
	printf("5.Tim kiem doc gia theo cmnd .\n");
	printf("6.Tim kiem doc gia theo ten .\n");
	printf("7.Xem thong tin sach .\n");
	printf("8.Them sach .\n");
	printf("9.Sua thong tin sach .\n");
	printf("10.Xoa thong tin sach .\n");
	printf("11.Tim sach theo ma sach .\n");
	printf("12.Tim sach theo ten .\n");
	printf("13.Them phieu muon tra .\n");
	printf("14.Xem phieu muon tra .\n");
	printf("15.Xem so luong sach .\n");
	printf("16.Xem so luong doc gia .\n");
	printf("17. So luong doc gia theo gioi tinh.\n");
	printf("0.Thoat chuong trinh .\n");
	printf("Moi chon so: ");

}
