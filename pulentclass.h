#ifndef PULENTCLASS_H
#define PULENTCLASS_H

class PulentClass{
private:
  int a;

public:
  PulentClass(int value);

  int getValue();

  /** increment value of instance in one.
   *
   * It's necessary to do it carefull because always a program
   * can have problem and things that not do that we like to do.
   *
   * @return value +1
   */
  int addOne();
};

#endif PULENTCLASS_H
