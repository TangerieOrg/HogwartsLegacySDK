#include "UAudioSynesthesiaNRT.hpp"
#include "UFunction.hpp"
#include "UOnsetNRT.hpp"
#include "UOnsetNRTSettings.hpp"
UOnsetNRT* UOnsetNRT::StaticClass() {
    static auto res = find_uobject("Class /Script/AudioSynesthesia.OnsetNRT");
    return (UOnsetNRT*)res;
}
void UOnsetNRT::GetNormalizedChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, TArray<float>& OutOnsetTimestamps, TArray<float>& OutOnsetStrengths) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes"));
    struct Params_GetNormalizedChannelOnsetsBetweenTimes {
        float InStartSeconds; // 0x0
        float InEndSeconds; // 0x4
        int32_t InChannel; // 0x8
        char pad_c[0x4];
        TArray<float> OutOnsetTimestamps; // 0x10
        TArray<float> OutOnsetStrengths; // 0x20
    }; // Size: 0x30
    Params_GetNormalizedChannelOnsetsBetweenTimes params{};
    params.InStartSeconds = (float)InStartSeconds;
    params.InEndSeconds = (float)InEndSeconds;
    params.InChannel = (int32_t)InChannel;
    params.OutOnsetTimestamps = (TArray<float>)OutOnsetTimestamps;
    params.OutOnsetStrengths = (TArray<float>)OutOnsetStrengths;
    ProcessEvent(func, &params);
    OutOnsetTimestamps = params.OutOnsetTimestamps;
    OutOnsetStrengths = params.OutOnsetStrengths;
}
void UOnsetNRT::GetChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, TArray<float>& OutOnsetTimestamps, TArray<float>& OutOnsetStrengths) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes"));
    struct Params_GetChannelOnsetsBetweenTimes {
        float InStartSeconds; // 0x0
        float InEndSeconds; // 0x4
        int32_t InChannel; // 0x8
        char pad_c[0x4];
        TArray<float> OutOnsetTimestamps; // 0x10
        TArray<float> OutOnsetStrengths; // 0x20
    }; // Size: 0x30
    Params_GetChannelOnsetsBetweenTimes params{};
    params.InStartSeconds = (float)InStartSeconds;
    params.InEndSeconds = (float)InEndSeconds;
    params.InChannel = (int32_t)InChannel;
    params.OutOnsetTimestamps = (TArray<float>)OutOnsetTimestamps;
    params.OutOnsetStrengths = (TArray<float>)OutOnsetStrengths;
    ProcessEvent(func, &params);
    OutOnsetTimestamps = params.OutOnsetTimestamps;
    OutOnsetStrengths = params.OutOnsetStrengths;
}
