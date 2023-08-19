#include "FSceneRigStage_Bool.hpp"
#include "USceneRigStage_NamedBool.hpp"
#include "USceneRigStage_NamedParameter.hpp"
USceneRigStage_NamedBool* USceneRigStage_NamedBool::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigStage_NamedBool");
    return (USceneRigStage_NamedBool*)res;
}
