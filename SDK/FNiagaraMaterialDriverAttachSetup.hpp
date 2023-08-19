#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FNiagaraMaterialDriverAttachSetup {
    FName Point; // 0x0
    FVector Offset; // 0x8
    FRotator Rotation; // 0x14
}; // Size: 0x20
#pragma pack(pop)
