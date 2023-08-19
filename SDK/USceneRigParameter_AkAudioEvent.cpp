#include "FSceneRigAkAudioEventTrackSectionData.hpp"
#include "USceneRigParameter.hpp"
#include "USceneRigParameter_AkAudioEvent.hpp"
USceneRigParameter_AkAudioEvent* USceneRigParameter_AkAudioEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneRigParameter_AkAudioEvent");
    return (USceneRigParameter_AkAudioEvent*)res;
}
