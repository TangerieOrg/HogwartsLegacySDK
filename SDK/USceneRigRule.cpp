#include "USceneRigRule.hpp"
#include "UTimeRigRule.hpp"
USceneRigRule* USceneRigRule::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigRule");
    return (USceneRigRule*)res;
}
