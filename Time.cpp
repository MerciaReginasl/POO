//Correção da Questão 7 

#include <iostream>
using std::cout;
using std::endl;

//biblioteca que permite alguns controles sobre a saÃ­da
#include <iomanip>
using std::setfill; 
using std::setw;

#include "Time.h"

#include <ctime>


Time::Time()
{
  time_t horario;
  time(&horario);

  struct tm *hora = localtime(&horario);

  setTime(hora->tm_hour,hora->tm_min, hora->tm_sec);

}

Time::Time(int hr, int min, int sec)
{
  setTime(hr, min, sec);  
  //qualquer modificaÃ§Ã£o posterior em setTime reflete no construtor
}

void Time::setTime(int h, int m, int s)
{
  setHour(h);
  setMinute(m);
  setSecond(s);  
}

void Time::setHour(int h)
{
  hour = (h >=0 && h < 24) ? h : 0;     //valida horas
}

//forma 2
inline void Time::setMinute(int m)
{
  minute = (m >= 0 && m < 60) ? m : 0;  //valida minutos
}

void Time::printUniversal()
{
  cout << setfill('0') << setw(2) << getHour() << ":" <<
  setw(2) << getMinute() << ":" << setw(2) << getSecond() << endl;
}

void Time::printStandard()
{
  cout << ( (getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12) << ":" << setfill('0') << setw(2) << getMinute() << ":" << setw(2) << getSecond() << (getHour() < 12 ? " AM" : " PM") << endl;
}
