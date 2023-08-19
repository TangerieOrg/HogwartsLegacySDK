#include "UIntProvider.hpp"
#include "USceneRigStage_IntValue.hpp"
#include "USceneRigStage_ParameterValue.hpp"
USceneRigStage_IntValue* USceneRigStage_IntValue::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigStage_IntValue");
    return (USceneRigStage_IntValue*)res;
}
