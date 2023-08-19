#pragma once
#include <cstdint>
#include "UAblChannelingBase.hpp"
#pragma pack(push, 1)
class UAblChannelingVelocityConditional : public UAblChannelingBase {
public:
    float m_VelocityThreshold; // 0x30
    bool m_UseXYSpeed; // 0x34
    char pad_35[0x3];
    static UAblChannelingVelocityConditional* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
