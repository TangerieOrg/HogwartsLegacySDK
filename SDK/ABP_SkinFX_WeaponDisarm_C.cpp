#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
#include "ABP_SkinFX_WeaponDisarm_C.hpp"
ABP_SkinFX_WeaponDisarm_C* ABP_SkinFX_WeaponDisarm_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_WeaponDisarm.BP_SkinFX_WeaponDisarm_C");
    return (ABP_SkinFX_WeaponDisarm_C*)res;
}
