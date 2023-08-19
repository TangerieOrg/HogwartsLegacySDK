#include "UGlobalLightingBlendableBase.hpp"
#include "UObject.hpp"
UGlobalLightingBlendableBase* UGlobalLightingBlendableBase::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightingBlendableBase");
    return (UGlobalLightingBlendableBase*)res;
}
