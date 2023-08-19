#pragma once
#include <cstdint>
#include "USubsystem.hpp"
#pragma pack(push, 1)
class UGameInstanceSubsystem : public USubsystem {
public:
    static UGameInstanceSubsystem* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
