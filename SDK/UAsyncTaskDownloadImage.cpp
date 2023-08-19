#include "UAsyncTaskDownloadImage.hpp"
#include "UBlueprintAsyncActionBase.hpp"
#include "UFunction.hpp"
UAsyncTaskDownloadImage* UAsyncTaskDownloadImage::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.AsyncTaskDownloadImage");
    return (UAsyncTaskDownloadImage*)res;
}
UAsyncTaskDownloadImage* UAsyncTaskDownloadImage::DownloadImage(FString URL) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.AsyncTaskDownloadImage.DownloadImage"));
    struct Params_DownloadImage {
        FString URL; // 0x0
        UAsyncTaskDownloadImage* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_DownloadImage params{};
    params.URL = (FString)URL;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UAsyncTaskDownloadImage*)params.ReturnValue;
}
