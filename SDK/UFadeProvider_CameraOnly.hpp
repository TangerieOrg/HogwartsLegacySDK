#pragma once
#include <cstdint>
#include "UFadeProvider.hpp"
class APlayerCameraManager;
#pragma pack(push, 1)
class UFadeProvider_CameraOnly : public UFadeProvider {
public:
    APlayerCameraManager* PlayerCameraManager; // 0x28
    char pad_30[0x28];
    static UFadeProvider_CameraOnly* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
