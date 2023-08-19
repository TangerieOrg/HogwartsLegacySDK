#pragma once
#include <cstdint>
#include "UFXAutoTriggerBool.hpp"
class UFXAutoTriggerCognitionStimuliTest;
#pragma pack(push, 1)
class UFXAutoTriggerBoolCognitionStimuliTest : public UFXAutoTriggerBool {
public:
    UFXAutoTriggerCognitionStimuliTest* Test; // 0x28
    static UFXAutoTriggerBoolCognitionStimuliTest* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
