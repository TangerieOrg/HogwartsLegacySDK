#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UWorldFXRuleCameraPlayer.hpp"
#pragma pack(push, 1)
class UWorldFXRuleCameraPlayerAttached : public UWorldFXRuleCameraPlayer {
public:
    FName UniqueAttachTag; // 0x28
    FName AttachName; // 0x30
    FVector Position; // 0x38
    FRotator Rotator; // 0x44
    FVector Scale; // 0x50
    bool bUseLocalOffset; // 0x5c
    char pad_5d[0x3];
    static UWorldFXRuleCameraPlayerAttached* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
