#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UGeometryCacheTrack : public UObject {
public:
    float Duration; // 0x28
    char pad_2c[0x2c];
    static UGeometryCacheTrack* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
