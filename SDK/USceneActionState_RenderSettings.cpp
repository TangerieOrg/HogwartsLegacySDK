#include "FPostProcessSettings.hpp"
#include "USceneActionState_RenderSettings.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_RenderSettings* USceneActionState_RenderSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_RenderSettings");
    return (USceneActionState_RenderSettings*)res;
}
