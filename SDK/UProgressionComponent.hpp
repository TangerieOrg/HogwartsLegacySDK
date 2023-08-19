#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
class UPT_Progression;
#pragma pack(push, 1)
class UProgressionComponent : public UActorComponent {
public:
    UPT_Progression* m_progression; // 0xc8
    char pad_d0[0x50];
    static UProgressionComponent* StaticClass();
}; // Size: 0x120
#pragma pack(pop)
