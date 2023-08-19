#include "UFloatProvider.hpp"
#include "USceneRigStage_FloatValue.hpp"
#include "USceneRigStage_ParameterValue.hpp"
USceneRigStage_FloatValue* USceneRigStage_FloatValue::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigStage_FloatValue");
    return (USceneRigStage_FloatValue*)res;
}
