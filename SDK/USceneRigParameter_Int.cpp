#include "USceneRigParameter.hpp"
#include "USceneRigParameter_Int.hpp"
USceneRigParameter_Int* USceneRigParameter_Int::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigParameter_Int");
    return (USceneRigParameter_Int*)res;
}
