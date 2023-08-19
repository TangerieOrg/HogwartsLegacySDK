#include "ABP_SkinFX_AncMagSpawn_C.hpp"
#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
ABP_SkinFX_AncMagSpawn_C* ABP_SkinFX_AncMagSpawn_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_AncMagSpawn.BP_SkinFX_AncMagSpawn_C");
    return (ABP_SkinFX_AncMagSpawn_C*)res;
}
