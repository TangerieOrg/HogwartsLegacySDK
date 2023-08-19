#pragma once
#include <cstdint>
#include "EGlobalLightRigModLerpEasingType.hpp"
#include "UGlobalLightRigModLerpControl.hpp"
#pragma pack(push, 1)
class UGlobalLightRigModLerpEase : public UGlobalLightRigModLerpControl {
public:
    EGlobalLightRigModLerpEasingType Easing; // 0x30
    char pad_31[0x3];
    float BlendExp; // 0x34
    static UGlobalLightRigModLerpEase* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
