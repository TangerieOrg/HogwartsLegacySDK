#include "FActionParameter_AvaAudioState.hpp"
#include "USceneAction_AvaAudioState.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_AvaAudioState* USceneAction_AvaAudioState::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_AvaAudioState");
    return (USceneAction_AvaAudioState*)res;
}
