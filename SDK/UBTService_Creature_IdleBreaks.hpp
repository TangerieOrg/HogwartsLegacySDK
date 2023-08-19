#pragma once
#include <cstdint>
#include "UBTService.hpp"
#pragma pack(push, 1)
class UBTService_Creature_IdleBreaks : public UBTService {
public:
    bool bCanUseIdleBreaks; // 0x70
    char pad_71[0x7];
    static UBTService_Creature_IdleBreaks* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
