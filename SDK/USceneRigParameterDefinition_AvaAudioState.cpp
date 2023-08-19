#include "FSceneRigAvaAudioStateTrackSectionData.hpp"
#include "USceneRigParameterDefinition.hpp"
#include "USceneRigParameterDefinition_AvaAudioState.hpp"
USceneRigParameterDefinition_AvaAudioState* USceneRigParameterDefinition_AvaAudioState::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneRigParameterDefinition_AvaAudioState");
    return (USceneRigParameterDefinition_AvaAudioState*)res;
}
