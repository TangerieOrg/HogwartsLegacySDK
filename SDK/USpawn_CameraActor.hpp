#pragma once
#include <cstdint>
#include "ESpawnCameraActorType.hpp"
#include "UActorSpawner.hpp"
class UClass;
#pragma pack(push, 1)
class USpawn_CameraActor : public UActorSpawner {
public:
    ESpawnCameraActorType CameraType; // 0x48
    bool bFixedAspectRatio; // 0x49
    char pad_4a[0x6];
    UClass* StackCameraClass; // 0x50
    UClass* DefaultCameraClass; // 0x58
    static USpawn_CameraActor* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
