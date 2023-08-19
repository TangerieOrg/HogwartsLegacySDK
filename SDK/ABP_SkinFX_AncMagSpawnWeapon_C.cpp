#include "ABP_SkinFX_AncMagSpawnWeapon_C.hpp"
#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
ABP_SkinFX_AncMagSpawnWeapon_C* ABP_SkinFX_AncMagSpawnWeapon_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_AncMagSpawnWeapon.BP_SkinFX_AncMagSpawnWeapon_C");
    return (ABP_SkinFX_AncMagSpawnWeapon_C*)res;
}
