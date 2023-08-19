#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class USceneRigSettings : public UObject {
public:
    float TestValue; // 0x28
    char pad_2c[0x4];
    static USceneRigSettings* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
