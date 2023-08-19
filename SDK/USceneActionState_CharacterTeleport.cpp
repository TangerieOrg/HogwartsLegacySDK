#include "USceneActionState_CharacterTeleport.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_CharacterTeleport* USceneActionState_CharacterTeleport::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_CharacterTeleport");
    return (USceneActionState_CharacterTeleport*)res;
}
