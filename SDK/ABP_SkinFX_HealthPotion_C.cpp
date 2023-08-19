#include "ABP_SkinFX_HealthPotion_C.hpp"
#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
ABP_SkinFX_HealthPotion_C* ABP_SkinFX_HealthPotion_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_HealthPotion.BP_SkinFX_HealthPotion_C");
    return (ABP_SkinFX_HealthPotion_C*)res;
}
