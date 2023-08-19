#include "ABP_SkinFX_LevelUpTalent_C.hpp"
#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
ABP_SkinFX_LevelUpTalent_C* ABP_SkinFX_LevelUpTalent_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_LevelUpTalent.BP_SkinFX_LevelUpTalent_C");
    return (ABP_SkinFX_LevelUpTalent_C*)res;
}
