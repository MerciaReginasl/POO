#ifndef INTEGER_SET_H
#define INTEGER_SET_H 

class IntegerSet 
{
  friend IntegerSet unionOfSets(const IntegerSet &, const IntegerSet &);
  friend IntegerSet intersectionOfSets(const IntegerSet &, const IntegerSet &);
public:
  IntegerSet();
  IntegerSet(int *, int );

  void insertElement(int );
  void deleteElement(int );

  void print() const;

private:
  int nums[100];
  void setZeros();
};

#endif
