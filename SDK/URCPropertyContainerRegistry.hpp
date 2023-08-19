#pragma once
#include <cstdint>
#include "UEngineSubsystem.hpp"
#pragma pack(push, 1)
class URCPropertyContainerRegistry : public UEngineSubsystem {
public:
    char pad_30[0x50];
    static URCPropertyContainerRegistry* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
