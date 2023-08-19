#include "ARenderSettingsViewpointVolume.hpp"
#include "ARenderSettingsViewpointVolumeBase.hpp"
ARenderSettingsViewpointVolume* ARenderSettingsViewpointVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsViewpointVolume");
    return (ARenderSettingsViewpointVolume*)res;
}
