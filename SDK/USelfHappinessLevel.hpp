#pragma once
#include <cstdint>
#include "ECreatureHappinessLevel.hpp"
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class USelfHappinessLevel : public UQualifierConsideration {
public:
    ECreatureHappinessLevel HappinessLevel; // 0x28
    char pad_29[0x7];
    static USelfHappinessLevel* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
