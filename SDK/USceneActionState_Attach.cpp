#include "FTransform.hpp"
#include "USceneActionState_Attach.hpp"
#include "USceneRigObjectActionState.hpp"
#include "UTransformProvider.hpp"
USceneActionState_Attach* USceneActionState_Attach::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_Attach");
    return (USceneActionState_Attach*)res;
}
