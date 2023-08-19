#include "UActorProvider.hpp"
#include "UClass.hpp"
#include "USceneAction_MountCreature.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_MountCreature* USceneAction_MountCreature::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_MountCreature");
    return (USceneAction_MountCreature*)res;
}
