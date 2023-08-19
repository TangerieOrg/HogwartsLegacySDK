#include "USceneActionState_DisableIK.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_DisableIK* USceneActionState_DisableIK::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_DisableIK");
    return (USceneActionState_DisableIK*)res;
}
