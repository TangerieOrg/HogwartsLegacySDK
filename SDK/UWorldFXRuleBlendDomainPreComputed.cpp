#include "FRenderSettingsPreComputedBlendDomainName.hpp"
#include "UWorldFXRuleBlendDomainBase.hpp"
#include "UWorldFXRuleBlendDomainPreComputed.hpp"
UWorldFXRuleBlendDomainPreComputed* UWorldFXRuleBlendDomainPreComputed::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleBlendDomainPreComputed");
    return (UWorldFXRuleBlendDomainPreComputed*)res;
}
