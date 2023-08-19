#pragma once
#include <cstdint>
#include "UAkAssetBase.hpp"
class UAkAudioBank;
#pragma pack(push, 1)
class UAkAuxBus : public UAkAssetBase {
public:
    UAkAudioBank* RequiredBank; // 0x50
    static UAkAuxBus* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
