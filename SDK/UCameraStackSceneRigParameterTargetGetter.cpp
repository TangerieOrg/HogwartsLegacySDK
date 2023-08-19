#include "UCameraStackSceneRigParameterTargetGetter.hpp"
#include "UCameraStackSecondaryTargetGetterBlend.hpp"
UCameraStackSceneRigParameterTargetGetter* UCameraStackSceneRigParameterTargetGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.CameraStackSceneRigParameterTargetGetter");
    return (UCameraStackSceneRigParameterTargetGetter*)res;
}
