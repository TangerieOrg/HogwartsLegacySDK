#pragma once
#include <cstdint>
#include "UTargetTypeBase.hpp"
class APlayerCameraManager;
#pragma pack(push, 1)
class UTargetTypeCamera : public UTargetTypeBase {
public:
    char pad_38[0x8];
    static UTargetTypeCamera* StaticClass();
    void SetPlayerCameraManager(APlayerCameraManager* InPlayerCameraManager);
    APlayerCameraManager* GetPlayerCameraManager();
}; // Size: 0x40
#pragma pack(pop)
