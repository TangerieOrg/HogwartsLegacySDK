#pragma once
#include <cstdint>
#include "EAnimSpeedType\Type.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblSetAnimSpeedTypeTask : public UAblAbilityTask {
public:
    EAnimSpeedType::Type AnimSpeedType; // 0x70
    char pad_71[0x7];
    static UAblSetAnimSpeedTypeTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
