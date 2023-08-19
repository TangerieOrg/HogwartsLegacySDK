#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
#include "ABP_SkinFX_StoneSpawn_C.hpp"
ABP_SkinFX_StoneSpawn_C* ABP_SkinFX_StoneSpawn_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_StoneSpawn.BP_SkinFX_StoneSpawn_C");
    return (ABP_SkinFX_StoneSpawn_C*)res;
}
