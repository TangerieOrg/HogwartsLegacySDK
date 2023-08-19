#pragma once
#include <cstdint>
#include "FRigControlValueStorage.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigControlValue {
    FRigControlValueStorage FloatStorage; // 0x0
    char pad_44[0xc];
    FTransform Storage; // 0x50
}; // Size: 0x80
#pragma pack(pop)
