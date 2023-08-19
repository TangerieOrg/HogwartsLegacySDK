#pragma once
#include <cstdint>
#include "UAblAnimationTagChooser.hpp"
#pragma pack(push, 1)
class UAblAnimationTagChooser_EnemyDirectionBased : public UAblAnimationTagChooser {
public:
    bool bCloseBackAngle; // 0x50
    char pad_51[0x7];
    static UAblAnimationTagChooser_EnemyDirectionBased* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
