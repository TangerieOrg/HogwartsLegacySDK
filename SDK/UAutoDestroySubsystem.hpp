#pragma once
#include <cstdint>
#include "EEndPlayReason\Type.hpp"
#include "UTickableWorldSubsystem.hpp"
class AActor;
#pragma pack(push, 1)
class UAutoDestroySubsystem : public UTickableWorldSubsystem {
public:
    TArray<AActor*> ActorsToPoll; // 0x40
    static UAutoDestroySubsystem* StaticClass();
    void OnActorEndPlay(AActor* Actor, EEndPlayReason::Type EndPlayReason);
}; // Size: 0x50
#pragma pack(pop)
