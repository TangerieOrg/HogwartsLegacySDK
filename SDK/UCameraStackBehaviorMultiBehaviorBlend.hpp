#pragma once
#include <cstdint>
#include "UCameraStackBehaviorBlend.hpp"
class UCameraStackBehavior;
#pragma pack(push, 1)
class UCameraStackBehaviorMultiBehaviorBlend : public UCameraStackBehaviorBlend {
public:
    UCameraStackBehavior* FirstBehavior; // 0x1b8
    static UCameraStackBehaviorMultiBehaviorBlend* StaticClass();
    void Initialize(UCameraStackBehavior* InFirstBehavior);
}; // Size: 0x1c0
#pragma pack(pop)
