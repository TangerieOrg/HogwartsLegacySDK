#include "FSceneRigAkAudioEventTrackSectionData.hpp"
#include "USceneActionState_AkAudioEvent.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_AkAudioEvent* USceneActionState_AkAudioEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_AkAudioEvent");
    return (USceneActionState_AkAudioEvent*)res;
}
