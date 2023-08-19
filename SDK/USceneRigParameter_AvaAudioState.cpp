#include "FSceneRigAvaAudioStateTrackSectionData.hpp"
#include "USceneRigParameter.hpp"
#include "USceneRigParameter_AvaAudioState.hpp"
USceneRigParameter_AvaAudioState* USceneRigParameter_AvaAudioState::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneRigParameter_AvaAudioState");
    return (USceneRigParameter_AvaAudioState*)res;
}
