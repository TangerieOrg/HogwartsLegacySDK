#pragma once
#include <cstdint>
#include "UBTService.hpp"
#pragma pack(push, 1)
class UBTService_UtilityModify : public UBTService {
public:
    bool bPauseUtilityEvaulation; // 0x70
    char pad_71[0x7];
    static UBTService_UtilityModify* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
