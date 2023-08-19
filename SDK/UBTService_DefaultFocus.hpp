#pragma once
#include <cstdint>
#include "UBTService_BlackboardBase.hpp"
#pragma pack(push, 1)
class UBTService_DefaultFocus : public UBTService_BlackboardBase {
public:
    uint8_t FocusPriority; // 0x98
    char pad_99[0x7];
    static UBTService_DefaultFocus* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
