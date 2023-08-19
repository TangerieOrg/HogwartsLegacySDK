#pragma once
#include <cstdint>
#include "USceneRigActionBase.hpp"
class UTransformProvider;
#pragma pack(push, 1)
class USceneAction_WorldBaseHeight : public USceneRigActionBase {
public:
    float WorldBaseHeightMeters; // 0x88
    int32_t Affects; // 0x8c
    UTransformProvider* RelativeTo; // 0x90
    float Priority; // 0x98
    bool bPreviewOnly; // 0x9c
    char pad_9d[0x3];
    static USceneAction_WorldBaseHeight* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
