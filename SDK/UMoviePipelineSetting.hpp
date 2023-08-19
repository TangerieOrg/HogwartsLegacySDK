#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UMoviePipelineSetting : public UObject {
public:
    char pad_28[0x8];
    bool bEnabled; // 0x30
    char pad_31[0x17];
    static UMoviePipelineSetting* StaticClass();
    void BuildNewProcessCommandLine(FString& InOutUnrealURLParams, FString& InOutCommandLineArgs);
}; // Size: 0x48
#pragma pack(pop)
