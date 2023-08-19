#include "EStandardManagedPriority.hpp"
#include "USceneAction_HUDVisibility.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_HUDVisibility* USceneAction_HUDVisibility::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_HUDVisibility");
    return (USceneAction_HUDVisibility*)res;
}
