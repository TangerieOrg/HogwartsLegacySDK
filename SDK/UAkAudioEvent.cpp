#include "UAkAssetBase.hpp"
#include "UAkAssetPlatformData.hpp"
#include "UAkAudioBank.hpp"
#include "UAkAudioEvent.hpp"
#include "UFunction.hpp"
UAkAudioEvent* UAkAudioEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkAudioEvent");
    return (UAkAudioEvent*)res;
}
float UAkAudioEvent::GetMaximumDuration() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkAudioEvent.GetMaximumDuration"));
    struct Params_GetMaximumDuration {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMaximumDuration params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UAkAudioEvent::GetMinimumDuration() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkAudioEvent.GetMinimumDuration"));
    struct Params_GetMinimumDuration {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMinimumDuration params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UAkAudioEvent::GetMaxAttenuationRadius() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkAudioEvent.GetMaxAttenuationRadius"));
    struct Params_GetMaxAttenuationRadius {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMaxAttenuationRadius params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UAkAudioEvent::GetIsInfinite() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkAudioEvent.GetIsInfinite"));
    struct Params_GetIsInfinite {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsInfinite params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
