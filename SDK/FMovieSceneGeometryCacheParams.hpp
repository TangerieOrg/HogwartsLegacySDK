#pragma once
#include <cstdint>
#include "FFrameNumber.hpp"
#include "FSoftObjectPath.hpp"
class UGeometryCache;
#pragma pack(push, 1)
struct FMovieSceneGeometryCacheParams {
    UGeometryCache* GeometryCacheAsset; // 0x0
    FFrameNumber FirstLoopStartFrameOffset; // 0x8
    FFrameNumber StartFrameOffset; // 0xc
    FFrameNumber EndFrameOffset; // 0x10
    float PlayRate; // 0x14
    uint8_t bReverse : 1; // 0x18
    uint8_t pad_bitfield_18_1 : 7;
    char pad_19[0x3];
    float StartOffset; // 0x1c
    float EndOffset; // 0x20
    char pad_24[0x4];
    FSoftObjectPath GeometryCache; // 0x28
}; // Size: 0x40
#pragma pack(pop)
