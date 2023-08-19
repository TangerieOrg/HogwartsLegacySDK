#include "ABP_SkinFX_Glow_C.hpp"
#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
ABP_SkinFX_Glow_C* ABP_SkinFX_Glow_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_Glow.BP_SkinFX_Glow_C");
    return (ABP_SkinFX_Glow_C*)res;
}
