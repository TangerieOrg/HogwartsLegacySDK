#include "USceneRigParameterDefinition.hpp"
#include "USceneRigParameterDefinition_FString.hpp"
USceneRigParameterDefinition_FString* USceneRigParameterDefinition_FString::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigParameterDefinition_FString");
    return (USceneRigParameterDefinition_FString*)res;
}
