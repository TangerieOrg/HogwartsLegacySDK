#pragma once
#include <cstdint>
#include "USceneRigProvider.hpp"
class USceneRig;
#pragma pack(push, 1)
class USceneRig_Direct : public USceneRigProvider {
public:
    USceneRig* SceneRig; // 0x28
    static USceneRig_Direct* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
