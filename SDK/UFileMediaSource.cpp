#include "UBaseMediaSource.hpp"
#include "UFileMediaSource.hpp"
#include "UFunction.hpp"
UFileMediaSource* UFileMediaSource::StaticClass() {
    static auto res = find_uobject("Class /Script/MediaAssets.FileMediaSource");
    return (UFileMediaSource*)res;
}
void UFileMediaSource::SetFilePath(FString Path) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.FileMediaSource.SetFilePath"));
    struct Params_SetFilePath {
        FString Path; // 0x0
    }; // Size: 0x10
    Params_SetFilePath params{};
    params.Path = (FString)Path;
    ProcessEvent(func, &params);
}
