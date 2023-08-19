#include "FSceneRigAkAudioStateTrackSectionData.hpp"
#include "USceneRigParameter.hpp"
#include "USceneRigParameter_AkAudioState.hpp"
USceneRigParameter_AkAudioState* USceneRigParameter_AkAudioState::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneRigParameter_AkAudioState");
    return (USceneRigParameter_AkAudioState*)res;
}
