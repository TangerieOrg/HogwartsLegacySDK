#include "USceneActionState_HUDVisibility.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_HUDVisibility* USceneActionState_HUDVisibility::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_HUDVisibility");
    return (USceneActionState_HUDVisibility*)res;
}
