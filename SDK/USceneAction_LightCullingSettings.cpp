#include "ULightCullingSettings.hpp"
#include "USceneAction_LightCullingSettings.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_LightCullingSettings* USceneAction_LightCullingSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_LightCullingSettings");
    return (USceneAction_LightCullingSettings*)res;
}
