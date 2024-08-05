/*
 * ThongTinDocGia.h
 *
 *  Created on: Mar 29, 2024
 *      Author: PCPV
 */

#ifndef THONGTINDOCGIA_H_
#define THONGTINDOCGIA_H_

struct DayTime{
	int ngay;
	int thang;
	int nam;
};

struct DocGia{
	int MaDocGia;
	char HoTen[50];
	char Cmnd[15];
	struct DayTime NgaySinh;
	char GioiTinh[10];
	char Email[30];
	char DiaChi[50];
	struct DayTime NgayLapThe;
	struct DayTime NgayTheHetHan;
};



void ThemDocGia(struct DocGia DanhSachDocGia[100]);
void XemThongTinDocGia(struct DocGia DanhSachDocGia[100]);
void ChinhSua(struct DocGia DanhSachDocGia[100]);
void XoaThongTin(int MaDocGia[100],char HoTen[100][100],char Cmnd[100][12],char NgaySinh[100][12],char GioiTinh[100][6],char Email[100][50],char DiaChi[100][200],char NgayLapThe[100][12],char NgayTheHetHan[100][12]);
void TimKiemTheoCmnd(struct DocGia DanhSachDocGia[100]);
void TimKiemTheoTen(struct DocGia DanhSachDocGia[100]);


#endif /* THONGTINDOCGIA_H_ */
