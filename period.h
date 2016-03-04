#ifndef _PERIOD_H_
#define _PERIOD_H_

#include <string>
using namespace std;

class Period {
  public:
  	enum GeologicEra { NEOGENE = 23, PALEOGENE = 65, CRETACEOUS = 136, JURASSIC = 192,
  		   TRIASSIC = 225, PERMIAN = 280, CARBONIFEROUS = 345, DEVONIAN = 395,
  		   SILURIAN = 435, ORDOVICIAN = 500, CAMBRIAN = 570, PRECAMBRIAN = 4500 };

  	Period();
  	Period(GeologicEra);
  	std::string toString();
  	int toInt();
  	float getStartingDate();
  	void increment();


  private:
  	GeologicEra era;
  	GeologicEra eras[12] = { NEOGENE, PALEOGENE, CRETACEOUS, JURASSIC,
  		   TRIASSIC, PERMIAN, CARBONIFEROUS, DEVONIAN,
  		   SILURIAN, ORDOVICIAN, CAMBRIAN, PRECAMBRIAN };

};

#endif
