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

  /** increment value of instance in two.
   *
   * It isn't necessary to be carrefull in this method if we was
   * be carrefull in addOne method.
   *
   * @return value +2
   */
  int addTwo();
};

#endif PULENTCLASS_H
