#pragma once
#include <cstdint>
#include "UFXAutoTriggerCognitionStimuliTest.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerCognitionStimuliTestNot : public UFXAutoTriggerCognitionStimuliTest {
public:
    UFXAutoTriggerCognitionStimuliTest* Test; // 0x28
    static UFXAutoTriggerCognitionStimuliTestNot* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
