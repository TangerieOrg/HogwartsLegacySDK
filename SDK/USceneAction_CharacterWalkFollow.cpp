#include "UObjectProvider.hpp"
#include "USceneAction_CharacterWalkFollow.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_CharacterWalkFollow* USceneAction_CharacterWalkFollow::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_CharacterWalkFollow");
    return (USceneAction_CharacterWalkFollow*)res;
}
