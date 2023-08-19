#include "FFastTravelTestEntry.hpp"
#include "UFastTravelTestSettings.hpp"
#include "UObject.hpp"
UFastTravelTestSettings* UFastTravelTestSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FastTravelTestSettings");
    return (UFastTravelTestSettings*)res;
}
