#include "FFixedSunPositionInput.hpp"
#include "UDataAsset.hpp"
#include "UFixedSunPositions.hpp"
UFixedSunPositions* UFixedSunPositions::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.FixedSunPositions");
    return (UFixedSunPositions*)res;
}
