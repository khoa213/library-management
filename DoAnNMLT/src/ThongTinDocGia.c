/*
 * ThongTinDocGia.c
 *
 *  Created on: Mar 29, 2024
 *      Author: PCPV
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ThongTinDocGia.h"



// cac tham so la cac mang chua thong tin
void ThemDocGia(struct DocGia DanhSachDocGia[100])
{
	FILE *file;

	char *path = "src/DocGia.txt";
	file = fopen(path,"a");
	if (file == NULL) {
	        printf("Khong the mo file.\n");
	    }

	for (int i=0;i<100;i++) {
		// neu ma doc gia o vi tri i = 0
		// thi o do khong ton tai thong tin
		// chen thong tin vao vi tri do
		if(DanhSachDocGia[i].MaDocGia==0) {
			// them id tu dong
//			fprintf(file,"%d\n",i+1);
			printf("nhap Id: ");
			fflush(stdout);
			scanf("%d",&DanhSachDocGia[i].MaDocGia);
			fprintf(file,"Id=%d ",DanhSachDocGia[i].MaDocGia);
			getchar();

			printf("nhap ten: ");
			fflush(stdout);
			// them string voi khoang trang
			scanf(" %[^\n]", &DanhSachDocGia[i].HoTen);
			fprintf(file,"ten=%s ",DanhSachDocGia[i].HoTen);
//			getchar();

			printf("nhap cmnd: ");
			fflush(stdout);
			scanf(" %[^\n]", &DanhSachDocGia[i].Cmnd);
			fprintf(file,"cmnd=%s ",DanhSachDocGia[i].Cmnd);

//			getchar();

			printf("nhap ngay sinh: ");
			fflush(stdout);
			scanf("%d",&DanhSachDocGia[i].NgaySinh.ngay);
			fprintf(file,"ngaysinh=%d ",DanhSachDocGia[i].NgaySinh.ngay);
			getchar();


			printf("nhap thang sinh: ");
			fflush(stdout);
			scanf("%d",&DanhSachDocGia[i].NgaySinh.thang);
			fprintf(file,"thangsinh=%d ",DanhSachDocGia[i].NgaySinh.thang);
			getchar();


			printf("nhap nam sinh: ");
			fflush(stdout);
			scanf("%d",&DanhSachDocGia[i].NgaySinh.nam);
			fprintf(file,"namsinh=%d ",DanhSachDocGia[i].NgaySinh.nam);
			getchar();

			printf("nhap gioi tinh: ");
			fflush(stdout);
			scanf(" %[^\n]", &DanhSachDocGia[i].GioiTinh);
			fprintf(file,"gioitinh=%s ",DanhSachDocGia[i].GioiTinh);
//			getchar();

			printf("nhap email: ");
			fflush(stdout);
			scanf(" %[^\n]", &DanhSachDocGia[i].Email);
			fprintf(file,"email=%s ",DanhSachDocGia[i].Email);
//			getchar();

			printf("nhap dia chi: ");
			fflush(stdout);
			scanf(" %[^\n]", &DanhSachDocGia[i].DiaChi);
			fprintf(file,"diachi=%s ",DanhSachDocGia[i].DiaChi);
//			getchar();

			printf("nhap ngay lap the: ");
			fflush(stdout);
			scanf("%d",&DanhSachDocGia[i].NgayLapThe.ngay);
			fprintf(file,"ngaylap=%d ",DanhSachDocGia[i].NgayLapThe.ngay);
			getchar();

			printf("nhap thang lap the: ");
			fflush(stdout);
			scanf("%d",&DanhSachDocGia[i].NgayLapThe.thang);
			fprintf(file,"thanglap=%d ",DanhSachDocGia[i].NgayLapThe.thang);
			getchar();

			printf("nhap nam lap the: ");
			fflush(stdout);
			scanf("%d",&DanhSachDocGia[i].NgayLapThe.nam);
			fprintf(file,"namlap=%d ",DanhSachDocGia[i].NgayLapThe.nam);
			getchar();

			fprintf(file,"ngayhh=%d ",DanhSachDocGia[i].NgayLapThe.ngay);
			fprintf(file,"thanghh=%d ",DanhSachDocGia[i].NgayLapThe.thang);
			fprintf(file,"namhh=%d\n",DanhSachDocGia[i].NgayLapThe.nam+2);

			// chi thuc hien 1 lan nen cho break vong lap
			fclose(file);
			printf("da ghi du lieu\n");
			break;
		}
	}

}

void XemThongTinDocGia(struct DocGia DanhSachDocGia[100])
{
//	printf("Id");
//	printf("%25s","Ho ten");
//	printf("%15s","Cmnd");
//	printf("%15s","Ngay sinh");
//	printf("%15s","Gioi tinh");
//	printf("%30s","Email");
//	printf("%60s","Dia chi");
//	printf("%20s","Ngay lap the");
//	printf("%20s\n","Ngay the het han");
	FILE *file;
	char buffer[100];

	char *path = "src/DocGia.txt";
	file = fopen(path,"r");
	if (file == NULL) {
		        printf("Khong the mo file.\n");
		    }
	while(fgets(buffer,sizeof(buffer),file)!=NULL) {
		printf("%s",buffer);
	}
	fclose(file);
}

void ChinhSua(struct DocGia DanhSachDocGia[100])
{
	FILE *file;
	char buffer[100];
	char *path = "src/DocGia.txt";
	file = fopen(path,"r");
	if (file == NULL) {
	        printf("Khong the mo file.\n");
	}

	int Id;
	printf("nhap Id: ");
	fflush(stdout);
	scanf("%d", &Id);
	getchar();

//	fgets(buffer,100,file);
//	char *position = strstr(buffer,Id);
//	int index = position - buffer;
//	fseek(file, index, SEEK_SET);
//	while(fgets(buffer,sizeof(buffer),file)!=",") {
//			printf("%s",buffer);
//		}
	fclose(file);
//	for (int i=0; i<100;i++) {
//		// tim vi tri co ma doc gia =id roi thay the
//
//	}
}

void XoaThongTin(int MaDocGia[100],char HoTen[100][100],char Cmnd[100][12],char NgaySinh[100][12],char GioiTinh[100][6],char Email[100][50],char DiaChi[100][200],char NgayLapThe[100][12],char NgayTheHetHan[100][12])
{
	int Id;
	printf("nhap Id: ");
	fflush(stdout);
	scanf("%d", &Id);
	getchar();
	for (int i=0; i<100;i++) {
			// tim vi tri co ma doc gia =id roi xoa
			if (MaDocGia[i]==Id) {
				// gan id ve 0
				MaDocGia[i] = 0;
				// gan thong tin ve chuoi rong
				strcpy(HoTen[i],"");
				strcpy(Cmnd[i],"");
				strcpy(NgaySinh[i],"");
				strcpy(GioiTinh[i],"");
				strcpy(Email[i],"");
				strcpy(DiaChi[i],"");
				strcpy(NgayLapThe[i],"");
				strcpy(NgayTheHetHan[i],"");

				break;
			}
		}
}

void TimKiemTheoCmnd(struct DocGia DanhSachDocGia[100])
{
	char cccd[15];
	printf("nhap cccd: ");
	fflush(stdout);
	scanf("%s", cccd);
	char IdSearch[] = "cmnd=";
	strcat(IdSearch,cccd) ;
	char line[200];
	FILE *file;
	char *path = "src/DocGia.txt";
	file = fopen(path, "r");
	    if (file == NULL) {
	        printf("cannot open file.\n");

	   }
	   while (fgets(line, 200, file)) {

	            if (strstr(line, IdSearch) != NULL) {
	                printf("%s",line);

	            }
	        }
	    fclose(file);
}

void TimKiemTheoTen(struct DocGia DanhSachDocGia[100])
{
	char name[50];
	printf("nhap ten: ");
	fflush(stdout);
	scanf("%s", name);
	char NameSearch[] = "ten=";
	strcat(NameSearch,name) ;
	char line[200];
	FILE *file;
	char *path = "src/DocGia.txt";
	file = fopen(path, "r");
	    if (file == NULL) {
	        printf("cannot open file.\n");

	   }
	   while (fgets(line, 200, file)) {

	            if (strstr(line, NameSearch) != NULL) {
	                printf("%s",line);

	            }
	        }
	    fclose(file);
}
