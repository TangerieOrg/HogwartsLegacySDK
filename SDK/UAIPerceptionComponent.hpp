#pragma once
#include <cstdint>
#include "EEndPlayReason\Type.hpp"
#include "UActorComponent.hpp"
class UAISenseConfig;
class UClass;
class AAIController;
class AActor;
struct FActorPerceptionBlueprintInfo;
#pragma pack(push, 1)
class UAIPerceptionComponent : public UActorComponent {
public:
    TArray<UAISenseConfig*> SensesConfig; // 0xc8
    UClass* DominantSense; // 0xd8
    char pad_e0[0x10];
    AAIController* AIOwner; // 0xf0
    char pad_f8[0xb0];
    static UAIPerceptionComponent* StaticClass();
    void SetSenseEnabled(UClass* SenseClass, bool bEnable);
    void RequestStimuliListenerUpdate();
    void OnOwnerEndPlay(AActor* Actor, EEndPlayReason::Type EndPlayReason);
    void GetPerceivedHostileActorsBySense(UClass* SenseToUse, TArray<AActor*>& OutActors);
    void GetPerceivedHostileActors(TArray<AActor*>& OutActors);
    void GetPerceivedActors(UClass* SenseToUse, TArray<AActor*>& OutActors);
    void GetKnownPerceivedActors(UClass* SenseToUse, TArray<AActor*>& OutActors);
    void GetCurrentlyPerceivedActors(UClass* SenseToUse, TArray<AActor*>& OutActors);
    bool GetActorsPerception(AActor* Actor, FActorPerceptionBlueprintInfo& Info);
    void ForgetAll();
}; // Size: 0x1a8
#pragma pack(pop)
