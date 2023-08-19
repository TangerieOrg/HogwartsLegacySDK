#include "UObject.hpp"
#include "USceneRigParameter.hpp"
USceneRigParameter* USceneRigParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigParameter");
    return (USceneRigParameter*)res;
}
