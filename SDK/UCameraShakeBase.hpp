#pragma once
#include <cstdint>
#include "UObject.hpp"
class UCameraShakePattern;
class APlayerCameraManager;
#pragma pack(push, 1)
class UCameraShakeBase : public UObject {
public:
    bool bSingleInstance; // 0x28
    char pad_29[0x3];
    float ShakeScale; // 0x2c
    UCameraShakePattern* RootShakePattern; // 0x30
    APlayerCameraManager* CameraManager; // 0x38
    char pad_40[0x70];
    static UCameraShakeBase* StaticClass();
    void SetRootShakePattern(UCameraShakePattern* InPattern);
    UCameraShakePattern* GetRootShakePattern();
}; // Size: 0xb0
#pragma pack(pop)
