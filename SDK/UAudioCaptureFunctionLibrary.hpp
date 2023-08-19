#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class UAudioCapture;
#pragma pack(push, 1)
class UAudioCaptureFunctionLibrary : public UBlueprintFunctionLibrary {
public:
    static UAudioCaptureFunctionLibrary* StaticClass();
    static UAudioCapture* CreateAudioCapture();
}; // Size: 0x28
#pragma pack(pop)
