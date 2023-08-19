#include "UActorProvider.hpp"
#include "UObject_SceneRigBoundActor.hpp"
UObject_SceneRigBoundActor* UObject_SceneRigBoundActor::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Object_SceneRigBoundActor");
    return (UObject_SceneRigBoundActor*)res;
}
