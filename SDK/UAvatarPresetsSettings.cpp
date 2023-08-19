#include "EHoodPosition.hpp"
#include "FAvatarHouse.hpp"
#include "FFullbodyAvatarPreset.hpp"
#include "FGearBackSlotName.hpp"
#include "FGearFaceSlotName.hpp"
#include "FGearHandSlotName.hpp"
#include "FGearHeadSlotName.hpp"
#include "FGearNeckSlotName.hpp"
#include "FGearOutfitSlotName.hpp"
#include "FHumanCharacterId.hpp"
#include "UAvatarPresetsSettings.hpp"
#include "UObject.hpp"
UAvatarPresetsSettings* UAvatarPresetsSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AvatarPresetsSettings");
    return (UAvatarPresetsSettings*)res;
}
