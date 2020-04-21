#ifndef TICKETMACHINE_H_
#define TICKETMACHINE_H_

// global variable
extern int global;

// function prototypes
void test();

// struct declaration
typedef struct
{

} Test;

// class declaration
class TicketMachine
{
private:
  const int PRICE;
  int balance;
  int total;

public:
  TicketMachine(/* args */);
  virtual ~TicketMachine();
  void showPrompt();
  void insertMoney(int money);
  void showBalance();
  void printTicket();
  void showTotal();
};

#endif