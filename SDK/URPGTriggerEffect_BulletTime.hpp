#pragma once
#include <cstdint>
#include "URPGTriggerEffect_Base.hpp"
#pragma pack(push, 1)
class URPGTriggerEffect_BulletTime : public URPGTriggerEffect_Base {
public:
    float Dilation; // 0x40
    float Duration; // 0x44
    bool bDoFixedCam; // 0x48
    char pad_49[0x7];
    static URPGTriggerEffect_BulletTime* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
