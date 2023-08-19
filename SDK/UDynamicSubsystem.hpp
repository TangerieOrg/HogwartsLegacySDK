#pragma once
#include <cstdint>
#include "USubsystem.hpp"
#pragma pack(push, 1)
class UDynamicSubsystem : public USubsystem {
public:
    static UDynamicSubsystem* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
