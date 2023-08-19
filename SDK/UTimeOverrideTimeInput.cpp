#include "ETimeOverrideType.hpp"
#include "FTimeInput.hpp"
#include "UTimeOverrideTimeInput.hpp"
#include "UTimeOverrideTimeOnly.hpp"
UTimeOverrideTimeInput* UTimeOverrideTimeInput::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.TimeOverrideTimeInput");
    return (UTimeOverrideTimeInput*)res;
}
