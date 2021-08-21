#include "PersonBeanProxy.h"
#include "NonOwnerProxy.h"
#include "OwnerProxy.h"
namespace ProtectionProxy
{

	std::unique_ptr<PersonBeanInterface> PersonBeanProxy::GetOwnerProxy(std::shared_ptr<PersonBeanInterface> person)
	{
		return std::make_unique<OwnerProxy>(person);
	}

	std::unique_ptr<PersonBeanInterface> PersonBeanProxy::GetNonOwnerProxy(std::shared_ptr<PersonBeanInterface> person)
	{
		return std::make_unique<NonOwnerProxy>(person);
	}

}