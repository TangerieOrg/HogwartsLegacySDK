#pragma once
#include <cstdint>
class UObjectProvider;
#pragma pack(push, 1)
struct FSceneRigCameraParams {
    UObjectProvider* InitialCamera; // 0x0
    UObjectProvider* FinalCamera; // 0x8
    UObjectProvider* Camera; // 0x10
}; // Size: 0x18
#pragma pack(pop)
