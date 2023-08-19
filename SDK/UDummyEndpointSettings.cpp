#include "UAudioEndpointSettingsBase.hpp"
#include "UDummyEndpointSettings.hpp"
UDummyEndpointSettings* UDummyEndpointSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/AudioExtensions.DummyEndpointSettings");
    return (UDummyEndpointSettings*)res;
}
