#pragma once
#include <cstdint>
#include "EEnemy_TagContainer.hpp"
#include "UAblAnimationTagChooser.hpp"
#pragma pack(push, 1)
class UAblAnimationTagChooser_Enemy : public UAblAnimationTagChooser {
public:
    EEnemy_TagContainer TagContainer; // 0x50
    char pad_51[0x7];
    static UAblAnimationTagChooser_Enemy* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
