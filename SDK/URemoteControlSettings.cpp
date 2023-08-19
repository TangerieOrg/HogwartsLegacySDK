#include "UDeveloperSettings.hpp"
#include "URemoteControlSettings.hpp"
URemoteControlSettings* URemoteControlSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/RemoteControlCommon.RemoteControlSettings");
    return (URemoteControlSettings*)res;
}
