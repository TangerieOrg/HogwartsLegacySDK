#pragma once
#include <cstdint>
#include "UFXAutoTriggerCognitionStimuliTest.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerCognitionStimuliTestOr : public UFXAutoTriggerCognitionStimuliTest {
public:
    TArray<UFXAutoTriggerCognitionStimuliTest*> Tests; // 0x28
    static UFXAutoTriggerCognitionStimuliTestOr* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
