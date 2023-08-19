#include "ABP_SkinFX_Imperio_C.hpp"
#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
ABP_SkinFX_Imperio_C* ABP_SkinFX_Imperio_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_Imperio.BP_SkinFX_Imperio_C");
    return (ABP_SkinFX_Imperio_C*)res;
}
