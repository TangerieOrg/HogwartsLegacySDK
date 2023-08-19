#pragma once
#include <cstdint>
#include "UAblChannelingBase.hpp"
#pragma pack(push, 1)
class UAblChannelingCustomConditional : public UAblChannelingBase {
public:
    FName m_EventName; // 0x30
    static UAblChannelingCustomConditional* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
