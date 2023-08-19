#include "USceneAction_CharacterTurnToFace.hpp"
#include "USceneRigObjectActionBase.hpp"
#include "UTransformProvider.hpp"
USceneAction_CharacterTurnToFace* USceneAction_CharacterTurnToFace::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_CharacterTurnToFace");
    return (USceneAction_CharacterTurnToFace*)res;
}
