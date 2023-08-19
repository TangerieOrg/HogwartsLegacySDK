#include "UGlobalLightingBlendable.hpp"
#include "UGlobalLightingBlendableModsBase.hpp"
UGlobalLightingBlendableModsBase* UGlobalLightingBlendableModsBase::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightingBlendableModsBase");
    return (UGlobalLightingBlendableModsBase*)res;
}
