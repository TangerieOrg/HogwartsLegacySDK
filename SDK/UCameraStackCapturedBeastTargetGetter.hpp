#pragma once
#include <cstdint>
#include "UCameraStackSecondaryTargetGetter.hpp"
#pragma pack(push, 1)
class UCameraStackCapturedBeastTargetGetter : public UCameraStackSecondaryTargetGetter {
public:
    char pad_60[0x8];
    static UCameraStackCapturedBeastTargetGetter* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
