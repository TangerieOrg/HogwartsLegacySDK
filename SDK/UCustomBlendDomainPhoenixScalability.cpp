#include "UCustomBlendDomainPhoenixScalability.hpp"
#include "URenderSettingsCustomBlendDomainBase.hpp"
UCustomBlendDomainPhoenixScalability* UCustomBlendDomainPhoenixScalability::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CustomBlendDomainPhoenixScalability");
    return (UCustomBlendDomainPhoenixScalability*)res;
}
