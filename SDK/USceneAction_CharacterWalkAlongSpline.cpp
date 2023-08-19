#include "UActorProvider.hpp"
#include "USceneAction_CharacterWalkAlongSpline.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_CharacterWalkAlongSpline* USceneAction_CharacterWalkAlongSpline::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_CharacterWalkAlongSpline");
    return (USceneAction_CharacterWalkAlongSpline*)res;
}
