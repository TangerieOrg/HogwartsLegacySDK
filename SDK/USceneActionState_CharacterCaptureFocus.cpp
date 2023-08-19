#include "USceneActionState_CharacterCaptureFocus.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_CharacterCaptureFocus* USceneActionState_CharacterCaptureFocus::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_CharacterCaptureFocus");
    return (USceneActionState_CharacterCaptureFocus*)res;
}
