#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
#include "ABP_SkinFX_StatueTravel_C.hpp"
ABP_SkinFX_StatueTravel_C* ABP_SkinFX_StatueTravel_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_StatueTravel.BP_SkinFX_StatueTravel_C");
    return (ABP_SkinFX_StatueTravel_C*)res;
}
