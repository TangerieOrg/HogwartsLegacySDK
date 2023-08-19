#include "UNameProvider.hpp"
#include "USceneRigStage_NameValue.hpp"
#include "USceneRigStage_ParameterValue.hpp"
USceneRigStage_NameValue* USceneRigStage_NameValue::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigStage_NameValue");
    return (USceneRigStage_NameValue*)res;
}
