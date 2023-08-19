#include "FSceneRigVariant.hpp"
#include "UObject.hpp"
#include "USceneRigVariants.hpp"
USceneRigVariants* USceneRigVariants::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigVariants");
    return (USceneRigVariants*)res;
}
