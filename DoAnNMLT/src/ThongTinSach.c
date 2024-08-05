/*
 * ThongTinSach.c
 *
 *  Created on: Apr 13, 2024
 *      Author: PCPV
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ThongTinSach.h"

void XemThongTinSach(struct Sach ThongTinSach[100])
{
	FILE *file;
	char buffer[100];
	char *path = "src/Sach.txt";
	file = fopen(path,"r");
	if (file == NULL) {
		        printf("Khong the mo file.\n");
		    }
	while(fgets(buffer,sizeof(buffer),file)!=NULL) {
		printf("%s",buffer);
	}
	fclose(file);
}

void ThemSach(struct Sach ThongTinSach[100])
{
	FILE *file;
	char *path = "src/Sach.txt";
	file = fopen(path,"a");
	if (file == NULL) {
	        printf("Khong the mo file.\n");
	    }

	for (int i=0;i<100;i++) {
		// neu ma doc gia o vi tri i = 0
		// thi o do khong ton tai thong tin
		// chen thong tin vao vi tri do
		if(strcmp(ThongTinSach[i].MaSach,"")==0) {
			// them id tu dong
//			fprintf(file,"%d\n",i+1);
			printf("nhap ma sach: ");
			fflush(stdout);
			scanf(" %[^\n]",&ThongTinSach[i].MaSach);
			fprintf(file,"MaSach=%s ",ThongTinSach[i].MaSach);
			getchar();

			printf("nhap ten sach: ");
			fflush(stdout);
			// them string voi khoang trang
			scanf(" %[^\n]", &ThongTinSach[i].TenSach);
			fprintf(file,"TenSach=%s ",ThongTinSach[i].TenSach);
//			getchar();

			printf("nhap tac gia: ");
			fflush(stdout);
			scanf(" %[^\n]", &ThongTinSach[i].TacGia);
			fprintf(file,"TacGia=%s ",ThongTinSach[i].TacGia);

			printf("nhap nha xuat ban: ");
			fflush(stdout);
			scanf(" %[^\n]", &ThongTinSach[i].Nxb);
			fprintf(file,"Nxb=%s ",ThongTinSach[i].Nxb);

			printf("nhap nam xuat ban: ");
			fflush(stdout);
			scanf("%d",&ThongTinSach[i].NamXuatBan);
			fprintf(file,"NamXB=%d ",ThongTinSach[i].NamXuatBan);
			getchar();

			printf("nhap the loai: ");
			fflush(stdout);
			scanf(" %[^\n]", &ThongTinSach[i].TheLoai);
			fprintf(file,"TheLoai=%s ",ThongTinSach[i].TheLoai);

			printf("nhap gia: ");
			fflush(stdout);
			scanf("%d",&ThongTinSach[i].Gia);
			fprintf(file,"Gia=%d ",ThongTinSach[i].Gia);
			getchar();


			printf("nhap so luong: ");
			fflush(stdout);
			scanf("%d",&ThongTinSach[i].SoLuong);
			fprintf(file,"SoLuong=%d \n",ThongTinSach[i].SoLuong);
			getchar();


			// chi thuc hien 1 lan nen cho break vong lap
			fclose(file);
			printf("da ghi du lieu\n");
			break;
		}
	}
}

void SuaThongTinSach(struct Sach ThongTinSach[100])
{
//		char ISBN[20];
//		printf("nhap ma sach: ");
//		fflush(stdout);
//		scanf("%[^\n]%*c", ISBN);
//
//		for (int i=0; i<100;i++) {
//			// tim vi tri co ma sach = ISBN roi thay the
//			if (strcmp(MaSach[i],ISBN)==0) {
//				printf("nhap ten sach: ");
//				fflush(stdout);
//				scanf("%[^\n]%*c", TenSach[i]);
//
//				printf("nhap tac gia: ");
//				fflush(stdout);
//				scanf("%[^\n]%*c", TacGia[i]);
//
//				printf("nhap nxb: ");
//				fflush(stdout);
//				scanf("%[^\n]%*c", NhaXuatBan[i]);
//
//				printf("nhap nam xuat ban: ");
//				fflush(stdout);
//				scanf("%d", &NamXuatBan[i]);
//				getchar();
//
//				printf("nhap the loai: ");
//				fflush(stdout);
//				scanf("%[^\n]%*c", TheLoai[i]);
//
//				printf("nhap gia tien: ");
//				fflush(stdout);
//				scanf("%d", &GiaTien[i]);
//				getchar();
//
//				printf("nhap so quyen: ");
//				fflush(stdout);
//				scanf("%d", &SoQuyen[i]);
//
//
//				break;
//			}
//		}
}

void XoaSach(struct Sach ThongTinSach[100])
{
//		char ISBN[20];
//		printf("nhap ma sach: ");
//		fflush(stdout);
//		scanf("%[^\n]%*c", ISBN);
//
//		for (int i=0; i<100;i++) {
//				// tim vi tri co ma sach = ISBN roi xoa
//				if (strcmp(MaSach[i],ISBN)==0) {
//					// gan ma sach ve rong
//					strcpy(MaSach[i],"");
//					// gan thong tin ve chuoi rong
//					strcpy(TenSach[i],"");
//					strcpy(TacGia[i],"");
//					strcpy(NhaXuatBan[i],"");
//					NamXuatBan[i] = 0;
//					strcpy(TheLoai[i],"");
//					GiaTien[i] = 0;
//					SoQuyen[i] = 0;
//
//					break;
//				}
//			}
}

void TimTheoMaSach(struct Sach ThongTinSach[100])
{
	char MaSachTim[15];
	printf("nhap ma sach: ");
	fflush(stdout);
	scanf("%[^\n]", MaSachTim);
	char BookSearch[] = "MaSach=";
	strcat(BookSearch,MaSachTim) ;
	char line[200];
	FILE *file;
	char *path = "src/Sach.txt";
	file = fopen(path, "r");
	    if (file == NULL) {
	        printf("cannot open file.\n");

	   }
	   while (fgets(line, 200, file)) {

	            if (strstr(line, BookSearch) != NULL) {
	                printf("%s",line);

	            }
	        }
	    fclose(file);
}

void TimTheoTen(struct Sach ThongTinSach[100])
{
	char TenSachTim[15];
	printf("nhap ten sach: ");
	fflush(stdout);
	scanf("%[^\n]", TenSachTim);
	char BookSearch[] = "TenSach=";
	strcat(BookSearch,TenSachTim) ;
	char line[200];
	FILE *file;
	char *path = "src/Sach.txt";
	file = fopen(path, "r");
	    if (file == NULL) {
	        printf("cannot open file.\n");

	   }
	   while (fgets(line, 200, file)) {

	            if (strstr(line, BookSearch) != NULL) {
	                printf("%s",line);

	            }
	        }
	    fclose(file);
}
