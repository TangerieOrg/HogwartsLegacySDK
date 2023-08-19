#pragma once
#include <cstdint>
#include "UBTT_Camera_BlendToStackBase.hpp"
#pragma pack(push, 1)
class UBTT_Camera_BlendToStack : public UBTT_Camera_BlendToStackBase {
public:
    float BlendInDuration; // 0x80
    float BlendOutDuration; // 0x84
    bool bLazyBlendOut; // 0x88
    char pad_89[0x7];
    static UBTT_Camera_BlendToStack* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
