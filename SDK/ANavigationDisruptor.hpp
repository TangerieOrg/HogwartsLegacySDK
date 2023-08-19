#pragma once
#include <cstdint>
#include "ATriggerBox.hpp"
class AActor;
#pragma pack(push, 1)
class ANavigationDisruptor : public ATriggerBox {
public:
    char pad_250[0x50];
    static ANavigationDisruptor* StaticClass();
    void OnEndActorOverlap(AActor* SelfActor, AActor* Other);
    void OnBeginActorOverlap(AActor* SelfActor, AActor* Other);
}; // Size: 0x2a0
#pragma pack(pop)
