#include "ABP_SkinFX_FlooTravel_C.hpp"
#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
ABP_SkinFX_FlooTravel_C* ABP_SkinFX_FlooTravel_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_FlooTravel.BP_SkinFX_FlooTravel_C");
    return (ABP_SkinFX_FlooTravel_C*)res;
}
