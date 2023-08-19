#pragma once
#include <cstdint>
#include "APawn.hpp"
class UPawnMovementComponent;
class USphereComponent;
class UStaticMeshComponent;
#pragma pack(push, 1)
class ADefaultPawn : public APawn {
public:
    float BaseTurnRate; // 0x2a8
    float BaseLookUpRate; // 0x2ac
    UPawnMovementComponent* MovementComponent; // 0x2b0
    USphereComponent* CollisionComponent; // 0x2b8
    UStaticMeshComponent* MeshComponent; // 0x2c0
    uint8_t bAddDefaultMovementBindings : 1; // 0x2c8
    uint8_t pad_bitfield_2c8_1 : 7;
    char pad_2c9[0x7];
    static ADefaultPawn* StaticClass();
    void TurnAtRate(float Rate);
    void MoveUp_World(float Val);
    void MoveRight(float Val);
    void MoveForward(float Val);
    void LookUpAtRate(float Rate);
}; // Size: 0x2d0
#pragma pack(pop)
