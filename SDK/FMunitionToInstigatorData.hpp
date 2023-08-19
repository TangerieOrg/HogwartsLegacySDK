#pragma once
#include <cstdint>
class AActor;
class AMunitionType_Base;
#pragma pack(push, 1)
struct FMunitionToInstigatorData {
    AActor* InstigatorPtr; // 0x0
    AActor* VictimPtr; // 0x8
    AMunitionType_Base* MunitionBasePtr; // 0x10
}; // Size: 0x18
#pragma pack(pop)
