#include "UAvaAudioDialogueEvent.hpp"
#include "UObject.hpp"
UAvaAudioDialogueEvent* UAvaAudioDialogueEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AvaAudioDialogueEvent");
    return (UAvaAudioDialogueEvent*)res;
}
