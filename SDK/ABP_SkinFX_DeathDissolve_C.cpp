#include "ABP_SkinFX_DeathDissolve_C.hpp"
#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
ABP_SkinFX_DeathDissolve_C* ABP_SkinFX_DeathDissolve_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_DeathDissolve.BP_SkinFX_DeathDissolve_C");
    return (ABP_SkinFX_DeathDissolve_C*)res;
}
