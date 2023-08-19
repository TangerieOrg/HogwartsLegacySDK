#pragma once
#include <cstdint>
#include "EContextTaskOperationType\Type.hpp"
#include "FInputContextWithType.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UablInputContextTask : public UAblAbilityTask {
public:
    TArray<FInputContextWithType> Contexts; // 0x70
    EContextTaskOperationType::Type ContextTaskOperation; // 0x80
    bool bOnlyDoOperationDuringCombatMode; // 0x81
    bool bOnlyDoOperationInNonCombatMode; // 0x82
    bool bIgnoreLeafNodeSwitch; // 0x83
    char pad_84[0x4];
    static UablInputContextTask* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
