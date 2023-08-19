#pragma once
#include <cstdint>
#include "UMoviePipelineSetting.hpp"
#pragma pack(push, 1)
class UMoviePipelineConsoleVariableSetting : public UMoviePipelineSetting {
public:
    char pad_48[0x50];
    TArray<FString> StartConsoleCommands; // 0x98
    TArray<FString> EndConsoleCommands; // 0xa8
    char pad_b8[0x10];
    static UMoviePipelineConsoleVariableSetting* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
