#include "FActionParameter_AkAudioEvent.hpp"
#include "USceneAction_AkAudioEvent.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_AkAudioEvent* USceneAction_AkAudioEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_AkAudioEvent");
    return (USceneAction_AkAudioEvent*)res;
}
