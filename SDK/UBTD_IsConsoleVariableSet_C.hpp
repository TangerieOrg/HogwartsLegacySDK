#pragma once
#include <cstdint>
#include "UBTDecorator_BlueprintBase.hpp"
class AActor;
#pragma pack(push, 1)
class UBTD_IsConsoleVariableSet_C : public UBTDecorator_BlueprintBase {
public:
    FString VariableName; // 0xa0
    static UBTD_IsConsoleVariableSet_C* StaticClass();
    bool PerformConditionCheck(AActor* OwnerActor, int32_t CallFunc_GetConsoleVariableIntValue_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
}; // Size: 0xb0
#pragma pack(pop)
