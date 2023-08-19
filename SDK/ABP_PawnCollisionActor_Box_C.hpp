#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FVector.hpp"
class UBillboardComponent;
class UBoxComponent;
#pragma pack(push, 1)
class ABP_PawnCollisionActor_Box_C : public AActor {
public:
    UBillboardComponent* Billboard; // 0x248
    UBoxComponent* CollisionBox; // 0x250
    FVector Box_Extents; // 0x258
    char pad_264[0x4];
    static ABP_PawnCollisionActor_Box_C* StaticClass();
    void UserConstructionScript0();
}; // Size: 0x268
#pragma pack(pop)
