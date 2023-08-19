#pragma once
#include <cstdint>
#include "FGameplayTag.hpp"
#include "UAblTaskCondition.hpp"
class UClass;
#pragma pack(push, 1)
class UAblTaskCondition_OppugnoProxy : public UAblTaskCondition {
public:
    UClass* OppugnoProxy; // 0x28
    float ProxyOppugnoWeight; // 0x30
    FGameplayTag DuelTechniqueEventTag; // 0x34
    char pad_3c[0x4];
    static UAblTaskCondition_OppugnoProxy* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
