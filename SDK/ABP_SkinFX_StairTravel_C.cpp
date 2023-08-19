#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
#include "ABP_SkinFX_StairTravel_C.hpp"
ABP_SkinFX_StairTravel_C* ABP_SkinFX_StairTravel_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_StairTravel.BP_SkinFX_StairTravel_C");
    return (ABP_SkinFX_StairTravel_C*)res;
}
