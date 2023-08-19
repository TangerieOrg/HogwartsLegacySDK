#include "ABP_SkinFX_Invisibility_C.hpp"
#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
ABP_SkinFX_Invisibility_C* ABP_SkinFX_Invisibility_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_Invisibility.BP_SkinFX_Invisibility_C");
    return (ABP_SkinFX_Invisibility_C*)res;
}
