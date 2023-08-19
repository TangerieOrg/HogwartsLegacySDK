#include "FSceneRigAkAudioRTPCTrackSectionData.hpp"
#include "USceneRigParameter.hpp"
#include "USceneRigParameter_AkAudioRTPC.hpp"
USceneRigParameter_AkAudioRTPC* USceneRigParameter_AkAudioRTPC::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneRigParameter_AkAudioRTPC");
    return (USceneRigParameter_AkAudioRTPC*)res;
}
