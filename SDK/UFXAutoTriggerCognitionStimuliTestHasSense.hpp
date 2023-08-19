#pragma once
#include <cstdint>
#include "UFXAutoTriggerCognitionStimuliTest.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerCognitionStimuliTestHasSense : public UFXAutoTriggerCognitionStimuliTest {
public:
    char pad_28[0x28];
    static UFXAutoTriggerCognitionStimuliTestHasSense* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
