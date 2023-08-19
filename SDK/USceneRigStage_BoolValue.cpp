#include "UBoolProvider.hpp"
#include "USceneRigStage_BoolValue.hpp"
#include "USceneRigStage_ParameterValue.hpp"
USceneRigStage_BoolValue* USceneRigStage_BoolValue::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigStage_BoolValue");
    return (USceneRigStage_BoolValue*)res;
}
