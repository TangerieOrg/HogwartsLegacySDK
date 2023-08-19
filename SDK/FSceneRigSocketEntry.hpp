#pragma once
#include <cstdint>
class USceneRigProvider;
#pragma pack(push, 1)
struct FSceneRigSocketEntry {
    FName SocketName; // 0x0
    USceneRigProvider* SceneRigProvider; // 0x8
}; // Size: 0x10
#pragma pack(pop)
