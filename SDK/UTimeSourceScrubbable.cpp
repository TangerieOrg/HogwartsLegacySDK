#include "FDateInput.hpp"
#include "UClass.hpp"
#include "UTimeSourceScrubbable.hpp"
#include "UTimeSourceScrubbableControlBase.hpp"
#include "UTimeSourceVolume.hpp"
UTimeSourceScrubbable* UTimeSourceScrubbable::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.TimeSourceScrubbable");
    return (UTimeSourceScrubbable*)res;
}
