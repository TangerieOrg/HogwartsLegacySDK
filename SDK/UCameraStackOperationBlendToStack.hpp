#pragma once
#include <cstdint>
#include "UCameraStackOperationBase.hpp"
class UCameraStackSettings;
#pragma pack(push, 1)
class UCameraStackOperationBlendToStack : public UCameraStackOperationBase {
public:
    UCameraStackSettings* StackSettings; // 0x30
    float BlendInDuration; // 0x38
    float BlendOutDuration; // 0x3c
    bool bLazyBlendOut; // 0x40
    bool bReuseBehaviorOnReactivate; // 0x41
    char pad_42[0x6];
    static UCameraStackOperationBlendToStack* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
