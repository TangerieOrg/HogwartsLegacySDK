#pragma once
#include <cstdint>
#include "USceneAction_ConsoleRenderingVar.hpp"
#pragma pack(push, 1)
class USceneAction_DynamicShadowQualityScale : public USceneAction_ConsoleRenderingVar {
public:
    int32_t QualityScale; // 0x88
    char pad_8c[0x4];
    static USceneAction_DynamicShadowQualityScale* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
