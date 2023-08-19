#include "FSceneRigAkAudioStateTrackSectionData.hpp"
#include "USceneRigParameterDefinition.hpp"
#include "USceneRigParameterDefinition_AkAudioState.hpp"
USceneRigParameterDefinition_AkAudioState* USceneRigParameterDefinition_AkAudioState::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneRigParameterDefinition_AkAudioState");
    return (USceneRigParameterDefinition_AkAudioState*)res;
}
