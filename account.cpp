#include "account.h"
#include "play.h"
struct player1
{
	int game_year = 2000;
	int game_month = 1;
	int game_day = 1;
	char airline_name[10001];
	unsigned long long money = 100000000;
	char head_quarter[51];
	bool if_base1 = false;
	bool if_base2 = false;
	bool if_base3 = false;
	bool if_base4 = false;
	bool if_base5 = false;
	char base1[5];
	char base2[5];
	char base3[5];
	char base4[5];
	char base5[5];
	int lsd_A220 = 0;
	int	lsd_A300 = 0;
	int	lsd_A310 = 0;
	int lsd_A320 = 0;
	int	lsd_A330 = 0;
	int lsd_A340 = 0;
	int	lsd_A350 = 0;
	int	lsd_A380 = 0;
	int lsd_BAEBAC_AVROJET = 0;
	int lsd_BAEBAC_JETSTREAM = 0;
	int lsd_B707_120 = 0;
	int lsd_B707_320 = 0;
	int lsd_B727_100 = 0;
	int lsd_B727_200 = 0;
	int lsd_B727_200_Adv = 0;
	int lsd_B737_100 = 0;
	int lsd_B737_200 = 0;
	int lsd_B737_300 = 0;
	int lsd_B737_400 = 0;
	int lsd_B737_500 = 0;
	int lsd_B737_600 = 0;
	int lsd_B737_700 = 0;
	int lsd_B737_800 = 0;
	int lsd_B737_900 = 0;
	int lsd_B737_900ER = 0;
	int lsd_B737_MAX8 = 0;
	int lsd_B737_MAX9 = 0;
	int lsd_B747_100 = 0;
	int lsd_B747_200 = 0;
	int lsd_B747_SP = 0;
	int lsd_B747_300 = 0;
	int lsd_B747_400 = 0;
	int lsd_B747_8I = 0;
	int lsd_B747_8F = 0;
	int lsd_B757_200 = 0;
	int	lsd_B757_300 = 0;
	int lsd_B767 = 0;
	int lsd_B777_200 = 0;
	int lsd_B777_200ER = 0;
	int lsd_B777_200LR = 0;
	int lsd_B777_300 = 0;
	int lsd_B777_300ER = 0;
	int	lsd_B777_X = 0;
	int lsd_B787_8 = 0;
	int lsd_B787_9 = 0;
	int lsd_B787_10 = 0;
	int lsd_DC_9 = 0;
	int lsd_DC_10 = 0;
	int lsd_MD_11 = 0;
	int lsd_MD_80 = 0;
	int lsd_MD_90 = 0;
	int own_A220 = 0;
	int	own_A300 = 0;
	int	own_A310 = 0;
	int own_A320 = 0;
	int	own_A330 = 0;
	int own_A340 = 0;
	int	own_A350 = 0;
	int	own_A380 = 0;
	int own_BAEBAC_AVROJET = 0;
	int own_BAEBAC_JETSTREAM = 0;
	int own_B707_120 = 0;
	int own_B707_320 = 0;
	int own_B727_100 = 0;
	int own_B727_200 = 0;
	int own_B727_200_Adv = 0;
	int own_B737_100 = 0;
	int own_B737_200 = 0;
	int own_B737_300 = 0;
	int own_B737_400 = 0;
	int own_B737_500 = 0;
	int own_B737_600 = 0;
	int own_B737_700 = 0;
	int own_B737_800 = 0;
	int own_B737_900 = 0;
	int own_B737_900ER = 0;
	int own_B737_MAX8 = 0;
	int own_B737_MAX9 = 0;
	int own_B747_100 = 0;
	int own_B747_200 = 0;
	int own_B747_SP = 0;
	int own_B747_300 = 0;
	int own_B747_400 = 0;
	int own_B747_8I = 0;
	int own_B747_8F = 0;
	int own_B757_200 = 0;
	int	own_B757_300 = 0;
	int own_B767 = 0;
	int own_B777_200 = 0;
	int own_B777_200ER = 0;
	int own_B777_200LR = 0;
	int own_B777_300 = 0;
	int own_B777_300ER = 0;
	int	own_B777_X = 0;
	int own_B787_8 = 0;
	int own_B787_9 = 0;
	int own_B787_10 = 0;
	int own_DC_9 = 0;
	int own_DC_10 = 0;
	int own_MD_11 = 0;
	int own_MD_80 = 0;
	int own_MD_90 = 0;
	int airline_number = 0;
	struct airline
	{
		char start[5];
		int start_number;
		char end[5];
		int end_number;
		char aircraft_name[101];
		int aircraft_number;
		int price_eco;
		int price_bus;
		int price_fir;
	}airline[10001];
	struct staff
	{
		int pilot = 0;
		int crew = 0;
		int worker = 0;
		int manager = 0;
	}staff;
}user1;
int load_game()
{
	ifstream fin("Airwaysim_Save.txt");
	if (!fin.is_open())
	{
		return 0;
	}
	else
	{
		fin >> user1.game_year;
		fin >> user1.game_month;
		fin >> user1.game_day;
		fin >> user1.airline_name;
		fin >> user1.money;
		fin >> user1.head_quarter;
		fin >> user1.if_base1;
		if (user1.if_base1) fin >> user1.base1;
		fin >> user1.if_base2;
		if (user1.if_base2) fin >> user1.base2;
		fin >> user1.if_base3;
		if (user1.if_base3) fin >> user1.base3;
		fin >> user1.if_base4;
		if (user1.if_base4) fin >> user1.base4;
		fin >> user1.if_base5;
		if (user1.if_base5) fin >> user1.base5;
		fin >> user1.lsd_A220;
		fin >> user1.lsd_A300;
		fin >> user1.lsd_A310;
		fin >> user1.lsd_A320;
		fin >> user1.lsd_A330;
		fin >> user1.lsd_A340;
		fin >> user1.lsd_A350;
		fin >> user1.lsd_A380;
		fin >> user1.lsd_BAEBAC_AVROJET;
		fin >> user1.lsd_BAEBAC_JETSTREAM;
		fin >> user1.lsd_B707_120;
		fin >> user1.lsd_B707_320;
		fin >> user1.lsd_B727_100;
		fin >> user1.lsd_B727_200;
		fin >> user1.lsd_B727_200_Adv;
		fin >> user1.lsd_B737_100;
		fin >> user1.lsd_B737_200;
		fin >> user1.lsd_B737_300;
		fin >> user1.lsd_B737_400;
		fin >> user1.lsd_B737_500;
		fin >> user1.lsd_B737_600;
		fin >> user1.lsd_B737_700;
		fin >> user1.lsd_B737_800;
		fin >> user1.lsd_B737_900;
		fin >> user1.lsd_B737_900ER;
		fin >> user1.lsd_B737_MAX8;
		fin >> user1.lsd_B737_MAX9;
		fin >> user1.lsd_B747_100;
		fin >> user1.lsd_B747_200;
		fin >> user1.lsd_B747_SP;
		fin >> user1.lsd_B747_300;
		fin >> user1.lsd_B747_400;
		fin >> user1.lsd_B747_8I;
		fin >> user1.lsd_B747_8F;
		fin >> user1.lsd_B757_200;
		fin >> user1.lsd_B757_300;
		fin >> user1.lsd_B767;
		fin >> user1.lsd_B777_200;
		fin >> user1.lsd_B777_200ER;
		fin >> user1.lsd_B777_200LR;
		fin >> user1.lsd_B777_300;
		fin >> user1.lsd_B777_300ER;
		fin >> user1.lsd_B777_X;
		fin >> user1.lsd_B787_8;
		fin >> user1.lsd_B787_9;
		fin >> user1.lsd_B787_10;
		fin >> user1.lsd_DC_9;
		fin >> user1.lsd_DC_10;
		fin >> user1.lsd_MD_11;
		fin >> user1.lsd_MD_80;
		fin >> user1.lsd_MD_90;
		fin >> user1.lsd_A220;
		fin >> user1.lsd_A300;
		fin >> user1.lsd_A310;
		fin >> user1.lsd_A320;
		fin >> user1.lsd_A330;
		fin >> user1.lsd_A340;
		fin >> user1.lsd_A350;
		fin >> user1.lsd_A380;
		fin >> user1.lsd_BAEBAC_AVROJET;
		fin >> user1.lsd_BAEBAC_JETSTREAM;
		fin >> user1.lsd_B707_120;
		fin >> user1.lsd_B707_320;
		fin >> user1.lsd_B727_100;
		fin >> user1.lsd_B727_200;
		fin >> user1.lsd_B727_200_Adv;
		fin >> user1.lsd_B737_100;
		fin >> user1.lsd_B737_200;
		fin >> user1.lsd_B737_300;
		fin >> user1.lsd_B737_400;
		fin >> user1.lsd_B737_500;
		fin >> user1.lsd_B737_600;
		fin >> user1.lsd_B737_700;
		fin >> user1.lsd_B737_800;
		fin >> user1.lsd_B737_900;
		fin >> user1.lsd_B737_900ER;
		fin >> user1.lsd_B737_MAX8;
		fin >> user1.lsd_B737_MAX9;
		fin >> user1.lsd_B747_100;
		fin >> user1.lsd_B747_200;
		fin >> user1.lsd_B747_SP;
		fin >> user1.lsd_B747_300;
		fin >> user1.lsd_B747_400;
		fin >> user1.lsd_B747_8I;
		fin >> user1.lsd_B747_8F;
		fin >> user1.lsd_B757_200;
		fin >> user1.lsd_B757_300;
		fin >> user1.lsd_B767;
		fin >> user1.lsd_B777_200;
		fin >> user1.lsd_B777_200ER;
		fin >> user1.lsd_B777_200LR;
		fin >> user1.lsd_B777_300;
		fin >> user1.lsd_B777_300ER;
		fin >> user1.lsd_B777_X;
		fin >> user1.lsd_B787_8;
		fin >> user1.lsd_B787_9;
		fin >> user1.lsd_B787_10;
		fin >> user1.lsd_DC_9;
		fin >> user1.lsd_DC_10;
		fin >> user1.lsd_MD_11;
		fin >> user1.lsd_MD_80;
		fin >> user1.lsd_MD_90;
		fin >> user1.own_A220;
		fin >> user1.own_A300;
		fin >> user1.own_A310;
		fin >> user1.own_A320;
		fin >> user1.own_A330;
		fin >> user1.own_A340;
		fin >> user1.own_A350;
		fin >> user1.own_A380;
		fin >> user1.own_BAEBAC_AVROJET;
		fin >> user1.own_BAEBAC_JETSTREAM;
		fin >> user1.own_B707_120;
		fin >> user1.own_B707_320;
		fin >> user1.own_B727_100;
		fin >> user1.own_B727_200;
		fin >> user1.own_B727_200_Adv;
		fin >> user1.own_B737_100;
		fin >> user1.own_B737_200;
		fin >> user1.own_B737_300;
		fin >> user1.own_B737_400;
		fin >> user1.own_B737_500;
		fin >> user1.own_B737_600;
		fin >> user1.own_B737_700;
		fin >> user1.own_B737_800;
		fin >> user1.own_B737_900;
		fin >> user1.own_B737_900ER;
		fin >> user1.own_B737_MAX8;
		fin >> user1.own_B737_MAX9;
		fin >> user1.own_B747_100;
		fin >> user1.own_B747_200;
		fin >> user1.own_B747_SP;
		fin >> user1.own_B747_300;
		fin >> user1.own_B747_400;
		fin >> user1.own_B747_8I;
		fin >> user1.own_B747_8F;
		fin >> user1.own_B757_200;
		fin >> user1.own_B757_300;
		fin >> user1.own_B767;
		fin >> user1.own_B777_200;
		fin >> user1.own_B777_200ER;
		fin >> user1.own_B777_200LR;
		fin >> user1.own_B777_300;
		fin >> user1.own_B777_300ER;
		fin >> user1.own_B777_X;
		fin >> user1.own_B787_8;
		fin >> user1.own_B787_9;
		fin >> user1.own_B787_10;
		fin >> user1.own_DC_9;
		fin >> user1.own_DC_10;
		fin >> user1.own_MD_11;
		fin >> user1.own_MD_80;
		fin >> user1.own_MD_90;
		fin >> user1.airline_number;
		for (int i = 0; i < user1.airline_number; ++i)
		{
			fin >> user1.airline->start;
			fin >> user1.airline->start_number;
			fin >> user1.airline->end;
			fin >> user1.airline->end_number;
			fin >> user1.airline->aircraft_name;
			fin >> user1.airline->aircraft_number;
			fin >> user1.airline->price_eco;
			fin >> user1.airline->price_bus;
			fin >> user1.airline->price_fir;
		}
		fin >> user1.staff.pilot;
		fin >> user1.staff.crew;
		fin >> user1.staff.worker;
		fin >> user1.staff.manager;
		fin.close();
		normal_play(user1.game_year, user1.game_month, user1.game_day, user1.money);
	}
}
void new_account()
{
	system("mode con cols=180 lines=51");
	system("color f0");
	for (int i = 0; i < 20; i++) cout << endl;
	for (int i = 0; i < 82; i++) cout << " ";
	cout << "Airline Creation";
	cout << endl << endl;
	for (int i = 0; i < 83; i++) cout << " ";
	cout << "Airline Name: (without space)";
	gets_s(user1.airline_name, 50);
	for (int i = 0; i < 83; i++) cout << " ";
	cout << "Airline Headquarter:";
	gets_s(user1.head_quarter, 50);
	ofstream fout("Airwaysim_Save.txt");
	fout << user1.game_year;
	fout << user1.game_month;
	fout << user1.game_day;
	fout << user1.airline_name << endl;
	fout << user1.money << endl;
	fout << user1.head_quarter << endl;
	fout << user1.if_base1 << endl;
	fout << user1.if_base2 << endl;
	fout << user1.if_base3 << endl;
	fout << user1.if_base4 << endl;
	fout << user1.if_base5 << endl;
	fout << user1.lsd_A220 << endl;
	fout << user1.lsd_A300 << endl;
	fout << user1.lsd_A310 << endl;
	fout << user1.lsd_A320 << endl;
	fout << user1.lsd_A330 << endl;
	fout << user1.lsd_A340 << endl;
	fout << user1.lsd_A350 << endl;
	fout << user1.lsd_A380 << endl;
	fout << user1.lsd_BAEBAC_AVROJET << endl;
	fout << user1.lsd_BAEBAC_JETSTREAM << endl;
	fout << user1.lsd_B707_120 << endl;
	fout << user1.lsd_B707_320 << endl;
	fout << user1.lsd_B727_100 << endl;
	fout << user1.lsd_B727_200 << endl;
	fout << user1.lsd_B727_200_Adv << endl;
	fout << user1.lsd_B737_100 << endl;
	fout << user1.lsd_B737_200 << endl;
	fout << user1.lsd_B737_300 << endl;
	fout << user1.lsd_B737_400 << endl;
	fout << user1.lsd_B737_500 << endl;
	fout << user1.lsd_B737_600 << endl;
	fout << user1.lsd_B737_700 << endl;
	fout << user1.lsd_B737_800 << endl;
	fout << user1.lsd_B737_900 << endl;
	fout << user1.lsd_B737_900ER << endl;
	fout << user1.lsd_B737_MAX8 << endl;
	fout << user1.lsd_B737_MAX9 << endl;
	fout << user1.lsd_B747_100 << endl;
	fout << user1.lsd_B747_200 << endl;
	fout << user1.lsd_B747_SP << endl;
	fout << user1.lsd_B747_300 << endl;
	fout << user1.lsd_B747_400 << endl;
	fout << user1.lsd_B747_8I << endl;
	fout << user1.lsd_B747_8F << endl;
	fout << user1.lsd_B757_200 << endl;
	fout << user1.lsd_B757_300 << endl;
	fout << user1.lsd_B767 << endl;
	fout << user1.lsd_B777_200 << endl;
	fout << user1.lsd_B777_200ER << endl;
	fout << user1.lsd_B777_200LR << endl;
	fout << user1.lsd_B777_300 << endl;
	fout << user1.lsd_B777_300ER << endl;
	fout << user1.lsd_B777_X << endl;
	fout << user1.lsd_B787_8 << endl;
	fout << user1.lsd_B787_9 << endl;
	fout << user1.lsd_B787_10 << endl;
	fout << user1.lsd_DC_9 << endl;
	fout << user1.lsd_DC_10 << endl;
	fout << user1.lsd_MD_11 << endl;
	fout << user1.lsd_MD_80 << endl;
	fout << user1.lsd_MD_90 << endl;
	fout << user1.own_A220 << endl;
	fout << user1.own_A300 << endl;
	fout << user1.own_A310 << endl;
	fout << user1.own_A320 << endl;
	fout << user1.own_A330 << endl;
	fout << user1.own_A340 << endl;
	fout << user1.own_A350 << endl;
	fout << user1.own_A380 << endl;
	fout << user1.own_BAEBAC_AVROJET << endl;
	fout << user1.own_BAEBAC_JETSTREAM << endl;
	fout << user1.own_B707_120 << endl;
	fout << user1.own_B707_320 << endl;
	fout << user1.own_B727_100 << endl;
	fout << user1.own_B727_200 << endl;
	fout << user1.own_B727_200_Adv << endl;
	fout << user1.own_B737_100 << endl;
	fout << user1.own_B737_200 << endl;
	fout << user1.own_B737_300 << endl;
	fout << user1.own_B737_400 << endl;
	fout << user1.own_B737_500 << endl;
	fout << user1.own_B737_600 << endl;
	fout << user1.own_B737_700 << endl;
	fout << user1.own_B737_800 << endl;
	fout << user1.own_B737_900 << endl;
	fout << user1.own_B737_900ER << endl;
	fout << user1.own_B737_MAX8 << endl;
	fout << user1.own_B737_MAX9 << endl;
	fout << user1.own_B747_100 << endl;
	fout << user1.own_B747_200 << endl;
	fout << user1.own_B747_SP << endl;
	fout << user1.own_B747_300 << endl;
	fout << user1.own_B747_400 << endl;
	fout << user1.own_B747_8I << endl;
	fout << user1.own_B747_8F << endl;
	fout << user1.own_B757_200 << endl;
	fout << user1.own_B757_300 << endl;
	fout << user1.own_B767 << endl;
	fout << user1.own_B777_200 << endl;
	fout << user1.own_B777_200ER << endl;
	fout << user1.own_B777_200LR << endl;
	fout << user1.own_B777_300 << endl;
	fout << user1.own_B777_300ER << endl;
	fout << user1.own_B777_X << endl;
	fout << user1.own_B787_8 << endl;
	fout << user1.own_B787_9 << endl;
	fout << user1.own_B787_10 << endl;
	fout << user1.own_DC_9 << endl;
	fout << user1.own_DC_10 << endl;
	fout << user1.own_MD_11 << endl;
	fout << user1.own_MD_80 << endl;
	fout << user1.own_MD_90 << endl;
	fout << user1.airline_number << endl;
	for (int i = 0; i < user1.airline_number; ++i)
	{
		fout << user1.airline->start << endl;
		fout << user1.airline->start_number << endl;
		fout << user1.airline->end << endl;
		fout << user1.airline->end_number << endl;
		fout << user1.airline->aircraft_name << endl;
		fout << user1.airline->aircraft_number << endl;
		fout << user1.airline->price_eco << endl;
		fout << user1.airline->price_bus << endl;
		fout << user1.airline->price_fir << endl;
	}
	fout << user1.staff.pilot << endl;
	fout << user1.staff.crew << endl;
	fout << user1.staff.worker << endl;
	fout << user1.staff.manager << endl;
	fout.close();
}
