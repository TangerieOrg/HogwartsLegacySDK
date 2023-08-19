#pragma once
#include <cstdint>
#include "UEditableGameplayTagQueryExpression.hpp"
#pragma pack(push, 1)
class UEditableGameplayTagQueryExpression_AllExprMatch : public UEditableGameplayTagQueryExpression {
public:
    TArray<UEditableGameplayTagQueryExpression*> Expressions; // 0x28
    static UEditableGameplayTagQueryExpression_AllExprMatch* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
