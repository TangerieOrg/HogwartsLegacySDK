#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
#pragma pack(push, 1)
class UVOIPStatics : public UBlueprintFunctionLibrary {
public:
    static UVOIPStatics* StaticClass();
    static void SetMicThreshold(float InThreshold);
}; // Size: 0x28
#pragma pack(pop)
