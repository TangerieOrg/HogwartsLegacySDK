#include "AActor.hpp"
#include "FDirectoryPath.hpp"
#include "FFrameRate.hpp"
#include "UBaseMediaSource.hpp"
#include "UFunction.hpp"
#include "UImgMediaSource.hpp"
UImgMediaSource* UImgMediaSource::StaticClass() {
    static auto res = find_uobject("Class /Script/ImgMedia.ImgMediaSource");
    return (UImgMediaSource*)res;
}
void UImgMediaSource::AddTargetObject(AActor* InActor, float Width) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ImgMedia.ImgMediaSource.AddTargetObject"));
    struct Params_AddTargetObject {
        AActor* InActor; // 0x0
        float Width; // 0x8
    }; // Size: 0xc
    Params_AddTargetObject params{};
    params.InActor = (AActor*)InActor;
    params.Width = (float)Width;
    ProcessEvent(func, &params);
}
void UImgMediaSource::SetMipLevelDistance(float Distance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ImgMedia.ImgMediaSource.SetMipLevelDistance"));
    struct Params_SetMipLevelDistance {
        float Distance; // 0x0
    }; // Size: 0x4
    Params_SetMipLevelDistance params{};
    params.Distance = (float)Distance;
    ProcessEvent(func, &params);
}
void UImgMediaSource::AddGlobalCamera(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ImgMedia.ImgMediaSource.AddGlobalCamera"));
    struct Params_AddGlobalCamera {
        AActor* InActor; // 0x0
    }; // Size: 0x8
    Params_AddGlobalCamera params{};
    params.InActor = (AActor*)InActor;
    ProcessEvent(func, &params);
}
void UImgMediaSource::SetSequencePath(FString Path) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ImgMedia.ImgMediaSource.SetSequencePath"));
    struct Params_SetSequencePath {
        FString Path; // 0x0
    }; // Size: 0x10
    Params_SetSequencePath params{};
    params.Path = (FString)Path;
    ProcessEvent(func, &params);
}
void UImgMediaSource::RemoveTargetObject(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ImgMedia.ImgMediaSource.RemoveTargetObject"));
    struct Params_RemoveTargetObject {
        AActor* InActor; // 0x0
    }; // Size: 0x8
    Params_RemoveTargetObject params{};
    params.InActor = (AActor*)InActor;
    ProcessEvent(func, &params);
}
void UImgMediaSource::RemoveGlobalCamera(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ImgMedia.ImgMediaSource.RemoveGlobalCamera"));
    struct Params_RemoveGlobalCamera {
        AActor* InActor; // 0x0
    }; // Size: 0x8
    Params_RemoveGlobalCamera params{};
    params.InActor = (AActor*)InActor;
    ProcessEvent(func, &params);
}
FString UImgMediaSource::GetSequencePath() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ImgMedia.ImgMediaSource.GetSequencePath"));
    struct Params_GetSequencePath {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetSequencePath params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UImgMediaSource::GetProxies(TArray<FString>& OutProxies) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ImgMedia.ImgMediaSource.GetProxies"));
    struct Params_GetProxies {
        TArray<FString> OutProxies; // 0x0
    }; // Size: 0x10
    Params_GetProxies params{};
    params.OutProxies = (TArray<FString>)OutProxies;
    ProcessEvent(func, &params);
    OutProxies = params.OutProxies;
}
