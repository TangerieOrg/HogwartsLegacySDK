#include "UActorProvider.hpp"
#include "USceneAction_SpawnFromDOV.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_SpawnFromDOV* USceneAction_SpawnFromDOV::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_SpawnFromDOV");
    return (USceneAction_SpawnFromDOV*)res;
}
