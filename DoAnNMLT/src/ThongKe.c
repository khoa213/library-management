/*
 * ThongKe.c
 *
 *  Created on: Apr 18, 2024
 *      Author: PCPV
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ThongKe.h"
#include "ThongTinDocGia.h"

//void SoLuongSach(struct Sach ThongTinSach[100]) {
//	int SoLuong = 0;
//	for (int i = 0; i < 100;i++) {
//		// neu so quyen khac 0 thi cong vao so luong
//		if (SoQuyen[i]!=0) {
//			SoLuong = SoLuong + SoQuyen[i];
//		}
//	}
//	printf("so luong sach : %d\n",SoLuong);
//}

void SoLuongDocGia(struct DocGia DanhSachDocGia[100]) {

	char IdSearch[] = "Id=";

	char line[200];
	FILE *file;
//	char *path = "D:\\eclipse-workspace\\DoAnNMLT\\DocGia.txt";
	char *path = "src/DocGia.txt";
	file = fopen(path, "r");
	    if (file == NULL) {
	        printf("cannot open file.\n");

	   }
	    int count = 0;
	   while (fgets(line, 200, file)) {

	            if (strstr(line, IdSearch) != NULL) {
	                count++;

	            }
	        }
	   printf("so luong doc gia: %d\n",count);
	    fclose(file);
}

void SoLuongDocGiaTheoGioiTinh(struct DocGia DanhSachDocGia[100]) {
	int SoLuongNam = 0;
	int SoLuongNu = 0;
	char GtNamSearch[] = "gioitinh=Nam";
	char GtNuSearch[] = "gioitinh=Nu";
		char line[200];
		FILE *file;
	//	char *path = "D:\\eclipse-workspace\\DoAnNMLT\\DocGia.txt";
		char *path = "src/DocGia.txt";
		file = fopen(path, "r");
		    if (file == NULL) {
		        printf("cannot open file.\n");

		   }
//		    int count = 0;
		   while (fgets(line, 200, file)) {

		            if (strstr(line, GtNamSearch) != NULL) {
		                SoLuongNam++;

		            }
		   		    if (strstr(line, GtNuSearch) != NULL) {
		                SoLuongNu++;

			        }
		        }

	printf("so luong doc gia nam : %d\n",SoLuongNam);
	printf("so luong doc gia nu : %d\n",SoLuongNu);
	fclose(file);
}

