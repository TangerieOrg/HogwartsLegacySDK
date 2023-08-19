#include "ABP_SkinFX_DeathExplode_C.hpp"
#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
ABP_SkinFX_DeathExplode_C* ABP_SkinFX_DeathExplode_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_DeathExplode.BP_SkinFX_DeathExplode_C");
    return (ABP_SkinFX_DeathExplode_C*)res;
}
