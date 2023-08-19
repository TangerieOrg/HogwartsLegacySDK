#pragma once
#include <cstdint>
#include "UBTT_Camera_Base.hpp"
class UCameraStackSettings;
#pragma pack(push, 1)
class UBTT_Camera_BlendToStackBase : public UBTT_Camera_Base {
public:
    UCameraStackSettings* StackSettings; // 0x70
    bool bReuseBehaviorOnReactivate; // 0x78
    char pad_79[0x7];
    static UBTT_Camera_BlendToStackBase* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
