#include "ABP_SkinFX_AncMagHotspot_C.hpp"
#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
ABP_SkinFX_AncMagHotspot_C* ABP_SkinFX_AncMagHotspot_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_AncMagHotspot.BP_SkinFX_AncMagHotspot_C");
    return (ABP_SkinFX_AncMagHotspot_C*)res;
}
