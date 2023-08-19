#include "FSceneRigAvaAudioMusicTrackSectionData.hpp"
#include "USceneRigParameterDefinition.hpp"
#include "USceneRigParameterDefinition_AvaAudioMusic.hpp"
USceneRigParameterDefinition_AvaAudioMusic* USceneRigParameterDefinition_AvaAudioMusic::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneRigParameterDefinition_AvaAudioMusic");
    return (USceneRigParameterDefinition_AvaAudioMusic*)res;
}
