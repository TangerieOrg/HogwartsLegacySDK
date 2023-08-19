#include "FPIELoginSettingsInternal.hpp"
#include "UDeveloperSettings.hpp"
#include "UOnlinePIESettings.hpp"
UOnlinePIESettings* UOnlinePIESettings::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemUtils.OnlinePIESettings");
    return (UOnlinePIESettings*)res;
}
