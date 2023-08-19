#include "UObjectProvider.hpp"
#include "USceneRigStage_ObjectValue.hpp"
#include "USceneRigStage_ParameterValue.hpp"
USceneRigStage_ObjectValue* USceneRigStage_ObjectValue::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigStage_ObjectValue");
    return (USceneRigStage_ObjectValue*)res;
}
