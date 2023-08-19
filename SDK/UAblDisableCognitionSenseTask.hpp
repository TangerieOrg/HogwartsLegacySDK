#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
class UClass;
#pragma pack(push, 1)
class UAblDisableCognitionSenseTask : public UAblAbilityTask {
public:
    TArray<UClass*> SensesToDisable; // 0x70
    bool bForce; // 0x80
    char pad_81[0x7];
    static UAblDisableCognitionSenseTask* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
