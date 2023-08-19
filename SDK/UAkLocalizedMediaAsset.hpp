#pragma once
#include <cstdint>
#include "UAkMediaAsset.hpp"
#pragma pack(push, 1)
class UAkLocalizedMediaAsset : public UAkMediaAsset {
public:
    static UAkLocalizedMediaAsset* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
