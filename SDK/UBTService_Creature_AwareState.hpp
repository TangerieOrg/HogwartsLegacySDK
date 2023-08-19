#pragma once
#include <cstdint>
#include "ENPC_TargetAwareState.hpp"
#include "FBlackboardKeySelector.hpp"
#include "UBTService.hpp"
#pragma pack(push, 1)
class UBTService_Creature_AwareState : public UBTService {
public:
    ENPC_TargetAwareState SelectedAwareState; // 0x70
    char pad_71[0x7];
    FBlackboardKeySelector TargetActorKey; // 0x78
    bool bObserveBlackboardValue; // 0xa0
    char pad_a1[0x7];
    static UBTService_Creature_AwareState* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
