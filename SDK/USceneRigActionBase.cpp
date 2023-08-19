#include "USceneRigActionBase.hpp"
#include "UTimeRigInterval.hpp"
USceneRigActionBase* USceneRigActionBase::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigActionBase");
    return (USceneRigActionBase*)res;
}
