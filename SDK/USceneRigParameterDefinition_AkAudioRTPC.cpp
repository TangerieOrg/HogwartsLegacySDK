#include "FSceneRigAkAudioRTPCTrackSectionData.hpp"
#include "USceneRigParameterDefinition.hpp"
#include "USceneRigParameterDefinition_AkAudioRTPC.hpp"
USceneRigParameterDefinition_AkAudioRTPC* USceneRigParameterDefinition_AkAudioRTPC::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneRigParameterDefinition_AkAudioRTPC");
    return (USceneRigParameterDefinition_AkAudioRTPC*)res;
}
