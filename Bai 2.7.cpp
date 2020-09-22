/*
// Ma nguon chuong trinh "Chao nguoi dung"
// Tac gia: Vu Quoc Hoang, 11/2017
// Bai 2.7, Bi kip Lap trinh C - Quyen I
// Da kiem tra tren Dev-C++ 5.11 (GCC 4.9.2 32-bit Release), Windows XP SP3
*/

#include <stdio.h>
#include <ctype.h>

// VIQR
#define TRANG	'('
#define MU		'^'
#define RAU		'+'
#define SAC		'\''
#define HUYEN	'`'
#define HOI		'?'
#define NGA		'~'
#define NANG	'.'

int laDauMu(char c)
{
	if(c == MU || c == TRANG || c == RAU)
		return 1;
	return 0;
}

int laDauThanh(char c)
{
	if(c == SAC || c == HUYEN || c == HOI || c == NGA || c == NANG)
		return 1;
	return 0;
}

void xuatChu(char c, char mu, char thanh, int dong)
{
	c = toupper(c);
	
	if(dong == 1)
	{
		if(thanh == HOI)
			printf("  _  ");
		else
			printf("     ");
	}
	else if(dong == 2)
	{
		if(thanh == SAC)
			printf("    /");
		else if(thanh == HUYEN)
			printf("   \\ ");
		else if(thanh == HOI)
			printf(" / \xdd ");
		else if(thanh == NGA)
			printf(" __/ ");
		else
			printf("     ");
	}
	else if(dong == 3)
	{
		if(thanh == SAC)
			printf("   / ");
		else if(thanh == HUYEN)
			printf("    \\");
		else if(thanh == HOI)
			printf("   \xdd ");
		else if(thanh == NGA)
			printf("/    ");
		else
			printf("     ");
	}
	else if(dong == 4)
	{
		if(mu == MU)
			printf(" /\\  ");
		else if(mu == TRANG)
			printf("\\  / ");
		else if(mu == RAU)
			printf("   __");
		else
			printf("     ");
	}
	else if(dong == 5)
	{
		if(mu == MU)
			printf("/  \\ ");
		else if(mu == TRANG)
			printf(" \\/  ");
		else if(mu == RAU)
			printf("  / \xde");
		else
			printf("     ");
	}
	else if(dong == 6)
	{
		if(mu == RAU)
		{
			if(c == 'O')
				printf(" ___/");
			else
				printf("    /");
		}
		else if(c == 'O' || c == 'Q' || c == 'C' || c == 'G')
			printf(" ___ ");
		else
			printf("     ");
	}
	else if(dong <= 13)
	{
		if(c == 'A')
		{
			switch(dong)
			{
				case 7: printf("  /\\ "); break;
				case 8: printf(" /  \\"); break;
				case 9: printf("/   \xde"); break;
				case 10: printf("\xdd___\xde"); break;
				case 11: printf("\xdd   \xde"); break;
				case 12: printf("\xdd   \xde"); break;
				case 13: printf("\xdd   \xde"); break;
			}
		}
		else if(c == 'C')
		{
			switch(dong)
			{
				case 7: printf("/   \\"); break;
				case 8: printf("\xdd    "); break;
				case 9: printf("\xdd    "); break;
				case 10: printf("\xdd    "); break;
				case 11: printf("\xdd    "); break;
				case 12: printf("\xdd    "); break;
				case 13: printf("\\___/"); break;
			}
		}
		else if(c == 'G')
		{
			switch(dong)
			{
				case 7: printf("/   \\"); break;
				case 8: printf("\xdd    "); break;
				case 9: printf("\xdd    "); break;
				case 10: printf("\xdd ___"); break;
				case 11: printf("\xdd   \xde"); break;
				case 12: printf("\xdd   \xde"); break;
				case 13: printf("\\___/"); break;
			}
		}
		else if(c == 'H')
		{
			switch(dong)
			{
				case 7: printf("\xdd   \xde"); break;
				case 8: printf("\xdd   \xde"); break;
				case 9: printf("\xdd   \xde"); break;
				case 10: printf("\xdd___\xde"); break;
				case 11: printf("\xdd   \xde"); break;
				case 12: printf("\xdd   \xde"); break;
				case 13: printf("\xdd   \xde"); break;
			}
		}
		else if(c == 'M')
		{
			switch(dong)
			{
				case 7: printf("\\   /"); break;
				case 8: printf("\xdd\\_/\xde"); break;
				case 9: printf("\xdd   \xde"); break;
				case 10: printf("\xdd   \xde"); break;
				case 11: printf("\xdd   \xde"); break;
				case 12: printf("\xdd   \xde"); break;
				case 13: printf("\xdd   \xde"); break;
			}
		}
		else if(c == 'N')
		{
			switch(dong)
			{
				case 7: printf("\\   \xde"); break;
				case 8: printf("\xdd\\  \xde"); break;
				case 9: printf("\xdd \\ \xde"); break;
				case 10: printf("\xdd  \\\xde"); break;
				case 11: printf("\xdd   \xde"); break;
				case 12: printf("\xdd   \xde"); break;
				case 13: printf("\xdd   \xde"); break;
			}
		}
		else if(c == 'O')
		{
			switch(dong)
			{
				case 7: printf("/   \\"); break;
				case 8: printf("\xdd   \xde"); break;
				case 9: printf("\xdd   \xde"); break;
				case 10: printf("\xdd   \xde"); break;
				case 11: printf("\xdd   \xde"); break;
				case 12: printf("\xdd   \xde"); break;
				case 13: printf("\\___/"); break;
			}
		}
		else if(c == 'Q')
		{
			switch(dong)
			{
				case 7: printf("/   \\"); break;
				case 8: printf("\xdd   \xde"); break;
				case 9: printf("\xdd   \xde"); break;
				case 10: printf("\xdd   \xde"); break;
				case 11: printf("\xdd   \xde"); break;
				case 12: printf("\xdd  \\/"); break;
				case 13: printf("\\__/\\"); break;
			}
		}
		else if(c == 'V')
		{
			switch(dong)
			{
				case 7: printf("\xdd   \xde"); break;
				case 8: printf("\xdd   \xde"); break;
				case 9: printf("\xdd   \xde"); break;
				case 10: printf("\xdd   \xde"); break;
				case 11: printf("\xdd   /"); break;
				case 12: printf("\\  / "); break;
				case 13: printf(" \\/  "); break;
			}
		}
		else if(c == 'U')
		{
			switch(dong)
			{
				case 7: printf("\xdd   \xde"); break;
				case 8: printf("\xdd   \xde"); break;
				case 9: printf("\xdd   \xde"); break;
				case 10: printf("\xdd   \xde"); break;
				case 11: printf("\xdd   \xde"); break;
				case 12: printf("\xdd   \xde"); break;
				case 13: printf("\\___/"); break;
			}
		}
		else if(c == ' ')
			printf("     ");
		else
			printf("#####");
	}
	else if(dong == 14)
	{
		if(thanh == '.')
			printf("  _  ");
		else
			printf("     ");
	}
}

void xuatChuoi(const char chuoi[])
{
	for(int dong = 1; dong <= 14; dong++)
	{
		int i = 0;
		while(chuoi[i] != '\0' && chuoi[i] != '\n')
		{
			if(laDauThanh(chuoi[i + 1]))
			{

				xuatChu(chuoi[i], 0, chuoi[i + 1], dong);
				i += 2;
			}
			else if(laDauMu(chuoi[i + 1]))
			{
				if(laDauThanh(chuoi[i + 2]))
				{
					xuatChu(chuoi[i], chuoi[i + 1], chuoi[i + 2], dong);
					i += 3;
				}
				else
				{
					xuatChu(chuoi[i], chuoi[i + 1], 0, dong);
					i += 2;
				}
			}
			else
			{

				xuatChu(chuoi[i], 0, 0, dong);
				i++;
			}

			printf(" ");	// khoang cach chu: 1 SPACE
		}
		printf("\n");
	}
}

int main()
{
	char ten[100];

	printf("Ban ten gi? ");
	gets(ten); // Nhap chuoi theo VIQR, chang han VU~ QUO^'C HOA`NG
	
	xuatChuoi("CHA`O");
	xuatChuoi(ten);

	return 0;
}
