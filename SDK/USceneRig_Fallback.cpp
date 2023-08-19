#include "USceneRigProvider.hpp"
#include "USceneRig_Fallback.hpp"
USceneRig_Fallback* USceneRig_Fallback::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRig_Fallback");
    return (USceneRig_Fallback*)res;
}
