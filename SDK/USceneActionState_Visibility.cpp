#include "USceneActionState_Visibility.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_Visibility* USceneActionState_Visibility::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_Visibility");
    return (USceneActionState_Visibility*)res;
}
