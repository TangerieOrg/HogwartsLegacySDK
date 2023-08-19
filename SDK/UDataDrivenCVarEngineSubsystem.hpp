#pragma once
#include <cstdint>
#include "UEngineSubsystem.hpp"
#pragma pack(push, 1)
class UDataDrivenCVarEngineSubsystem : public UEngineSubsystem {
public:
    char pad_30[0x10];
    static UDataDrivenCVarEngineSubsystem* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
