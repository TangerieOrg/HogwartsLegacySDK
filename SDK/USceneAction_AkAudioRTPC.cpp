#include "FActionParameter_AkAudioRTPC.hpp"
#include "USceneAction_AkAudioRTPC.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_AkAudioRTPC* USceneAction_AkAudioRTPC::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_AkAudioRTPC");
    return (USceneAction_AkAudioRTPC*)res;
}
