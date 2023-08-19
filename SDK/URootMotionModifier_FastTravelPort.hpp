#pragma once
#include <cstdint>
#include "URootMotionModifier.hpp"
#pragma pack(push, 1)
class URootMotionModifier_FastTravelPort : public URootMotionModifier {
public:
    TArray<void*> TravelerComponents; // 0x50
    TArray<void*> PortalComponents; // 0x60
    float ElapsedTime; // 0x70
    char pad_74[0x4];
    static URootMotionModifier_FastTravelPort* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
