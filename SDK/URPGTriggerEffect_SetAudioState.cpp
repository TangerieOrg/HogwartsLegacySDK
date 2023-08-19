#include "URPGTriggerEffect_Base.hpp"
#include "URPGTriggerEffect_SetAudioState.hpp"
URPGTriggerEffect_SetAudioState* URPGTriggerEffect_SetAudioState::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_SetAudioState");
    return (URPGTriggerEffect_SetAudioState*)res;
}
