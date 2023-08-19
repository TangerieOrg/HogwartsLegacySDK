#pragma once
#include <cstdint>
#include "UBudgeter.hpp"
#pragma pack(push, 1)
class USceneRigBudgeter : public UBudgeter {
public:
    char pad_40[0x28];
    static USceneRigBudgeter* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
