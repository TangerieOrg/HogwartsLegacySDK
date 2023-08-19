#pragma once
#include <cstdint>
#include "UGeometryCacheTrack.hpp"
class UGeometryCacheCodecBase;
#pragma pack(push, 1)
class UGeometryCacheTrackStreamable : public UGeometryCacheTrack {
public:
    UGeometryCacheCodecBase* Codec; // 0x58
    char pad_60[0x68];
    float StartSampleTime; // 0xc8
    char pad_cc[0xc];
    static UGeometryCacheTrackStreamable* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
