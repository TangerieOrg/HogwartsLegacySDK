#include "ABP_DayNightComputeOnly_Default_C.hpp"
#include "ADayNightMasterComputeOnly.hpp"
ABP_DayNightComputeOnly_Default_C* ABP_DayNightComputeOnly_Default_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /DayNight/BP_DayNightComputeOnly_Default.BP_DayNightComputeOnly_Default_C");
    return (ABP_DayNightComputeOnly_Default_C*)res;
}
