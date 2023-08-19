#include "UUberExposureComponentConstDriver.hpp"
#include "UUberExposureComponentRenderSettingsCustomBlendDomain.hpp"
UUberExposureComponentRenderSettingsCustomBlendDomain* UUberExposureComponentRenderSettingsCustomBlendDomain::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.UberExposureComponentRenderSettingsCustomBlendDomain");
    return (UUberExposureComponentRenderSettingsCustomBlendDomain*)res;
}
