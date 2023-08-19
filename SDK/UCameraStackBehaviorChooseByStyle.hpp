#pragma once
#include <cstdint>
#include "UCameraStackBehavior.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorChooseByStyle : public UCameraStackBehavior {
public:
    UCameraStackBehavior* DefaultBehavior; // 0x50
    char pad_58[0x50];
    static UCameraStackBehaviorChooseByStyle* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
