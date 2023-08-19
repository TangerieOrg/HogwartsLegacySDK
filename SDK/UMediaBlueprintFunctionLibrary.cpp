#include "FMediaCaptureDevice.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UMediaBlueprintFunctionLibrary.hpp"
void UMediaBlueprintFunctionLibrary::EnumerateAudioCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32_t Filter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices"));
    struct Params_EnumerateAudioCaptureDevices {
        TArray<FMediaCaptureDevice> OutDevices; // 0x0
        int32_t Filter; // 0x10
    }; // Size: 0x14
    Params_EnumerateAudioCaptureDevices params{};
    params.OutDevices = (TArray<FMediaCaptureDevice>)OutDevices;
    params.Filter = (int32_t)Filter;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutDevices = params.OutDevices;
}
UMediaBlueprintFunctionLibrary* UMediaBlueprintFunctionLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/MediaAssets.MediaBlueprintFunctionLibrary");
    return (UMediaBlueprintFunctionLibrary*)res;
}
void UMediaBlueprintFunctionLibrary::EnumerateWebcamCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32_t Filter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices"));
    struct Params_EnumerateWebcamCaptureDevices {
        TArray<FMediaCaptureDevice> OutDevices; // 0x0
        int32_t Filter; // 0x10
    }; // Size: 0x14
    Params_EnumerateWebcamCaptureDevices params{};
    params.OutDevices = (TArray<FMediaCaptureDevice>)OutDevices;
    params.Filter = (int32_t)Filter;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutDevices = params.OutDevices;
}
void UMediaBlueprintFunctionLibrary::EnumerateVideoCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32_t Filter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices"));
    struct Params_EnumerateVideoCaptureDevices {
        TArray<FMediaCaptureDevice> OutDevices; // 0x0
        int32_t Filter; // 0x10
    }; // Size: 0x14
    Params_EnumerateVideoCaptureDevices params{};
    params.OutDevices = (TArray<FMediaCaptureDevice>)OutDevices;
    params.Filter = (int32_t)Filter;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutDevices = params.OutDevices;
}
