#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
#pragma pack(push, 1)
class UAvaAudioLowBPLibrary : public UBlueprintFunctionLibrary {
public:
    static UAvaAudioLowBPLibrary* StaticClass();
    static float AvaAudioLowSampleFunction(float Param);
}; // Size: 0x28
#pragma pack(pop)
