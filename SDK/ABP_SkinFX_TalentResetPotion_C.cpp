#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
#include "ABP_SkinFX_TalentResetPotion_C.hpp"
ABP_SkinFX_TalentResetPotion_C* ABP_SkinFX_TalentResetPotion_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_TalentResetPotion.BP_SkinFX_TalentResetPotion_C");
    return (ABP_SkinFX_TalentResetPotion_C*)res;
}
