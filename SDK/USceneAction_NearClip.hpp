#pragma once
#include <cstdint>
#include "USceneRigActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_NearClip : public USceneRigActionBase {
public:
    float NearClip; // 0x88
    char pad_8c[0x4];
    static USceneAction_NearClip* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
