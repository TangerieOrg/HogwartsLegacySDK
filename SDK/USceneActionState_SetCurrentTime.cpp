#include "USceneActionState_SetCurrentTime.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_SetCurrentTime* USceneActionState_SetCurrentTime::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_SetCurrentTime");
    return (USceneActionState_SetCurrentTime*)res;
}
