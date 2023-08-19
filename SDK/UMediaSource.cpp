#include "UFunction.hpp"
#include "UMediaSource.hpp"
#include "UObject.hpp"
UMediaSource* UMediaSource::StaticClass() {
    static auto res = find_uobject("Class /Script/MediaAssets.MediaSource");
    return (UMediaSource*)res;
}
bool UMediaSource::Validate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaSource.Validate"));
    struct Params_Validate {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_Validate params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UMediaSource::GetUrl() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaSource.GetUrl"));
    struct Params_GetUrl {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetUrl params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UMediaSource::SetMediaOptionString(FName& Key, FString Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaSource.SetMediaOptionString"));
    struct Params_SetMediaOptionString {
        FName Key; // 0x0
        FString Value; // 0x8
    }; // Size: 0x18
    Params_SetMediaOptionString params{};
    params.Key = (FName)Key;
    params.Value = (FString)Value;
    ProcessEvent(func, &params);
    Key = params.Key;
}
void UMediaSource::SetMediaOptionInt64(FName& Key, int64_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaSource.SetMediaOptionInt64"));
    struct Params_SetMediaOptionInt64 {
        FName Key; // 0x0
        int64_t Value; // 0x8
    }; // Size: 0x10
    Params_SetMediaOptionInt64 params{};
    params.Key = (FName)Key;
    params.Value = (int64_t)Value;
    ProcessEvent(func, &params);
    Key = params.Key;
}
void UMediaSource::SetMediaOptionBool(FName& Key, bool Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaSource.SetMediaOptionBool"));
    struct Params_SetMediaOptionBool {
        FName Key; // 0x0
        bool Value; // 0x8
    }; // Size: 0x9
    Params_SetMediaOptionBool params{};
    params.Key = (FName)Key;
    params.Value = (bool)Value;
    ProcessEvent(func, &params);
    Key = params.Key;
}
void UMediaSource::SetMediaOptionFloat(FName& Key, float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaSource.SetMediaOptionFloat"));
    struct Params_SetMediaOptionFloat {
        FName Key; // 0x0
        float Value; // 0x8
    }; // Size: 0xc
    Params_SetMediaOptionFloat params{};
    params.Key = (FName)Key;
    params.Value = (float)Value;
    ProcessEvent(func, &params);
    Key = params.Key;
}
