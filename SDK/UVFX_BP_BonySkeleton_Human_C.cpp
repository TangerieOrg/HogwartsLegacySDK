#include "UVFX_BP_BonySkeleton_Base_C.hpp"
#include "UVFX_BP_BonySkeleton_Human_C.hpp"
UVFX_BP_BonySkeleton_Human_C* UVFX_BP_BonySkeleton_Human_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/Blueprints/VFX_BP_BonySkeleton_Human.VFX_BP_BonySkeleton_Human_C");
    return (UVFX_BP_BonySkeleton_Human_C*)res;
}
