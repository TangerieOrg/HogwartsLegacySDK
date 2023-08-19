#pragma once
#include <cstdint>
#include "UFXFilter.hpp"
#pragma pack(push, 1)
class UFXFilter_IsPlayer : public UFXFilter {
public:
    bool TreatPlayerMountAsPlayer; // 0x30
    char pad_31[0x7];
    static UFXFilter_IsPlayer* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
