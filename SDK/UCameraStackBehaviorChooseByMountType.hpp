#pragma once
#include <cstdint>
#include "UCameraStackBehavior.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorChooseByMountType : public UCameraStackBehavior {
public:
    UCameraStackBehavior* DefaultBehavior; // 0x50
    char pad_58[0x50];
    static UCameraStackBehaviorChooseByMountType* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
