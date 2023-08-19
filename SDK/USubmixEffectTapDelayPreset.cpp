#include "FSubmixEffectTapDelaySettings.hpp"
#include "FTapDelayInfo.hpp"
#include "UFunction.hpp"
#include "USoundEffectSubmixPreset.hpp"
#include "USubmixEffectTapDelayPreset.hpp"
float USubmixEffectTapDelayPreset::GetMaxDelayInMilliseconds() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds"));
    struct Params_GetMaxDelayInMilliseconds {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMaxDelayInMilliseconds params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void USubmixEffectTapDelayPreset::SetTap(int32_t TapId, FTapDelayInfo& TapInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SubmixEffectTapDelayPreset.SetTap"));
    struct Params_SetTap {
        int32_t TapId; // 0x0
        FTapDelayInfo TapInfo; // 0x4
    }; // Size: 0x1c
    Params_SetTap params{};
    params.TapId = (int32_t)TapId;
    params.TapInfo = (FTapDelayInfo)TapInfo;
    ProcessEvent(func, &params);
    TapInfo = params.TapInfo;
}
USubmixEffectTapDelayPreset* USubmixEffectTapDelayPreset::StaticClass() {
    static auto res = find_uobject("Class /Script/Synthesis.SubmixEffectTapDelayPreset");
    return (USubmixEffectTapDelayPreset*)res;
}
void USubmixEffectTapDelayPreset::SetSettings(FSubmixEffectTapDelaySettings& InSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SubmixEffectTapDelayPreset.SetSettings"));
    struct Params_SetSettings {
        FSubmixEffectTapDelaySettings InSettings; // 0x0
    }; // Size: 0x18
    Params_SetSettings params{};
    params.InSettings = (FSubmixEffectTapDelaySettings)InSettings;
    ProcessEvent(func, &params);
    InSettings = params.InSettings;
}
void USubmixEffectTapDelayPreset::RemoveTap(int32_t TapId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SubmixEffectTapDelayPreset.RemoveTap"));
    struct Params_RemoveTap {
        int32_t TapId; // 0x0
    }; // Size: 0x4
    Params_RemoveTap params{};
    params.TapId = (int32_t)TapId;
    ProcessEvent(func, &params);
}
void USubmixEffectTapDelayPreset::SetInterpolationTime(float Time) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime"));
    struct Params_SetInterpolationTime {
        float Time; // 0x0
    }; // Size: 0x4
    Params_SetInterpolationTime params{};
    params.Time = (float)Time;
    ProcessEvent(func, &params);
}
void USubmixEffectTapDelayPreset::GetTapIds(TArray<int32_t>& TapIds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SubmixEffectTapDelayPreset.GetTapIds"));
    struct Params_GetTapIds {
        TArray<int32_t> TapIds; // 0x0
    }; // Size: 0x10
    Params_GetTapIds params{};
    params.TapIds = (TArray<int32_t>)TapIds;
    ProcessEvent(func, &params);
    TapIds = params.TapIds;
}
void USubmixEffectTapDelayPreset::GetTap(int32_t TapId, FTapDelayInfo& TapInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SubmixEffectTapDelayPreset.GetTap"));
    struct Params_GetTap {
        int32_t TapId; // 0x0
        FTapDelayInfo TapInfo; // 0x4
    }; // Size: 0x1c
    Params_GetTap params{};
    params.TapId = (int32_t)TapId;
    params.TapInfo = (FTapDelayInfo)TapInfo;
    ProcessEvent(func, &params);
    TapInfo = params.TapInfo;
}
void USubmixEffectTapDelayPreset::AddTap(int32_t& TapId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SubmixEffectTapDelayPreset.AddTap"));
    struct Params_AddTap {
        int32_t TapId; // 0x0
    }; // Size: 0x4
    Params_AddTap params{};
    params.TapId = (int32_t)TapId;
    ProcessEvent(func, &params);
    TapId = params.TapId;
}
