#include "UInterface.hpp"
#include "UInterface_RenderSettingsEmissiveAdaptation.hpp"
UInterface_RenderSettingsEmissiveAdaptation* UInterface_RenderSettingsEmissiveAdaptation::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.Interface_RenderSettingsEmissiveAdaptation");
    return (UInterface_RenderSettingsEmissiveAdaptation*)res;
}
