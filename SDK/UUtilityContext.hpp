#pragma once
#include <cstdint>
#include "UObject.hpp"
class AActor;
class UBehaviorTreeComponent;
class UBlackboardComponent;
#pragma pack(push, 1)
class UUtilityContext : public UObject {
public:
    AActor* SelfActor; // 0x28
    UBehaviorTreeComponent* SelfBehaviorTree; // 0x30
    UBlackboardComponent* SelfBlackboard; // 0x38
    AActor* OptionActor; // 0x40
    TArray<AActor*> OptionActors; // 0x48
    char pad_58[0x10];
    TArray<AActor*> PerceivedActors; // 0x68
    char pad_78[0xa0];
    static UUtilityContext* StaticClass();
}; // Size: 0x118
#pragma pack(pop)
