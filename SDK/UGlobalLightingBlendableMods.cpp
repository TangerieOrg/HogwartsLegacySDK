#include "UGlobalLightRigMod.hpp"
#include "UGlobalLightingBlendableMods.hpp"
#include "UGlobalLightingBlendableModsBase.hpp"
UGlobalLightingBlendableMods* UGlobalLightingBlendableMods::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightingBlendableMods");
    return (UGlobalLightingBlendableMods*)res;
}
