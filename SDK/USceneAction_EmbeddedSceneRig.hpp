#pragma once
#include <cstdint>
#include "USceneRigActionBase.hpp"
class USceneRigProvider;
#pragma pack(push, 1)
class USceneAction_EmbeddedSceneRig : public USceneRigActionBase {
public:
    USceneRigProvider* EmbeddedSceneRig; // 0x88
    static USceneAction_EmbeddedSceneRig* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
