#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
#include "ABP_SkinFX_PepperUp_C.hpp"
ABP_SkinFX_PepperUp_C* ABP_SkinFX_PepperUp_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_PepperUp.BP_SkinFX_PepperUp_C");
    return (ABP_SkinFX_PepperUp_C*)res;
}
