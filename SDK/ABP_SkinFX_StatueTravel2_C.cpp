#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
#include "ABP_SkinFX_StatueTravel2_C.hpp"
ABP_SkinFX_StatueTravel2_C* ABP_SkinFX_StatueTravel2_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_StatueTravel2.BP_SkinFX_StatueTravel2_C");
    return (ABP_SkinFX_StatueTravel2_C*)res;
}
