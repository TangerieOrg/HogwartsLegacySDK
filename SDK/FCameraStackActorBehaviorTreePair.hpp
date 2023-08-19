#pragma once
#include <cstdint>
class UBehaviorTreeComponent;
class UBlackboardComponent;
#pragma pack(push, 1)
struct FCameraStackActorBehaviorTreePair {
    UBehaviorTreeComponent* BTComponent; // 0x0
    UBlackboardComponent* BBComponent; // 0x8
}; // Size: 0x10
#pragma pack(pop)
