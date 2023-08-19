#pragma once
#include <cstdint>
#include "USceneRigProvider.hpp"
#pragma pack(push, 1)
class USceneRig_ByStat : public USceneRigProvider {
public:
    FName StatName; // 0x28
    char pad_30[0x50];
    static USceneRig_ByStat* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
