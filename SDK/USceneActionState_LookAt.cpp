#include "UAimEyesData.hpp"
#include "USceneActionState_LookAt.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_LookAt* USceneActionState_LookAt::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_LookAt");
    return (USceneActionState_LookAt*)res;
}
