//Correção Questão 7
//impede que mÃºltiplas inclusÃµes ocorram
#ifndef TIME_H
#define TIME_H

class Time 
{
public:
  Time();
  Time( int , int = 0 , int = 0); //construtor

  //funÃ§Ãµes set
  void setTime(int , int, int); //protÃ³tipo

  //forma 1
  inline void setHour( int );

  //forma 2 - ver arquivo cpp
  void setMinute( int );

  //forma 3
  void setSecond( int s )
  {
    second = (s >= 0 && s < 60) ? s : 0;
  }

  //funÃ§Ãµes get

  //forma 4
  inline int getHour() {return hour;}
  inline int getMinute() {return minute;}
  inline int getSecond() {return second;}

  void printUniversal();
  void printStandard();

private:
  int hour;
  int minute;
  int second;
};

#endif
