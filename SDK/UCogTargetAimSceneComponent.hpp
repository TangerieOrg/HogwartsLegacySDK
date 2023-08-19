#pragma once
#include <cstdint>
#include "UCogTargetSceneComponent.hpp"
#pragma pack(push, 1)
class UCogTargetAimSceneComponent : public UCogTargetSceneComponent {
public:
    float Timer; // 0x230
    char pad_234[0x1c];
    static UCogTargetAimSceneComponent* StaticClass();
    void TimerExpired();
}; // Size: 0x250
#pragma pack(pop)
