#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class UObject;
struct FAnimationBudgetAllocatorParameters;
#pragma pack(push, 1)
class UAnimationBudgetBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
    static UAnimationBudgetBlueprintLibrary* StaticClass();
    static void SetAnimationBudgetParameters(UObject* WorldContextObject, FAnimationBudgetAllocatorParameters& InParameters);
    static void EnableAnimationBudget(UObject* WorldContextObject, bool bEnabled);
}; // Size: 0x28
#pragma pack(pop)
