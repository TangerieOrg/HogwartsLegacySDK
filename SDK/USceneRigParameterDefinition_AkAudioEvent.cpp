#include "FSceneRigAkAudioEventTrackSectionData.hpp"
#include "USceneRigParameterDefinition.hpp"
#include "USceneRigParameterDefinition_AkAudioEvent.hpp"
USceneRigParameterDefinition_AkAudioEvent* USceneRigParameterDefinition_AkAudioEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneRigParameterDefinition_AkAudioEvent");
    return (USceneRigParameterDefinition_AkAudioEvent*)res;
}
