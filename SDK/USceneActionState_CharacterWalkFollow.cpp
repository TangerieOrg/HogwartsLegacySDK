#include "USceneActionState_CharacterWalkBase.hpp"
#include "USceneActionState_CharacterWalkFollow.hpp"
USceneActionState_CharacterWalkFollow* USceneActionState_CharacterWalkFollow::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_CharacterWalkFollow");
    return (USceneActionState_CharacterWalkFollow*)res;
}
