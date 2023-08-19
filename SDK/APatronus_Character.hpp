#pragma once
#include <cstdint>
#include "AAble_Character.hpp"
class UAnimationComponent;
#pragma pack(push, 1)
class APatronus_Character : public AAble_Character {
public:
    float RootMotionTranslationScale; // 0x540
    char pad_544[0xc];
    static APatronus_Character* StaticClass();
}; // Size: 0x550
#pragma pack(pop)
