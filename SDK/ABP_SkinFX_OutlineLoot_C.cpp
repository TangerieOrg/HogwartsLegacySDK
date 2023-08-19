#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
#include "ABP_SkinFX_OutlineLoot_C.hpp"
ABP_SkinFX_OutlineLoot_C* ABP_SkinFX_OutlineLoot_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_OutlineLoot.BP_SkinFX_OutlineLoot_C");
    return (ABP_SkinFX_OutlineLoot_C*)res;
}
