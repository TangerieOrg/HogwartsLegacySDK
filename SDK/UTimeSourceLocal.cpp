#include "FDateTime.hpp"
#include "UTimeSourceLocal.hpp"
#include "UTimeSourceVolume.hpp"
UTimeSourceLocal* UTimeSourceLocal::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.TimeSourceLocal");
    return (UTimeSourceLocal*)res;
}
