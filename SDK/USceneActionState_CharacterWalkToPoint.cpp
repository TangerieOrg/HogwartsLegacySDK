#include "USceneActionState_CharacterWalkBase.hpp"
#include "USceneActionState_CharacterWalkToPoint.hpp"
USceneActionState_CharacterWalkToPoint* USceneActionState_CharacterWalkToPoint::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_CharacterWalkToPoint");
    return (USceneActionState_CharacterWalkToPoint*)res;
}
