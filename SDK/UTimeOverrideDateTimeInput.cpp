#include "FDateTimeInput.hpp"
#include "UTimeOverrideDateTime.hpp"
#include "UTimeOverrideDateTimeInput.hpp"
UTimeOverrideDateTimeInput* UTimeOverrideDateTimeInput::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.TimeOverrideDateTimeInput");
    return (UTimeOverrideDateTimeInput*)res;
}
