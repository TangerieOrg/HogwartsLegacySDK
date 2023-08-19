#include "EDateTimeDayOfWeek.hpp"
#include "FDateTime.hpp"
#include "FTimeSourceSlotSetupName.hpp"
#include "UFunction.hpp"
#include "UTimeSourceLocal.hpp"
#include "UTimeSourceSlot.hpp"
#include "UTimeSourceSlotSetup.hpp"
UTimeSourceSlot* UTimeSourceSlot::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.TimeSourceSlot");
    return (UTimeSourceSlot*)res;
}
void UTimeSourceSlot::EditorForceUpdate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.TimeSourceSlot.EditorForceUpdate"));
    struct Params_EditorForceUpdate {
    }; // Size: 0x0
    Params_EditorForceUpdate params{};
    ProcessEvent(func, &params);
}
