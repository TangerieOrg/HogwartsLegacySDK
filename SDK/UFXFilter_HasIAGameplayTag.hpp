#pragma once
#include <cstdint>
#include "EMultiFXActor.hpp"
#include "FGameplayTag.hpp"
#include "UFXFilter.hpp"
#pragma pack(push, 1)
class UFXFilter_HasIAGameplayTag : public UFXFilter {
public:
    EMultiFXActor Actor; // 0x30
    char pad_31[0x3];
    FGameplayTag GameplayTag; // 0x34
    char pad_3c[0x4];
    static UFXFilter_HasIAGameplayTag* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
