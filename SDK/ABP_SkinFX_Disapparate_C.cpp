#include "ABP_SkinFX_Apparate_C.hpp"
#include "ABP_SkinFX_Disapparate_C.hpp"
ABP_SkinFX_Disapparate_C* ABP_SkinFX_Disapparate_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_Disapparate.BP_SkinFX_Disapparate_C");
    return (ABP_SkinFX_Disapparate_C*)res;
}
