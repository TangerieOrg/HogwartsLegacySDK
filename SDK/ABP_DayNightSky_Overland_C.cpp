#include "ABP_DayNightSky_Overland_C.hpp"
#include "ADayNightSky.hpp"
ABP_DayNightSky_Overland_C* ABP_DayNightSky_Overland_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/DayNightSky/Overland/BP_DayNightSky_Overland.BP_DayNightSky_Overland_C");
    return (ABP_DayNightSky_Overland_C*)res;
}
