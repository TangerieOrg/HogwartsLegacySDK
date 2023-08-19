#pragma once
#include <cstdint>
#include "ECreatureFleeFlyingOption.hpp"
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class USelfCreatureFleeFlyingConsideration : public UQualifierConsideration {
public:
    ECreatureFleeFlyingOption FleeFlyingOption; // 0x28
    char pad_29[0x7];
    static USelfCreatureFleeFlyingConsideration* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
