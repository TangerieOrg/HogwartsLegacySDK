#include "FEphemerisDayInfo.hpp"
#include "FFixedSunPosition.hpp"
#include "FTimespan.hpp"
#include "UFixedSunPositionsData.hpp"
#include "UObject.hpp"
UFixedSunPositionsData* UFixedSunPositionsData::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.FixedSunPositionsData");
    return (UFixedSunPositionsData*)res;
}
