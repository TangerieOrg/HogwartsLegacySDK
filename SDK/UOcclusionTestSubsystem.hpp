#pragma once
#include <cstdint>
#include "UGameInstanceSubsystem.hpp"
#pragma pack(push, 1)
class UOcclusionTestSubsystem : public UGameInstanceSubsystem {
public:
    char pad_30[0x88];
    static UOcclusionTestSubsystem* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
