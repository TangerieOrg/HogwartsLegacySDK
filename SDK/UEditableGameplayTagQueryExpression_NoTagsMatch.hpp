#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "UEditableGameplayTagQueryExpression.hpp"
#pragma pack(push, 1)
class UEditableGameplayTagQueryExpression_NoTagsMatch : public UEditableGameplayTagQueryExpression {
public:
    FGameplayTagContainer Tags; // 0x28
    static UEditableGameplayTagQueryExpression_NoTagsMatch* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
