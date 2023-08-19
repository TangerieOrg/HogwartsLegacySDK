#pragma once
#include <cstdint>
#include "FBox.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class UFoliageRemoverActorComponent : public UActorComponent {
public:
    FVector BoxSize; // 0xc8
    char pad_d4[0x54];
    static UFoliageRemoverActorComponent* StaticClass();
    void SetBoxSize(FVector& Size);
    void RespawnFoliage();
    void RemoveFoliage();
    FBox GetBoxInWorldSpace();
}; // Size: 0x128
#pragma pack(pop)
