#pragma once
#include <cstdint>
#include "AActor.hpp"
class UCapsuleComponent;
class USkeletalMeshComponent;
class AFlyingStairsChain;
#pragma pack(push, 1)
class AFlyingStairs : public AActor {
public:
    UCapsuleComponent* FlyingStairsArea; // 0x248
    USkeletalMeshComponent* CloudMesh; // 0x250
    float TimeForStairsToStayAtHeightDuringMovement; // 0x258
    char pad_25c[0x4];
    TArray<AFlyingStairsChain*> FlyingStairsChain; // 0x260
    float TimeForRandomlyBuildingStair; // 0x270
    char pad_274[0x34];
    static AFlyingStairs* StaticClass();
    void DestroyRandomStairChain();
    void BuildRandomStairChain();
}; // Size: 0x2a8
#pragma pack(pop)
