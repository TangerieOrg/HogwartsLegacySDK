#pragma once
#include <cstdint>
#include "UFXAutoTriggerCognitionStimuliTest.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerCognitionStimuliTestHasSenseFromList : public UFXAutoTriggerCognitionStimuliTest {
public:
    TArray<void*> Senses; // 0x28
    static UFXAutoTriggerCognitionStimuliTestHasSenseFromList* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
