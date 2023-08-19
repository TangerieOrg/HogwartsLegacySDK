#include "UTimeSource.hpp"
#include "UTimeSourceVolume.hpp"
UTimeSourceVolume* UTimeSourceVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.TimeSourceVolume");
    return (UTimeSourceVolume*)res;
}
