#include "ABP_SkinFX_AncMagVanish_C.hpp"
#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
ABP_SkinFX_AncMagVanish_C* ABP_SkinFX_AncMagVanish_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_AncMagVanish.BP_SkinFX_AncMagVanish_C");
    return (ABP_SkinFX_AncMagVanish_C*)res;
}
