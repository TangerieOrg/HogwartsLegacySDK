#include "USceneAction_RenderSettingsViewpoint.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_RenderSettingsViewpoint* USceneAction_RenderSettingsViewpoint::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_RenderSettingsViewpoint");
    return (USceneAction_RenderSettingsViewpoint*)res;
}
