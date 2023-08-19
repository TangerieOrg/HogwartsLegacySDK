#include "USceneRigProvider.hpp"
#include "USceneRigVariants.hpp"
#include "USceneRig_FromVariants.hpp"
USceneRig_FromVariants* USceneRig_FromVariants::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRig_FromVariants");
    return (USceneRig_FromVariants*)res;
}
