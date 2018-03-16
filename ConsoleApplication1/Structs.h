enum amplua {vratar,forvard};

struct footbol
{
	char lname[50];
	amplua amplua;
	int age;
	int countGames;
	int countGols;
};

struct Student
{
	char lname[50];
	char group[50];
	int fizic;
	int inform;
	int histor;
};
void bestFor(struct footbol *team, int count);