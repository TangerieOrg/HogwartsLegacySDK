#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class UToolType : public UActorComponent {
public:
    float m_autoEquipTimeout; // 0xc8
    char pad_cc[0x4];
    static UToolType* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
