#include "USceneRigParameter.hpp"
#include "USceneRigParameter_Float.hpp"
USceneRigParameter_Float* USceneRigParameter_Float::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigParameter_Float");
    return (USceneRigParameter_Float*)res;
}
