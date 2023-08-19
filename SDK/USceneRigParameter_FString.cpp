#include "USceneRigParameter.hpp"
#include "USceneRigParameter_FString.hpp"
USceneRigParameter_FString* USceneRigParameter_FString::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigParameter_FString");
    return (USceneRigParameter_FString*)res;
}
