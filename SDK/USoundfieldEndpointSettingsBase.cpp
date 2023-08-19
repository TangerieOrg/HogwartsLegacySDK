#include "UObject.hpp"
#include "USoundfieldEndpointSettingsBase.hpp"
USoundfieldEndpointSettingsBase* USoundfieldEndpointSettingsBase::StaticClass() {
    static auto res = find_uobject("Class /Script/AudioExtensions.SoundfieldEndpointSettingsBase");
    return (USoundfieldEndpointSettingsBase*)res;
}
