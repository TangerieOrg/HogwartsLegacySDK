#include "USceneAction_CharacterTeleport.hpp"
#include "USceneRigObjectActionBase.hpp"
#include "UTransformProvider.hpp"
USceneAction_CharacterTeleport* USceneAction_CharacterTeleport::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_CharacterTeleport");
    return (USceneAction_CharacterTeleport*)res;
}
