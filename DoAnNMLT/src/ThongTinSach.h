/*
 * ThongTinSach.h
 *
 *  Created on: Apr 13, 2024
 *      Author: PCPV
 */

#ifndef THONGTINSACH_H_
#define THONGTINSACH_H_

struct Sach {
	char MaSach[20];
	char TenSach[50];
	char TacGia[50];
	char Nxb[50];
	int NamXuatBan;
	char TheLoai[20];
	int Gia;
	int SoLuong;
};

void XemThongTinSach(struct Sach ThongTinSach[100]);
void ThemSach(struct Sach ThongTinSach[100]);
void SuaThongTinSach(struct Sach ThongTinSach[100]);
void XoaSach(struct Sach ThongTinSach[100]);
void TimTheoMaSach(struct Sach ThongTinSach[100]);
void TimTheoTen(struct Sach ThongTinSach[100]);

#endif /* THONGTINSACH_H_ */
