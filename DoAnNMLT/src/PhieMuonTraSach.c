/*
 * PhieMuonTraSach.c
 *
 *  Created on: Apr 18, 2024
 *      Author: PCPV
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "PhieuMuonTraSach.h"

void ThemPhieuMuonTra(int MaDocGiaMuon[100],char NgayMuon[100][12],char NgayTra[100][12],char NgayTraThuc[100][12],char MaSachMuon[100][20])
{
	for (int i=0;i<100;i++) {
			// neu ma doc gia muon o vi tri i = 0
			// thi o do khong ton tai thong tin
			// chen thong tin vao vi tri do
			if(MaDocGiaMuon[i]==0) {

				printf("nhap ma doc gia: ");
				fflush(stdout);
				// them string voi khoang trang
				scanf("%d", &MaDocGiaMuon[i]);
				getchar();

				printf("nhap ngay muon: ");
				fflush(stdout);
				scanf("%[^\n]%*c", NgayMuon[i]);

				printf("nhap ngay tra: ");
				fflush(stdout);
				scanf("%[^\n]%*c", NgayTra[i]);

				printf("nhap ngay tra thuc: ");
				fflush(stdout);
				scanf("%[^\n]%*c", NgayTraThuc[i]);

				printf("nhap ma sach: ");
				fflush(stdout);
				scanf("%[^\n]%*c", MaSachMuon[i]);

				// chi thuc hien 1 lan nen cho break vong lap
				break;
			}
		}
}

void XemPhieu(int MaDocGiaMuon[100],char NgayMuon[100][12],char NgayTra[100][12],char NgayTraThuc[100][12],char MaSachMuon[100][20])
{
	printf("Ma doc gia");
	printf("%20s","Ngay muon");
	printf("%20s","Ngay tra");
	printf("%20s","Ngay tra thuc");
	printf("%20s\n","Ma sach");

	for (int i=0;i<100;i++) {
			// ma doc gia muon o index i = 0 thi bo qua
			if (MaDocGiaMuon[i]==0) {
				continue;
			}
			printf("%d",MaDocGiaMuon[i]);
			printf("%25s",NgayMuon[i]);
			printf("%25s",NgayTra[i]);
			printf("%25s",NgayTraThuc[i]);
			printf("%25s\n",MaSachMuon[i]);


		}
}
