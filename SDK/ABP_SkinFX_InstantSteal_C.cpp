#include "ABP_SkinFX_InstantSteal_C.hpp"
#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
ABP_SkinFX_InstantSteal_C* ABP_SkinFX_InstantSteal_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_InstantSteal.BP_SkinFX_InstantSteal_C");
    return (ABP_SkinFX_InstantSteal_C*)res;
}
