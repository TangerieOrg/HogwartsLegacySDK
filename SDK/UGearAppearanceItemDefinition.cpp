#include "EGearSlotIDEnum.hpp"
#include "UDataAsset.hpp"
#include "UGearAppearanceItemDefinition.hpp"
UGearAppearanceItemDefinition* UGearAppearanceItemDefinition::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.GearAppearanceItemDefinition");
    return (UGearAppearanceItemDefinition*)res;
}
