#include "AActor.hpp"
#include "AAkAmbientSound.hpp"
#include "UAkAudioEvent.hpp"
#include "UAkComponent.hpp"
#include "UFunction.hpp"
AAkAmbientSound* AAkAmbientSound::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkAmbientSound");
    return (AAkAmbientSound*)res;
}
void AAkAmbientSound::StopAmbientSound() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkAmbientSound.StopAmbientSound"));
    struct Params_StopAmbientSound {
    }; // Size: 0x0
    Params_StopAmbientSound params{};
    ProcessEvent(func, &params);
}
void AAkAmbientSound::StartAmbientSound() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkAmbientSound.StartAmbientSound"));
    struct Params_StartAmbientSound {
    }; // Size: 0x0
    Params_StartAmbientSound params{};
    ProcessEvent(func, &params);
}
