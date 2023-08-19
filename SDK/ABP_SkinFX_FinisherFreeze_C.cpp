#include "ABP_SkinFX_FinisherFreeze_C.hpp"
#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
ABP_SkinFX_FinisherFreeze_C* ABP_SkinFX_FinisherFreeze_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_FinisherFreeze.BP_SkinFX_FinisherFreeze_C");
    return (ABP_SkinFX_FinisherFreeze_C*)res;
}
