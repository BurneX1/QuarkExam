

#include <iostream>
#include <array>
#include "MainPresenter.cpp"
#include <string>
//#include <chrono>
#include <ctime>

using namespace std;

#pragma region Clothes
enum PantType
{
	pant_comun,
	chupin
};

enum ShirtCollar
{
	collar_comun,
	mao
};
enum ShirtSleeve
{
	corta,
	larga
};
//enum ClotheQuality
//{
//	Standard,
//	Premium
//};

class Clothes {

	static float priceModifier;

	float price;
public:
	//ClotheQuality quality;
	char name[40];
	Clothes(char nm[40]/*, ClotheQuality qual*/);
	


};
inline Clothes::Clothes(char nm[40]/*, ClotheQuality qual*/) {
	//quality = qual;
	strcpy_s(name, nm);
	price = 1;
	//priceModifier = 1;
	cout << nm;
};



class Pants : public Clothes {
	PantType type;
public:
	//Pants(ClotheQuality qual, PantType type);
};

//Pants::Pants(ClotheQuality qual, PantType panttype)
//{
//	type = panttype;
//};

class Shirts : public Clothes {

	ShirtSleeve sleeve;
	ShirtCollar collar;
public:
	//Shirts(ClotheQuality qual, ShitSleeve slv, ShitCollar cllr);
};

//Shirts::Shirts(ClotheQuality qual, ShitSleeve slv, ShitCollar cllr)
//{
//	collar = cllr;
//	sleeve = slv;
//};

#pragma endregion

#pragma region Shop

class Receip
{	
	time_t date;		
	int id;
	int sellerId;
	Clothes buyList[3];
	
	float purchasePice;
public:
	Receip(int selfId, int sllrId, Clothes clth[]);
};

inline Receip::Receip(int selfId, int sllrId, Clothes clth[])
{

	//cout << "The Length of the Array is : " << end(*clth) - begin(*clth); //length
	date = time(0);
	id = selfId;
	sellerId = sllrId;
	int count1 = 0;
	cout << "\n";
	cout << "The Length of the Array is : " << end(buyList) - begin(buyList); //length
	for (int i =0; i < 10;i++)
	{
		count1++;
		cout << i << " "<<count1;
		
	}
	cout << "\n";
	cout << "\n";
	//for()
	buyList = clth;
	int count2 = 0;
	cout << "The Length of the Array is : " << end(buyList) - begin(buyList); //length
	for (auto i : buyList)
	{
		count2++;
		cout << "\n";
		cout << "\n";
		cout << i << " " << buyList[count2]->name << count2;
		cout << "\n";
		cout << "\n";
	}
	for (int i = 0; i < 10; i++)
	{
		count2++;
		cout << "\n";
		cout << "\n";
		cout << i << " " << buyList[count2].name << count2;
		cout << "\n";
		cout << "\n";
	}
	cout << "\n";
	/*for (int i = 0; i < 10; i++)
	{
		if (buyList)
		{
			cout << " " << i/*buyList[i]->quality;
		}
		else
		{
			break;
		}
		
	}*/
	//*buyList = *clth;
	purchasePice = 1;


	int ac=0;
	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	cout << "The array is: ";
	for (auto i : arr)
	{
		cout << i << " ";
		ac++;
	}
	cout << "\nThe length of the given Array is: " << ac;

}

class Seller
{
	int id;
	string name;
	string lastName;
	Receip* sellingHist[1];

public:

	Seller(string name, string lstnm, int idntfier);
	//void RegisterRecipe(Receip rcp);



};

inline Seller::Seller(string nm, string lstnm, int idntfier)
{
	name = nm;
	lastName = lstnm;
	id = idntfier;
}

//void Seller::RegisterRecipe(Receip rcp)
//{
//	/*int actSize = sellingHist.size();
//	if (sellingHist.empty())
//	{
//
//		array <Receip, 1 > newList{};
//		cout<<sellingHist.size();
//		sellingHist[0] = rcp;
//	}
//	else
//	{
//		sellingHist[0] = rcp;
//	}*/
//
//}

class Shop
{
	string shopName;
	string address;
	Seller* workrs[1];
	Clothes* stock[1];



};
#pragma endregion







