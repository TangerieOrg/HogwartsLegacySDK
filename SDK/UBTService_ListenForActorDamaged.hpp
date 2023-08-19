#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UBTService.hpp"
#pragma pack(push, 1)
class UBTService_ListenForActorDamaged : public UBTService {
public:
    FBlackboardKeySelector InstigatorKey; // 0x70
    FBlackboardKeySelector VictimKey; // 0x98
    FBlackboardKeySelector ResultKey; // 0xc0
    bool bResetResultOnActivation; // 0xe8
    bool bResetResultOnDeactivation; // 0xe9
    bool bStopListeningAfterFirstSuccess; // 0xea
    char pad_eb[0x15];
    static UBTService_ListenForActorDamaged* StaticClass();
}; // Size: 0x100
#pragma pack(pop)
