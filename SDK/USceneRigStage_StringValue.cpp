#include "USceneRigStage_ParameterValue.hpp"
#include "USceneRigStage_StringValue.hpp"
#include "UStringProvider.hpp"
USceneRigStage_StringValue* USceneRigStage_StringValue::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigStage_StringValue");
    return (USceneRigStage_StringValue*)res;
}
