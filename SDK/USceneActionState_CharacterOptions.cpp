#include "USceneActionState_CharacterOptions.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_CharacterOptions* USceneActionState_CharacterOptions::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_CharacterOptions");
    return (USceneActionState_CharacterOptions*)res;
}
