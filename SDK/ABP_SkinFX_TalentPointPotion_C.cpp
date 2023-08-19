#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
#include "ABP_SkinFX_TalentPointPotion_C.hpp"
ABP_SkinFX_TalentPointPotion_C* ABP_SkinFX_TalentPointPotion_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_TalentPointPotion.BP_SkinFX_TalentPointPotion_C");
    return (ABP_SkinFX_TalentPointPotion_C*)res;
}
