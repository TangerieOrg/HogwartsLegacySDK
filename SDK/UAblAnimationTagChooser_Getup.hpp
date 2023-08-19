#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "UAblAnimationTagChooser.hpp"
#pragma pack(push, 1)
class UAblAnimationTagChooser_Getup : public UAblAnimationTagChooser {
public:
    TArray<FVector2D> AngleRanges; // 0x50
    static UAblAnimationTagChooser_Getup* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
