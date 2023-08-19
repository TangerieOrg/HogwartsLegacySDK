#pragma once
#include <cstdint>
#include "AActor.hpp"
class UObject;
#pragma pack(push, 1)
class ASceneRigCameraManager : public AActor {
public:
    char pad_248[0x270];
    static ASceneRigCameraManager* StaticClass();
    static AActor* GetActiveSceneRigCamera(UObject* WorldContextObject);
}; // Size: 0x4b8
#pragma pack(pop)
