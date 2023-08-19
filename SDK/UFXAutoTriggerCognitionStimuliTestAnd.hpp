#pragma once
#include <cstdint>
#include "UFXAutoTriggerCognitionStimuliTest.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerCognitionStimuliTestAnd : public UFXAutoTriggerCognitionStimuliTest {
public:
    TArray<UFXAutoTriggerCognitionStimuliTest*> Tests; // 0x28
    static UFXAutoTriggerCognitionStimuliTestAnd* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
