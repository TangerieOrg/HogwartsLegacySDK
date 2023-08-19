#include "ABP_SkinFX_FlooTravelTrans_C.hpp"
#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
ABP_SkinFX_FlooTravelTrans_C* ABP_SkinFX_FlooTravelTrans_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_FlooTravelTrans.BP_SkinFX_FlooTravelTrans_C");
    return (ABP_SkinFX_FlooTravelTrans_C*)res;
}
