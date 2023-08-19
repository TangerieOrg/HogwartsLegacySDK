#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UAblChannelingBase : public UObject {
public:
    bool m_Negate; // 0x28
    char pad_29[0x7];
    static UAblChannelingBase* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
