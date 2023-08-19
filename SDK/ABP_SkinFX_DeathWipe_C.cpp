#include "ABP_SkinFX_DeathWipe_C.hpp"
#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
ABP_SkinFX_DeathWipe_C* ABP_SkinFX_DeathWipe_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_DeathWipe.BP_SkinFX_DeathWipe_C");
    return (ABP_SkinFX_DeathWipe_C*)res;
}
