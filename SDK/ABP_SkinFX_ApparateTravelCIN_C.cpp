#include "ABP_SkinFX_ApparateTravelCIN_C.hpp"
#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
ABP_SkinFX_ApparateTravelCIN_C* ABP_SkinFX_ApparateTravelCIN_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_ApparateTravelCIN.BP_SkinFX_ApparateTravelCIN_C");
    return (ABP_SkinFX_ApparateTravelCIN_C*)res;
}
