#pragma once
#include <cstdint>
#include "USceneRigActionBase.hpp"
class UTimeOverrideBase;
#pragma pack(push, 1)
class USceneAction_TimeDate : public USceneRigActionBase {
public:
    UTimeOverrideBase* TimeOverride; // 0x88
    bool bPreviewOnly; // 0x90
    char pad_91[0x7];
    static USceneAction_TimeDate* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
