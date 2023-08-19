#include "USceneActionState_FreezeTime.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_FreezeTime* USceneActionState_FreezeTime::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_FreezeTime");
    return (USceneActionState_FreezeTime*)res;
}
