#pragma once
#include <cstdint>
#include "UBTTaskNode.hpp"
class UClass;
#pragma pack(push, 1)
class UBTT_PlayCameraShake : public UBTTaskNode {
public:
    UClass* CameraShake; // 0x70
    float Scale; // 0x78
    char pad_7c[0x4];
    static UBTT_PlayCameraShake* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
