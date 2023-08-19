#include "FSceneRigAvaAudioMusicTrackSectionData.hpp"
#include "USceneRigParameter.hpp"
#include "USceneRigParameter_AvaAudioMusic.hpp"
USceneRigParameter_AvaAudioMusic* USceneRigParameter_AvaAudioMusic::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneRigParameter_AvaAudioMusic");
    return (USceneRigParameter_AvaAudioMusic*)res;
}
