#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
#include "ABP_SkinFX_OutlineSteal_C.hpp"
ABP_SkinFX_OutlineSteal_C* ABP_SkinFX_OutlineSteal_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_OutlineSteal.BP_SkinFX_OutlineSteal_C");
    return (ABP_SkinFX_OutlineSteal_C*)res;
}
