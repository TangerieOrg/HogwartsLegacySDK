#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FSpringFollowComponentSettings.hpp"
#include "FSwarmer.hpp"
#include "FVector2D.hpp"
#pragma pack(push, 1)
class ASpringFollowSwarmActor : public AActor {
public:
    FSpringFollowComponentSettings SwarmerSettings; // 0x248
    float RandomizeK; // 0x26c
    FVector2D SwarmRandomizeStart; // 0x270
    FVector2D SwarmRandomizeSpeed; // 0x278
    float SwarmRepulse; // 0x280
    float SwarmDistancePower; // 0x284
    FSpringFollowComponentSettings LeaderSettings; // 0x288
    FVector2D LeaderRandomizeStart; // 0x2ac
    FVector2D LeaderRandomizeSpeed; // 0x2b4
    float LeaderRepulse; // 0x2bc
    float LeaderDistancePower; // 0x2c0
    bool bSwarmAlignToVelocity; // 0x2c4
    bool bLeaderAlignToVelocity; // 0x2c5
    char pad_2c6[0x2];
    FSwarmer Leader; // 0x2c8
    TArray<FSwarmer> Swarmers; // 0x2f0
    static ASpringFollowSwarmActor* StaticClass();
    void Reset();
    void Generate();
}; // Size: 0x300
#pragma pack(pop)
