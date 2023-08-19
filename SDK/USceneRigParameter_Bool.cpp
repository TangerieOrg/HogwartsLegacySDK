#include "USceneRigParameter.hpp"
#include "USceneRigParameter_Bool.hpp"
USceneRigParameter_Bool* USceneRigParameter_Bool::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigParameter_Bool");
    return (USceneRigParameter_Bool*)res;
}
