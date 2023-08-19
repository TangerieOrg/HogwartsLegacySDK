#include "UFunction.hpp"
#include "UMediaPlaylist.hpp"
#include "UMediaSource.hpp"
#include "UObject.hpp"
UMediaPlaylist* UMediaPlaylist::StaticClass() {
    static auto res = find_uobject("Class /Script/MediaAssets.MediaPlaylist");
    return (UMediaPlaylist*)res;
}
bool UMediaPlaylist::Replace(int32_t Index, UMediaSource* Replacement) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlaylist.Replace"));
    struct Params_Replace {
        int32_t Index; // 0x0
        char pad_4[0x4];
        UMediaSource* Replacement; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_Replace params{};
    params.Index = (int32_t)Index;
    params.Replacement = (UMediaSource*)Replacement;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMediaPlaylist::RemoveAt(int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlaylist.RemoveAt"));
    struct Params_RemoveAt {
        int32_t Index; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_RemoveAt params{};
    params.Index = (int32_t)Index;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMediaPlaylist::Remove(UMediaSource* MediaSource) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlaylist.Remove"));
    struct Params_Remove {
        UMediaSource* MediaSource; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_Remove params{};
    params.MediaSource = (UMediaSource*)MediaSource;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UMediaSource* UMediaPlaylist::GetRandom(int32_t& OutIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlaylist.GetRandom"));
    struct Params_GetRandom {
        int32_t OutIndex; // 0x0
        char pad_4[0x4];
        UMediaSource* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetRandom params{};
    params.OutIndex = (int32_t)OutIndex;
    ProcessEvent(func, &params);
    OutIndex = params.OutIndex;
    return (UMediaSource*)params.ReturnValue;
}
UMediaSource* UMediaPlaylist::GetNext(int32_t& InOutIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlaylist.GetNext"));
    struct Params_GetNext {
        int32_t InOutIndex; // 0x0
        char pad_4[0x4];
        UMediaSource* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetNext params{};
    params.InOutIndex = (int32_t)InOutIndex;
    ProcessEvent(func, &params);
    InOutIndex = params.InOutIndex;
    return (UMediaSource*)params.ReturnValue;
}
int32_t UMediaPlaylist::Num() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlaylist.Num"));
    struct Params_Num {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_Num params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UMediaPlaylist::Insert(UMediaSource* MediaSource, int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlaylist.Insert"));
    struct Params_Insert {
        UMediaSource* MediaSource; // 0x0
        int32_t Index; // 0x8
    }; // Size: 0xc
    Params_Insert params{};
    params.MediaSource = (UMediaSource*)MediaSource;
    params.Index = (int32_t)Index;
    ProcessEvent(func, &params);
}
UMediaSource* UMediaPlaylist::GetPrevious(int32_t& InOutIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlaylist.GetPrevious"));
    struct Params_GetPrevious {
        int32_t InOutIndex; // 0x0
        char pad_4[0x4];
        UMediaSource* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetPrevious params{};
    params.InOutIndex = (int32_t)InOutIndex;
    ProcessEvent(func, &params);
    InOutIndex = params.InOutIndex;
    return (UMediaSource*)params.ReturnValue;
}
UMediaSource* UMediaPlaylist::Get(int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlaylist.Get"));
    struct Params_Get {
        int32_t Index; // 0x0
        char pad_4[0x4];
        UMediaSource* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_Get params{};
    params.Index = (int32_t)Index;
    ProcessEvent(func, &params);
    return (UMediaSource*)params.ReturnValue;
}
bool UMediaPlaylist::AddUrl(FString URL) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlaylist.AddUrl"));
    struct Params_AddUrl {
        FString URL; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_AddUrl params{};
    params.URL = (FString)URL;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMediaPlaylist::AddFile(FString FilePath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlaylist.AddFile"));
    struct Params_AddFile {
        FString FilePath; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_AddFile params{};
    params.FilePath = (FString)FilePath;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMediaPlaylist::Add(UMediaSource* MediaSource) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlaylist.Add"));
    struct Params_Add {
        UMediaSource* MediaSource; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_Add params{};
    params.MediaSource = (UMediaSource*)MediaSource;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
