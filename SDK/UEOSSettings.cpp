#include "FArtifactSettings.hpp"
#include "UEOSSettings.hpp"
#include "UObject.hpp"
UEOSSettings* UEOSSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemEOS.EOSSettings");
    return (UEOSSettings*)res;
}
