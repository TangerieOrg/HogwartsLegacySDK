#include "USkyStateOverride.hpp"
#include "USkyStateOverrideHideMoon.hpp"
USkyStateOverrideHideMoon* USkyStateOverrideHideMoon::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.SkyStateOverrideHideMoon");
    return (USkyStateOverrideHideMoon*)res;
}
