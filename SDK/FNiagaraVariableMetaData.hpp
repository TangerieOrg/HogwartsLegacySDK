#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "FNiagaraInputConditionMetadata.hpp"
#pragma pack(push, 1)
struct FNiagaraVariableMetaData {
    char pad_0[0x30];
    bool bAdvancedDisplay; // 0x30
    char pad_31[0x3];
    int32_t EditorSortPriority; // 0x34
    bool bInlineEditConditionToggle; // 0x38
    char pad_39[0x7];
    FNiagaraInputConditionMetadata EditCondition; // 0x40
    FNiagaraInputConditionMetadata VisibleCondition; // 0x58
    char pad_70[0x50];
    FName ParentAttribute; // 0xc0
    FGuid VariableGuid; // 0xc8
    bool bIsStaticSwitch; // 0xd8
    char pad_d9[0x3];
    int32_t StaticSwitchDefaultValue; // 0xdc
}; // Size: 0xe0
#pragma pack(pop)
