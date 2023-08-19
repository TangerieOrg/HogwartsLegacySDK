#include "FSceneRigAkAudioStateTrackSectionData.hpp"
#include "USceneActionState_AkAudioState.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_AkAudioState* USceneActionState_AkAudioState::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_AkAudioState");
    return (USceneActionState_AkAudioState*)res;
}
