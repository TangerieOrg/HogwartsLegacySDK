#include "USceneAction_CharacterWalkToPoint.hpp"
#include "USceneRigObjectActionBase.hpp"
#include "UTransformProvider.hpp"
USceneAction_CharacterWalkToPoint* USceneAction_CharacterWalkToPoint::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_CharacterWalkToPoint");
    return (USceneAction_CharacterWalkToPoint*)res;
}
