#pragma once
#include <cstdint>
#include "EMovementMode.hpp"
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class USelfCharacterMovementModeConsideration : public UQualifierConsideration {
public:
    EMovementMode MovementMode; // 0x28
    char pad_29[0x7];
    static USelfCharacterMovementModeConsideration* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
