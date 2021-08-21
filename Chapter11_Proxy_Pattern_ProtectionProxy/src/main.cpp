#include <iostream>
#include "TestClasses/TestPersonBeanImpl.h"
#include "TestClasses/TestProxyBean.h"

int main()
{
	std::cout << "Head first design patterns: Proxy pattern.\n";
	ProtectionProxy::TestPersonBeanIMpl test;
	test.Run();

	ProtectionProxy::TestProxyBean testProxy;
	testProxy.Run();


}