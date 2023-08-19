#include "USceneActionState_SkipControl.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_SkipControl* USceneActionState_SkipControl::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_SkipControl");
    return (USceneActionState_SkipControl*)res;
}
