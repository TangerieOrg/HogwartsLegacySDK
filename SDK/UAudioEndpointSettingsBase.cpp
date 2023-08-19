#include "UAudioEndpointSettingsBase.hpp"
#include "UObject.hpp"
UAudioEndpointSettingsBase* UAudioEndpointSettingsBase::StaticClass() {
    static auto res = find_uobject("Class /Script/AudioExtensions.AudioEndpointSettingsBase");
    return (UAudioEndpointSettingsBase*)res;
}
