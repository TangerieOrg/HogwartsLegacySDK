#include "FVector.hpp"
#include "USceneRigParameterDefinition.hpp"
#include "USceneRigParameterDefinition_Vector.hpp"
USceneRigParameterDefinition_Vector* USceneRigParameterDefinition_Vector::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigParameterDefinition_Vector");
    return (USceneRigParameterDefinition_Vector*)res;
}
