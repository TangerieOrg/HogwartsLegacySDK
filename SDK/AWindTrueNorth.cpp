#include "AInfo.hpp"
#include "AWindTrueNorth.hpp"
#include "UWindTrueNorthComponent.hpp"
AWindTrueNorth* AWindTrueNorth::StaticClass() {
    static auto res = find_uobject("Class /Script/Wind.WindTrueNorth");
    return (AWindTrueNorth*)res;
}
