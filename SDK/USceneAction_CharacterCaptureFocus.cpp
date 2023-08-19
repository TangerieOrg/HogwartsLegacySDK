#include "USceneAction_CharacterCaptureFocus.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_CharacterCaptureFocus* USceneAction_CharacterCaptureFocus::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_CharacterCaptureFocus");
    return (USceneAction_CharacterCaptureFocus*)res;
}
