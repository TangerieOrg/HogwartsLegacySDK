#include "UObject.hpp"
#include "USkyStateOverride.hpp"
USkyStateOverride* USkyStateOverride::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.SkyStateOverride");
    return (USkyStateOverride*)res;
}
