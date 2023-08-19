#pragma once
#include <cstdint>
#include "ECalloutActions.hpp"
#include "UFXAutoTriggerCognitionStimuliTest.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerCognitionStimuliTestAnyCalloutAction : public UFXAutoTriggerCognitionStimuliTest {
public:
    TArray<ECalloutActions> CalloutActions; // 0x28
    static UFXAutoTriggerCognitionStimuliTestAnyCalloutAction* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
