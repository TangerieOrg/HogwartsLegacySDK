#include "ARenderSettingsViewpointVolumeBase.hpp"
#include "AVolume.hpp"
ARenderSettingsViewpointVolumeBase* ARenderSettingsViewpointVolumeBase::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsViewpointVolumeBase");
    return (ARenderSettingsViewpointVolumeBase*)res;
}
