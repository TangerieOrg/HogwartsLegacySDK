#include "USceneRigStage_ParameterValue.hpp"
#include "USceneRigStage_TransformValue.hpp"
#include "UTransformProvider.hpp"
USceneRigStage_TransformValue* USceneRigStage_TransformValue::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigStage_TransformValue");
    return (USceneRigStage_TransformValue*)res;
}
