#include "UAudioSynesthesiaNRT.hpp"
#include "UFunction.hpp"
#include "ULoudnessNRT.hpp"
#include "ULoudnessNRTSettings.hpp"
void ULoudnessNRT::GetLoudnessAtTime(float InSeconds, float& OutLoudness) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioSynesthesia.LoudnessNRT.GetLoudnessAtTime"));
    struct Params_GetLoudnessAtTime {
        float InSeconds; // 0x0
        float OutLoudness; // 0x4
    }; // Size: 0x8
    Params_GetLoudnessAtTime params{};
    params.InSeconds = (float)InSeconds;
    params.OutLoudness = (float)OutLoudness;
    ProcessEvent(func, &params);
    OutLoudness = params.OutLoudness;
}
ULoudnessNRT* ULoudnessNRT::StaticClass() {
    static auto res = find_uobject("Class /Script/AudioSynesthesia.LoudnessNRT");
    return (ULoudnessNRT*)res;
}
void ULoudnessNRT::GetNormalizedLoudnessAtTime(float InSeconds, float& OutLoudness) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioSynesthesia.LoudnessNRT.GetNormalizedLoudnessAtTime"));
    struct Params_GetNormalizedLoudnessAtTime {
        float InSeconds; // 0x0
        float OutLoudness; // 0x4
    }; // Size: 0x8
    Params_GetNormalizedLoudnessAtTime params{};
    params.InSeconds = (float)InSeconds;
    params.OutLoudness = (float)OutLoudness;
    ProcessEvent(func, &params);
    OutLoudness = params.OutLoudness;
}
void ULoudnessNRT::GetNormalizedChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float& OutLoudness) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioSynesthesia.LoudnessNRT.GetNormalizedChannelLoudnessAtTime"));
    struct Params_GetNormalizedChannelLoudnessAtTime {
        float InSeconds; // 0x0
        int32_t InChannel; // 0x4
        float OutLoudness; // 0x8
    }; // Size: 0xc
    Params_GetNormalizedChannelLoudnessAtTime params{};
    params.InSeconds = (float)InSeconds;
    params.InChannel = (int32_t)InChannel;
    params.OutLoudness = (float)OutLoudness;
    ProcessEvent(func, &params);
    OutLoudness = params.OutLoudness;
}
void ULoudnessNRT::GetChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float& OutLoudness) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioSynesthesia.LoudnessNRT.GetChannelLoudnessAtTime"));
    struct Params_GetChannelLoudnessAtTime {
        float InSeconds; // 0x0
        int32_t InChannel; // 0x4
        float OutLoudness; // 0x8
    }; // Size: 0xc
    Params_GetChannelLoudnessAtTime params{};
    params.InSeconds = (float)InSeconds;
    params.InChannel = (int32_t)InChannel;
    params.OutLoudness = (float)OutLoudness;
    ProcessEvent(func, &params);
    OutLoudness = params.OutLoudness;
}
