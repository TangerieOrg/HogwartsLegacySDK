#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
class UBlackboardComponent;
class AAIController;
#pragma pack(push, 1)
class UBrainComponent : public UActorComponent {
public:
    char pad_c8[0x8];
    UBlackboardComponent* BlackboardComp; // 0xd0
    AAIController* AIOwner; // 0xd8
    char pad_e0[0x40];
    static UBrainComponent* StaticClass();
    void StopLogic(FString Reason);
    void StartLogic();
    void RestartLogic();
    bool IsRunning();
    bool IsPaused();
}; // Size: 0x120
#pragma pack(pop)
