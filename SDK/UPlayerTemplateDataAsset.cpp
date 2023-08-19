#include "FGearBackSlotName.hpp"
#include "FGearFaceSlotName.hpp"
#include "FGearHandSlotName.hpp"
#include "FGearHeadSlotName.hpp"
#include "FGearNeckSlotName.hpp"
#include "FGearOutfitSlotName.hpp"
#include "FItemInput.hpp"
#include "FLockChange.hpp"
#include "FSpellDiamondInput.hpp"
#include "UDataAsset.hpp"
#include "UPlayerTemplateDataAsset.hpp"
UPlayerTemplateDataAsset* UPlayerTemplateDataAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PlayerTemplateDataAsset");
    return (UPlayerTemplateDataAsset*)res;
}
