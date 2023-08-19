#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UAutomationEnvironment : public UObject {
public:
    TArray<FString> EnvironmentSettings; // 0x28
    char pad_38[0x58];
    static UAutomationEnvironment* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
