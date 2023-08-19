#pragma once
#include <cstdint>
#include "ESceneAction_PlaySceneRigInitializeType.hpp"
#include "FTimeRigOutputSymbol.hpp"
#include "USceneRigActionBase.hpp"
class USceneRigProvider;
#pragma pack(push, 1)
class USceneAction_PlaySceneRig : public USceneRigActionBase {
public:
    USceneRigProvider* SceneRigProvider; // 0x88
    ESceneAction_PlaySceneRigInitializeType Initialize; // 0x90
    char pad_91[0x7];
    FTimeRigOutputSymbol Started; // 0x98
    static USceneAction_PlaySceneRig* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
