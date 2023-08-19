#pragma once
#include <cstdint>
#include "USceneAction_ExternalRenderingCutBase.hpp"
#pragma pack(push, 1)
class USceneAction_ExternalRenderingCut : public USceneAction_ExternalRenderingCutBase {
public:
    int32_t RenderingCuts; // 0x88
    char pad_8c[0x4];
    static USceneAction_ExternalRenderingCut* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
