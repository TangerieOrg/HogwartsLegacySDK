#pragma once
#include <cstdint>
#include "ETrollSwingDirection.hpp"
#include "UAnimNotify.hpp"
#pragma pack(push, 1)
class UTrollSwingDirectionAnimNotify : public UAnimNotify {
public:
    ETrollSwingDirection SwingDirection; // 0x38
    char pad_39[0x7];
    static UTrollSwingDirectionAnimNotify* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
