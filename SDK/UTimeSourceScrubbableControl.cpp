#include "UTimeSourceScrubbableControl.hpp"
#include "UTimeSourceScrubbableControlBase.hpp"
UTimeSourceScrubbableControl* UTimeSourceScrubbableControl::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.TimeSourceScrubbableControl");
    return (UTimeSourceScrubbableControl*)res;
}
