#pragma once
#include <cstdint>
#include "EStairsDirectionState\Type.hpp"
#include "UAblAnimationTagChooser.hpp"
#pragma pack(push, 1)
class UAblAnimationTagChooser_StairsAndSlopes : public UAblAnimationTagChooser {
public:
    EStairsDirectionState::Type StairsDirection; // 0x50
    char pad_51[0x7];
    static UAblAnimationTagChooser_StairsAndSlopes* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
