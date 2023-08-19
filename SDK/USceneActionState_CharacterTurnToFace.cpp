#include "USceneActionState_CharacterTurnToFace.hpp"
#include "USceneActionState_CharacterWalkBase.hpp"
USceneActionState_CharacterTurnToFace* USceneActionState_CharacterTurnToFace::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_CharacterTurnToFace");
    return (USceneActionState_CharacterTurnToFace*)res;
}
