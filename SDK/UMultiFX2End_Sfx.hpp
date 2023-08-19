#pragma once
#include <cstdint>
#include "UFXEnd.hpp"
class UAkAudioEvent;
#pragma pack(push, 1)
class UMultiFX2End_Sfx : public UFXEnd {
public:
    UAkAudioEvent* SFX; // 0x28
    bool bPlayOnExistingAkComponent; // 0x30
    bool bPlayAtLocation; // 0x31
    char pad_32[0x6];
    static UMultiFX2End_Sfx* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
