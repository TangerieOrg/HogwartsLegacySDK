#pragma once
#include <cstdint>
#include "UAISense.hpp"
class UClass;
class UAIPerceptionComponent;
class UAISenseEvent;
class AActor;
class APawn;
#pragma pack(push, 1)
class UAISense_Blueprint : public UAISense {
public:
    UClass* ListenerDataType; // 0x80
    TArray<UAIPerceptionComponent*> ListenerContainer; // 0x88
    TArray<UAISenseEvent*> UnprocessedEvents; // 0x98
    static UAISense_Blueprint* StaticClass();
    float OnUpdate(TArray<UAISenseEvent*>& EventsToProcess);
    void OnListenerUpdated(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent);
    void OnListenerUnregistered(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent);
    void OnListenerRegistered(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent);
    void K2_OnNewPawn(APawn* NewPawn);
    void GetAllListenerComponents(TArray<UAIPerceptionComponent*>& ListenerComponents);
    void GetAllListenerActors(TArray<AActor*>& ListenerActors);
}; // Size: 0xa8
#pragma pack(pop)
