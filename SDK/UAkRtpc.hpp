#pragma once
#include <cstdint>
#include "UAkAudioType.hpp"
#pragma pack(push, 1)
class UAkRtpc : public UAkAudioType {
public:
    static UAkRtpc* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
