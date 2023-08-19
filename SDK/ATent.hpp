#pragma once
#include <cstdint>
#include "AActor.hpp"
#pragma pack(push, 1)
class ATent : public AActor {
public:
    int32_t PropIndex; // 0x248
    char pad_24c[0x4];
    static ATent* StaticClass();
    void SetTentMesh();
}; // Size: 0x250
#pragma pack(pop)
