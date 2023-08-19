#pragma once
#include <cstdint>
#include "ELerpEasingType.hpp"
#include "ULightDirectionLerpControl.hpp"
#pragma pack(push, 1)
class ULightDirectionEase : public ULightDirectionLerpControl {
public:
    ELerpEasingType Easing; // 0x30
    char pad_31[0x3];
    float BlendExp; // 0x34
    static ULightDirectionEase* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
