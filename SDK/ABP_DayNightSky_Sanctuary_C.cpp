#include "ABP_DayNightSky_Sanctuary_C.hpp"
#include "ADayNightSky.hpp"
ABP_DayNightSky_Sanctuary_C* ABP_DayNightSky_Sanctuary_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Sanctuary/Blueprints/Lighting/BP_DayNightSky_Sanctuary.BP_DayNightSky_Sanctuary_C");
    return (ABP_DayNightSky_Sanctuary_C*)res;
}
