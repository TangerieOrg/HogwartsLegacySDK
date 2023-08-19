#include "FMoonPath.hpp"
#include "UDataAsset.hpp"
#include "UFixedIdealMoonPathData.hpp"
#include "UFunction.hpp"
UFixedIdealMoonPathData* UFixedIdealMoonPathData::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.FixedIdealMoonPathData");
    return (UFixedIdealMoonPathData*)res;
}
void UFixedIdealMoonPathData::ForceRecompute() {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.FixedIdealMoonPathData.ForceRecompute"));
    struct Params_ForceRecompute {
    }; // Size: 0x0
    Params_ForceRecompute params{};
    ProcessEvent(func, &params);
}
