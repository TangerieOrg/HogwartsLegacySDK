#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "USocialAgentComponent.hpp"
class AActor;
struct FHitResult;
#pragma pack(push, 1)
class USocialAgentPawnComponent : public USocialAgentComponent {
public:
    char pad_110[0x8];
    int32_t m_avoidLOD; // 0x118
    char pad_11c[0x4];
    static USocialAgentPawnComponent* StaticClass();
    void OnActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit);
}; // Size: 0x120
#pragma pack(pop)
