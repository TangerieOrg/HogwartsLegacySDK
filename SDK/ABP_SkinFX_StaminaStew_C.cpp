#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
#include "ABP_SkinFX_StaminaStew_C.hpp"
ABP_SkinFX_StaminaStew_C* ABP_SkinFX_StaminaStew_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_StaminaStew.BP_SkinFX_StaminaStew_C");
    return (ABP_SkinFX_StaminaStew_C*)res;
}
