#include "ABP_SkinFX_MaximaPotionUpgrade_C.hpp"
#include "ABP_SkinFX_MaximaPotion_C.hpp"
ABP_SkinFX_MaximaPotionUpgrade_C* ABP_SkinFX_MaximaPotionUpgrade_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_MaximaPotionUpgrade.BP_SkinFX_MaximaPotionUpgrade_C");
    return (ABP_SkinFX_MaximaPotionUpgrade_C*)res;
}
