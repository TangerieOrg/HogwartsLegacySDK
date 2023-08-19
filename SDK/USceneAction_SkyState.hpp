#pragma once
#include <cstdint>
#include "FSkyStateSmoothInOut.hpp"
#include "USceneRigActionBase.hpp"
class USkyStateOverride;
#pragma pack(push, 1)
class USceneAction_SkyState : public USceneRigActionBase {
public:
    USkyStateOverride* SkyStateOverride; // 0x88
    FSkyStateSmoothInOut SmoothInOut; // 0x90
    bool bPreviewOnly; // 0x98
    char pad_99[0x7];
    static USceneAction_SkyState* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
