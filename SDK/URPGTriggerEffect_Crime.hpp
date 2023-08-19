#pragma once
#include <cstdint>
#include "URPGTriggerEffect_Base.hpp"
#pragma pack(push, 1)
class URPGTriggerEffect_Crime : public URPGTriggerEffect_Base {
public:
    float SeverityLevel; // 0x40
    char pad_44[0x4];
    static URPGTriggerEffect_Crime* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
