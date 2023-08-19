#pragma once
#include <cstdint>
#include "FMediaCaptureDevice.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#pragma pack(push, 1)
class UMediaBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
public:
    static UMediaBlueprintFunctionLibrary* StaticClass();
    static void EnumerateWebcamCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32_t Filter);
    static void EnumerateVideoCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32_t Filter);
    static void EnumerateAudioCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32_t Filter);
}; // Size: 0x28
#pragma pack(pop)
