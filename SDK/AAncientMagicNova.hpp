#pragma once
#include <cstdint>
#include "AActor.hpp"
class UObject;
#pragma pack(push, 1)
class AAncientMagicNova : public AActor {
public:
    float ExpandSpeed; // 0x248
    float MaxExpandSize; // 0x24c
    char pad_250[0x18];
    static AAncientMagicNova* StaticClass();
    void SetNotifyObject(UObject* Object);
}; // Size: 0x268
#pragma pack(pop)
