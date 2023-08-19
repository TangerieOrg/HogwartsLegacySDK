#include "FSceneRigAvaAudioMusicTrackSectionData.hpp"
#include "USceneActionState_AvaAudioMusic.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_AvaAudioMusic* USceneActionState_AvaAudioMusic::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_AvaAudioMusic");
    return (USceneActionState_AvaAudioMusic*)res;
}
