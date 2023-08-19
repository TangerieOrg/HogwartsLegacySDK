#include "UCustomBlendDomainPhoenixPlatform.hpp"
#include "URenderSettingsCustomBlendDomainBase.hpp"
UCustomBlendDomainPhoenixPlatform* UCustomBlendDomainPhoenixPlatform::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CustomBlendDomainPhoenixPlatform");
    return (UCustomBlendDomainPhoenixPlatform*)res;
}
