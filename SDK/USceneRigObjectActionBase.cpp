#include "UActorProvider.hpp"
#include "USceneRigActionBase.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneRigObjectActionBase* USceneRigObjectActionBase::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigObjectActionBase");
    return (USceneRigObjectActionBase*)res;
}
