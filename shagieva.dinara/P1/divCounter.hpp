#ifndef DIV_COUNTER_HPP
#define DIV_COUNTER_HPP

namespace shagieva
{
  struct DivCounter
  {
  public:
    DivCounter();
    void operator()(int number);
    unsigned int operator()() const;

  private:
    int last_Number;
    unsigned int serialNumber;
    unsigned int count;
  };
}
#endif

