#pragma once
#include <cstdint>
#include "FEnvironmentalGlobalsVectorOrColorName.hpp"
#include "UFXAutoTriggerLinearColor.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerLinearColorEnvironmentalGlobal : public UFXAutoTriggerLinearColor {
public:
    FEnvironmentalGlobalsVectorOrColorName EnvironmentalGlobal; // 0x28
    static UFXAutoTriggerLinearColorEnvironmentalGlobal* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
