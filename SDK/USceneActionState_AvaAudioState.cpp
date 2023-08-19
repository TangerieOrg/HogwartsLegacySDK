#include "FSceneRigAvaAudioStateTrackSectionData.hpp"
#include "USceneActionState_AvaAudioState.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_AvaAudioState* USceneActionState_AvaAudioState::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_AvaAudioState");
    return (USceneActionState_AvaAudioState*)res;
}
