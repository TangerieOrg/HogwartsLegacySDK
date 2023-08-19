#include "ABP_SkinFX_ApparateTravel_C.hpp"
#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
ABP_SkinFX_ApparateTravel_C* ABP_SkinFX_ApparateTravel_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_ApparateTravel.BP_SkinFX_ApparateTravel_C");
    return (ABP_SkinFX_ApparateTravel_C*)res;
}
