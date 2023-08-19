#include "EStreamlineSettingOverride.hpp"
#include "UObject.hpp"
#include "UStreamlineOverrideSettings.hpp"
UStreamlineOverrideSettings* UStreamlineOverrideSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/StreamlineRHI.StreamlineOverrideSettings");
    return (UStreamlineOverrideSettings*)res;
}
