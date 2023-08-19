#pragma once
#include <cstdint>
#include "AActor.hpp"
#pragma pack(push, 1)
class ALODActorRotationManager : public AActor {
public:
    static ALODActorRotationManager* StaticClass();
    TArray<AActor*> FilterValidActorRef(TArray<void*> ActorRefList);
    void CheckLOD0ActorRefValid();
    void CheckAnyActorRefValid(TArray<void*> ActorRefList, bool& bTrue);
}; // Size: 0x248
#pragma pack(pop)
