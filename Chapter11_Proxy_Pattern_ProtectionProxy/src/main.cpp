#include <iostream>
#include "TestClasses/TestPersonBeanImpl.h"

int main()
{
	std::cout << "Head first design patterns: Proxy pattern.\n";
	ProtectionProxy::TestPersonBeanIMpl test;
	test.Run();
}