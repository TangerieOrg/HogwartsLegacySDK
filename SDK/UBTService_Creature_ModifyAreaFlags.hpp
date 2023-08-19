#pragma once
#include <cstdint>
#include "FOdcFlags.hpp"
#include "UBTService.hpp"
#pragma pack(push, 1)
class UBTService_Creature_ModifyAreaFlags : public UBTService {
public:
    bool bReplace; // 0x70
    char pad_71[0x3];
    FOdcFlags AreaUsageFlags; // 0x74
    static UBTService_Creature_ModifyAreaFlags* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
