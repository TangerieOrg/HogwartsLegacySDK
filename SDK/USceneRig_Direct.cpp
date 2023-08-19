#include "USceneRig.hpp"
#include "USceneRigProvider.hpp"
#include "USceneRig_Direct.hpp"
USceneRig_Direct* USceneRig_Direct::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRig_Direct");
    return (USceneRig_Direct*)res;
}
