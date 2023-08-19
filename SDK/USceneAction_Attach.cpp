#include "UBoolProvider.hpp"
#include "USceneAction_Attach.hpp"
#include "USceneRigObjectActionBase.hpp"
#include "UTransformProvider.hpp"
USceneAction_Attach* USceneAction_Attach::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_Attach");
    return (USceneAction_Attach*)res;
}
