#include "FBlendDomain.hpp"
#include "FRenderSettingsPostProcessing.hpp"
#include "USceneAction_RenderSettings.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_RenderSettings* USceneAction_RenderSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_RenderSettings");
    return (USceneAction_RenderSettings*)res;
}
