#pragma once
#include <cstdint>
#include "UBTTaskNode.hpp"
class USoundCue;
#pragma pack(push, 1)
class UBTTask_PlaySound : public UBTTaskNode {
public:
    USoundCue* SoundToPlay; // 0x70
    static UBTTask_PlaySound* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
