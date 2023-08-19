#pragma once
#include <cstdint>
#include "UDeveloperSettings.hpp"
#pragma pack(push, 1)
class UMoviePipelineInProcessExecutorSettings : public UDeveloperSettings {
public:
    bool bCloseEditor; // 0x38
    char pad_39[0x7];
    FString AdditionalCommandLineArguments; // 0x40
    FString InheritedCommandLineArguments; // 0x50
    int32_t InitialDelayFrameCount; // 0x60
    char pad_64[0x4];
    static UMoviePipelineInProcessExecutorSettings* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
