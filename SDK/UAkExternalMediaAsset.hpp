#pragma once
#include <cstdint>
#include "UAkMediaAsset.hpp"
#pragma pack(push, 1)
class UAkExternalMediaAsset : public UAkMediaAsset {
public:
    char pad_78[0x60];
    static UAkExternalMediaAsset* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
