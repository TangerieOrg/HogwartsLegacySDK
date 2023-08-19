#pragma once
#include <cstdint>
#include "ECalloutActions.hpp"
#include "UFXAutoTriggerCognitionStimuliTest.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerCognitionStimuliTestCalloutAction : public UFXAutoTriggerCognitionStimuliTest {
public:
    ECalloutActions CalloutAction; // 0x28
    char pad_29[0x7];
    static UFXAutoTriggerCognitionStimuliTestCalloutAction* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
