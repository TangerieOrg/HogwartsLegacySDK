#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ELineTraceTestActorCollisionChannel.hpp"
#include "ELineTraceTestActorObjectTypeQuery.hpp"
#include "ELineTraceTestActorQueryMobilityType.hpp"
#include "ELineTraceTestActorTraceType.hpp"
#pragma pack(push, 1)
class ALineTraceTestActor : public AActor {
public:
    float TraceLength; // 0x248
    bool bTraceComplex; // 0x24c
    ELineTraceTestActorQueryMobilityType QueryMobilityType; // 0x24d
    ELineTraceTestActorTraceType LineTraceBy; // 0x24e
    ELineTraceTestActorCollisionChannel SelectedChannel; // 0x24f
    ELineTraceTestActorObjectTypeQuery SelectedObjectType; // 0x250
    char pad_251[0x3];
    FName SelectedProfileName; // 0x254
    char pad_25c[0x4];
    static ALineTraceTestActor* StaticClass();
}; // Size: 0x260
#pragma pack(pop)
