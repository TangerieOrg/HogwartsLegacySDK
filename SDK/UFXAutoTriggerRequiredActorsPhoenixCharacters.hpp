#pragma once
#include <cstdint>
#include "UFXAutoTriggerRequiredActorsBase.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerRequiredActorsPhoenixCharacters : public UFXAutoTriggerRequiredActorsBase {
public:
    bool bIncludePlayer; // 0x28
    char pad_29[0x7];
    static UFXAutoTriggerRequiredActorsPhoenixCharacters* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
