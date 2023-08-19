#include "UDayNightCustomBlendDomainDayNightComputeOnly.hpp"
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
UDayNightCustomBlendDomainDayNightComputeOnly* UDayNightCustomBlendDomainDayNightComputeOnly::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.DayNightCustomBlendDomainDayNightComputeOnly");
    return (UDayNightCustomBlendDomainDayNightComputeOnly*)res;
}
