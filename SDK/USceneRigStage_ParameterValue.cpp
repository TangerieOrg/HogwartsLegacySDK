#include "UObject.hpp"
#include "USceneRigStage_ParameterValue.hpp"
USceneRigStage_ParameterValue* USceneRigStage_ParameterValue::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigStage_ParameterValue");
    return (USceneRigStage_ParameterValue*)res;
}
