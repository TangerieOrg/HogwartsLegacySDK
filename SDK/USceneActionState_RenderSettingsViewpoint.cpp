#include "USceneActionState_RenderSettingsViewpoint.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_RenderSettingsViewpoint* USceneActionState_RenderSettingsViewpoint::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_RenderSettingsViewpoint");
    return (USceneActionState_RenderSettingsViewpoint*)res;
}
