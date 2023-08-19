#pragma once
#include <cstdint>
#include "UFXAutoTriggerBool.hpp"
class UClass;
#pragma pack(push, 1)
class UFXAutoTriggerBoolSkinFXActive : public UFXAutoTriggerBool {
public:
    UClass* Effect; // 0x28
    static UFXAutoTriggerBoolSkinFXActive* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
