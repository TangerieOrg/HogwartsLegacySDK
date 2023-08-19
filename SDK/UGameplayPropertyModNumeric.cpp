#include "FModFloatSettings.hpp"
#include "FModIntSettings.hpp"
#include "UGameplayPropertyMod.hpp"
#include "UGameplayPropertyModNumeric.hpp"
UGameplayPropertyModNumeric* UGameplayPropertyModNumeric::StaticClass() {
    static auto res = find_uobject("Class /Script/GameplayMods.GameplayPropertyModNumeric");
    return (UGameplayPropertyModNumeric*)res;
}
