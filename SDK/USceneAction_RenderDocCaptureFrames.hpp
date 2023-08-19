#pragma once
#include <cstdint>
#include "USceneAction_ConsoleRenderingVar.hpp"
#pragma pack(push, 1)
class USceneAction_RenderDocCaptureFrames : public USceneAction_ConsoleRenderingVar {
public:
    int32_t Frames; // 0x88
    bool bCaptureInSceneRigEditor; // 0x8c
    char pad_8d[0x3];
    static USceneAction_RenderDocCaptureFrames* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
