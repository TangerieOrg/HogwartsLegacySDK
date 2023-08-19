#include "UInterface.hpp"
#include "USeasonOverrideInterface.hpp"
USeasonOverrideInterface* USeasonOverrideInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.SeasonOverrideInterface");
    return (USeasonOverrideInterface*)res;
}
