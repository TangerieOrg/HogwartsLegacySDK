#include "USceneActionState_LightCullingSettings.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_LightCullingSettings* USceneActionState_LightCullingSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_LightCullingSettings");
    return (USceneActionState_LightCullingSettings*)res;
}
