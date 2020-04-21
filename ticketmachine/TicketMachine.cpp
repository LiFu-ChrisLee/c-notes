#include "TicketMachine.h"

#include <iostream>
using namespace std;

TicketMachine::TicketMachine() : PRICE(0)
{
}

TicketMachine::~TicketMachine()
{
}

void TicketMachine::showPrompt()
{
  cout << "something" << endl;
}

void TicketMachine::printTicket()
{
  cout << "something" << endl;
}

void TicketMachine::showBalance()
{
  cout << balance << endl;
}

void TicketMachine::showTotal()
{
  cout << total << endl;
}

void TicketMachine::insertMoney(int money)
{
  balance += money;
}
