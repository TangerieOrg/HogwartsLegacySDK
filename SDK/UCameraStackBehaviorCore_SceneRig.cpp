#include "UCameraStackBehaviorCore.hpp"
#include "UCameraStackBehaviorCore_SceneRig.hpp"
UCameraStackBehaviorCore_SceneRig* UCameraStackBehaviorCore_SceneRig::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.CameraStackBehaviorCore_SceneRig");
    return (UCameraStackBehaviorCore_SceneRig*)res;
}
