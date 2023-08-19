#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FTableRowBase.hpp"
#include "FVector.hpp"
class UClass;
#pragma pack(push, 1)
struct FEnemyAIWeaponSocketData : public FTableRowBase {
    UClass* Weapon; // 0x8
    FName SocketName; // 0x10
    FVector Offset; // 0x18
    FRotator RotationOffset; // 0x24
}; // Size: 0x30
#pragma pack(pop)
