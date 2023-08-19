#include "UBonySkeletonComponent.hpp"
#include "UVFX_BP_BonySkeleton_Base_C.hpp"
UVFX_BP_BonySkeleton_Base_C* UVFX_BP_BonySkeleton_Base_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/Blueprints/VFX_BP_BonySkeleton_Base.VFX_BP_BonySkeleton_Base_C");
    return (UVFX_BP_BonySkeleton_Base_C*)res;
}
