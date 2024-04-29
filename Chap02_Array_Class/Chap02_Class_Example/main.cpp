#include <cstdio>
//#include "car.h"
//#include "sportscar.h"
//#include "rectangle.h"
#include "smarthome.h"
#include "music.h"

void main() {
	//car 클래스 사용
	/*car mycar(50, "K3", 4);
	car yourcar(100, "K5", 3);
	mycar.display();
	yourcar.display();
	mycar.whereAmI();
	yourcar.whereAmI();
	//sportscar 클래스 사용
	sportscar scar;
	scar.speedup();
	*/
	/*
	rectangle r(12, 20);
	double perimeter = r.getperimeter();
	std::cout << "rectangle 1:" << std::endl;
    std::cout << "area:" << r.getarea() << std::endl;
	std::cout << "perimeter" << perimeter << std::endl;
	std::cout << "is square?" << std::boolalpha << r.issquare() << std::endl;
	*/
	// smarthome class
	/*
	SmartHome myhome("박시훈", 23, 40, true);
	myhome.printStatus();
	*/

	//Music Streaming Service 
	MusicStreamingService myService("Spotify");
	myService.addMusic("VIBE", "Taeyang", "Album", 2023);
	myService.addMusic("Ditto", "NewJeans", "Album", 2023);
	myService.addMusic("Attention", "NewJeans", "Album", 2023);

	string music_title;
	cout << "Enter the Music Title : ";
	cin >> music_title;

	Music* result = myService.searchByTitle(music_title);
	if (result != NULL) {
		cout << "found: " << result->getTitle() << " by " << result->getArtist() << endl;

	}
	else {
		cout << "Not found" << endl;
	}

	string artist_name;
	cout << "Enter the Artist Name : ";
	cin >> artist_name;

	vector<Music>* > artistResult = myService.searchByArtist(artist_name);
	if (artistResult.size() > 0) {
		cout << "Found " << artistResult.size() << " songs by " << artist_name << " : " << endl;
		for (int i = 0; i < artistResult.size(); i++) {
			cout << artistResult[i]->getTitle() << endl;
		}
	}
	else {
		cout << "not found" << endl;
	}
}
