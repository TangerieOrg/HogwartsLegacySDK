#include "USceneActionState_MountCreature.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_MountCreature* USceneActionState_MountCreature::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_MountCreature");
    return (USceneActionState_MountCreature*)res;
}
