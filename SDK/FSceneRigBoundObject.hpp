#pragma once
#include <cstdint>
class UObjectProvider;
#pragma pack(push, 1)
struct FSceneRigBoundObject {
    FName BoundObjectName; // 0x0
    UObjectProvider* ObjectProvider; // 0x8
}; // Size: 0x10
#pragma pack(pop)
