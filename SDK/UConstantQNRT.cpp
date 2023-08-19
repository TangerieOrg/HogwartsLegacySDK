#include "UAudioSynesthesiaNRT.hpp"
#include "UConstantQNRT.hpp"
#include "UConstantQNRTSettings.hpp"
#include "UFunction.hpp"
UConstantQNRT* UConstantQNRT::StaticClass() {
    static auto res = find_uobject("Class /Script/AudioSynesthesia.ConstantQNRT");
    return (UConstantQNRT*)res;
}
void UConstantQNRT::GetNormalizedChannelConstantQAtTime(float InSeconds, int32_t InChannel, TArray<float>& OutConstantQ) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioSynesthesia.ConstantQNRT.GetNormalizedChannelConstantQAtTime"));
    struct Params_GetNormalizedChannelConstantQAtTime {
        float InSeconds; // 0x0
        int32_t InChannel; // 0x4
        TArray<float> OutConstantQ; // 0x8
    }; // Size: 0x18
    Params_GetNormalizedChannelConstantQAtTime params{};
    params.InSeconds = (float)InSeconds;
    params.InChannel = (int32_t)InChannel;
    params.OutConstantQ = (TArray<float>)OutConstantQ;
    ProcessEvent(func, &params);
    OutConstantQ = params.OutConstantQ;
}
void UConstantQNRT::GetChannelConstantQAtTime(float InSeconds, int32_t InChannel, TArray<float>& OutConstantQ) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime"));
    struct Params_GetChannelConstantQAtTime {
        float InSeconds; // 0x0
        int32_t InChannel; // 0x4
        TArray<float> OutConstantQ; // 0x8
    }; // Size: 0x18
    Params_GetChannelConstantQAtTime params{};
    params.InSeconds = (float)InSeconds;
    params.InChannel = (int32_t)InChannel;
    params.OutConstantQ = (TArray<float>)OutConstantQ;
    ProcessEvent(func, &params);
    OutConstantQ = params.OutConstantQ;
}
