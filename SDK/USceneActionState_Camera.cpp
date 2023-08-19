#include "AActor.hpp"
#include "USceneActionState_Camera.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_Camera* USceneActionState_Camera::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_Camera");
    return (USceneActionState_Camera*)res;
}
