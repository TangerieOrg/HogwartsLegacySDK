#include "UAkAudioInputComponent.hpp"
#include "UAkComponent.hpp"
#include "UFunction.hpp"
UAkAudioInputComponent* UAkAudioInputComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkAudioInputComponent");
    return (UAkAudioInputComponent*)res;
}
int32_t UAkAudioInputComponent::PostAssociatedAudioInputEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent"));
    struct Params_PostAssociatedAudioInputEvent {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_PostAssociatedAudioInputEvent params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
