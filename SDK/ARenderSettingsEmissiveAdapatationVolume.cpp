#include "ARenderSettingsEmissiveAdapatationVolume.hpp"
#include "ARenderSettingsEmissiveAdapatationVolumeBase.hpp"
#include "FRenderSettingsEmissiveAdaptation.hpp"
ARenderSettingsEmissiveAdapatationVolume* ARenderSettingsEmissiveAdapatationVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsEmissiveAdapatationVolume");
    return (ARenderSettingsEmissiveAdapatationVolume*)res;
}
