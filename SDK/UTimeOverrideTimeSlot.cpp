#include "FTimeSourceSlotSetupName.hpp"
#include "UTimeOverrideTimeOnly.hpp"
#include "UTimeOverrideTimeSlot.hpp"
#include "UTimeSourceSlotSetup.hpp"
UTimeOverrideTimeSlot* UTimeOverrideTimeSlot::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.TimeOverrideTimeSlot");
    return (UTimeOverrideTimeSlot*)res;
}
