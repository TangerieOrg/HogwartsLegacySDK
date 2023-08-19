#pragma once
#include <cstdint>
#include "UDynamicSubsystem.hpp"
#pragma pack(push, 1)
class UEngineSubsystem : public UDynamicSubsystem {
public:
    static UEngineSubsystem* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
