#pragma once
#include <cstdint>
#include "UAblChannelingBase.hpp"
#pragma pack(push, 1)
class UAblChannelingInputConditional : public UAblChannelingBase {
public:
    TArray<FName> m_InputActions; // 0x30
    char pad_40[0x10];
    static UAblChannelingInputConditional* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
