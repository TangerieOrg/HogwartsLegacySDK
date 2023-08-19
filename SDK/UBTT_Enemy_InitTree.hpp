#pragma once
#include <cstdint>
#include "EEnemy_Ability.hpp"
#include "EEnemy_InitTreeTimeoutAction.hpp"
#include "FGameplayTag.hpp"
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTT_Enemy_InitTree : public UBTTaskNode {
public:
    FGameplayTag Tree; // 0x70
    bool bForceEntry; // 0x78
    char pad_79[0x7];
    TArray<EEnemy_Ability> AbilityList; // 0x80
    float Timeout; // 0x90
    EEnemy_InitTreeTimeoutAction TimeoutAction; // 0x94
    bool AbortMove; // 0x95
    char pad_96[0x2];
    static UBTT_Enemy_InitTree* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
