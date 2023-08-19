#pragma once
#include <cstdint>
class UAkComponent;
#pragma pack(push, 1)
struct FInstancedMeshPositionalSource {
    int32_t Instance; // 0x0
    char pad_4[0x4];
    UAkComponent* SoundComponent; // 0x8
}; // Size: 0x10
#pragma pack(pop)
