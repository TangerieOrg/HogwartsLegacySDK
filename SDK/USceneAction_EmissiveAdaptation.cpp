#include "FRenderSettingsEmissiveAdaptation.hpp"
#include "USceneAction_EmissiveAdaptation.hpp"
#include "USceneAction_EmissiveAdaptationBase.hpp"
USceneAction_EmissiveAdaptation* USceneAction_EmissiveAdaptation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_EmissiveAdaptation");
    return (USceneAction_EmissiveAdaptation*)res;
}
