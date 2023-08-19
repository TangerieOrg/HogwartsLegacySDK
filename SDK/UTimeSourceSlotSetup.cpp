#include "FDateInput.hpp"
#include "FEphemerisDayInfo.hpp"
#include "FTimeSourceSlotSetupTime.hpp"
#include "FTimeSourceSlotValidTime.hpp"
#include "UDataAsset.hpp"
#include "UTimeSourceSlotSetup.hpp"
UTimeSourceSlotSetup* UTimeSourceSlotSetup::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.TimeSourceSlotSetup");
    return (UTimeSourceSlotSetup*)res;
}
