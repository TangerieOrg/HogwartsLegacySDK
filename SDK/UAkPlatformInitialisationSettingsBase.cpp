#include "UAkPlatformInitialisationSettingsBase.hpp"
#include "UInterface.hpp"
UAkPlatformInitialisationSettingsBase* UAkPlatformInitialisationSettingsBase::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkPlatformInitialisationSettingsBase");
    return (UAkPlatformInitialisationSettingsBase*)res;
}
