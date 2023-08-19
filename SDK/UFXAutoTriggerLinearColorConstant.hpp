#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "UFXAutoTriggerLinearColor.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerLinearColorConstant : public UFXAutoTriggerLinearColor {
public:
    FLinearColor Color; // 0x28
    static UFXAutoTriggerLinearColorConstant* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
