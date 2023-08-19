#include "USceneRigStage_ParameterValue.hpp"
#include "USceneRigStage_VectorValue.hpp"
#include "UVectorProvider.hpp"
USceneRigStage_VectorValue* USceneRigStage_VectorValue::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigStage_VectorValue");
    return (USceneRigStage_VectorValue*)res;
}
