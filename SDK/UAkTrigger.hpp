#pragma once
#include <cstdint>
#include "UAkAudioType.hpp"
#pragma pack(push, 1)
class UAkTrigger : public UAkAudioType {
public:
    static UAkTrigger* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
