#include "ARenderSettingsExposureVolume.hpp"
#include "ARenderSettingsPostProcessingVolume.hpp"
#include "FRenderSettingsPPExposureName.hpp"
#include "UFunction.hpp"
ARenderSettingsExposureVolume* ARenderSettingsExposureVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsExposureVolume");
    return (ARenderSettingsExposureVolume*)res;
}
void ARenderSettingsExposureVolume::EditExposure() {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsExposureVolume.EditExposure"));
    struct Params_EditExposure {
    }; // Size: 0x0
    Params_EditExposure params{};
    ProcessEvent(func, &params);
}
