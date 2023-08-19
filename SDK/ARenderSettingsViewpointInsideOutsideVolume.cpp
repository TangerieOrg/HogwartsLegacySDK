#include "ARenderSettingsViewpointInsideOutsideVolume.hpp"
#include "ARenderSettingsViewpointVolumeBase.hpp"
ARenderSettingsViewpointInsideOutsideVolume* ARenderSettingsViewpointInsideOutsideVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsViewpointInsideOutsideVolume");
    return (ARenderSettingsViewpointInsideOutsideVolume*)res;
}
