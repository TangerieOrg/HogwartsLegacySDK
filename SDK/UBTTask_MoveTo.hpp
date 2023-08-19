#pragma once
#include <cstdint>
#include "UBTTask_BlackboardBase.hpp"
class UClass;
#pragma pack(push, 1)
class UBTTask_MoveTo : public UBTTask_BlackboardBase {
public:
    float AcceptableRadius; // 0x98
    char pad_9c[0x4];
    UClass* FilterClass; // 0xa0
    float ObservedBlackboardValueTolerance; // 0xa8
    uint8_t bObserveBlackboardValue : 1; // 0xac
    uint8_t bAllowStrafe : 1; // 0xac
    uint8_t bAllowPartialPath : 1; // 0xac
    uint8_t bTrackMovingGoal : 1; // 0xac
    uint8_t bProjectGoalLocation : 1; // 0xac
    uint8_t bReachTestIncludesAgentRadius : 1; // 0xac
    uint8_t bReachTestIncludesGoalRadius : 1; // 0xac
    uint8_t bStopOnOverlap : 1; // 0xac
    uint8_t bStopOnOverlapNeedsUpdate : 1; // 0xad
    uint8_t pad_bitfield_ad_1 : 7;
    char pad_ae[0x2];
    static UBTTask_MoveTo* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
