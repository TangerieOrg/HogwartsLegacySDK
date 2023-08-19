#pragma once
#include <cstdint>
#include "UModExtension.hpp"
#pragma pack(push, 1)
class URPGModExtensionNotify : public UModExtension {
public:
    FName ModAppliedMessage; // 0x28
    static URPGModExtensionNotify* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
