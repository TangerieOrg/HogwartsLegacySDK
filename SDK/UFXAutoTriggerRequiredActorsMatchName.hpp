#pragma once
#include <cstdint>
#include "UFXAutoTriggerRequiredActorsMatchBase.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerRequiredActorsMatchName : public UFXAutoTriggerRequiredActorsMatchBase {
public:
    FString STARTSWITH; // 0x28
    bool bIgnoreCase; // 0x38
    char pad_39[0x7];
    static UFXAutoTriggerRequiredActorsMatchName* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
