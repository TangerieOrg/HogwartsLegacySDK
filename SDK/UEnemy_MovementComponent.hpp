#pragma once
#include <cstdint>
#include "FNavAgent.hpp"
#include "FVector.hpp"
#include "UNPC_MovementComponent.hpp"
#pragma pack(push, 1)
class UEnemy_MovementComponent : public UNPC_MovementComponent {
public:
    char pad_ff0[0x8];
    FNavAgent NavAgent; // 0xff8
    char pad_1000[0x10];
    static UEnemy_MovementComponent* StaticClass();
    void EnableDirectionLockModifier(FVector Direction);
    void DisableDirectionLockModifier();
}; // Size: 0x1010
#pragma pack(pop)
