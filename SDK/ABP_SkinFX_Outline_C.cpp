#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
#include "ABP_SkinFX_Outline_C.hpp"
ABP_SkinFX_Outline_C* ABP_SkinFX_Outline_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_Outline.BP_SkinFX_Outline_C");
    return (ABP_SkinFX_Outline_C*)res;
}
