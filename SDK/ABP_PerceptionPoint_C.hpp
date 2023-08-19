#pragma once
#include <cstdint>
#include "AEnemy_PerceptionPoint.hpp"
class UBillboardComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_PerceptionPoint_C : public AEnemy_PerceptionPoint {
public:
    UBillboardComponent* Billboard; // 0x360
    USceneComponent* Scene; // 0x368
    static ABP_PerceptionPoint_C* StaticClass();
}; // Size: 0x370
#pragma pack(pop)
