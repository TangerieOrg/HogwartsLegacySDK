#include "ARenderSettingsEmissiveAdapatationExtrasVolume.hpp"
#include "ARenderSettingsEmissiveAdapatationVolumeBase.hpp"
#include "FExposureExpressionsExtras.hpp"
ARenderSettingsEmissiveAdapatationExtrasVolume* ARenderSettingsEmissiveAdapatationExtrasVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsEmissiveAdapatationExtrasVolume");
    return (ARenderSettingsEmissiveAdapatationExtrasVolume*)res;
}
