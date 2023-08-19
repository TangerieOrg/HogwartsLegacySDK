#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EAutoReceiveInput\Type.hpp"
#include "FPostProcessSettings.hpp"
class UCameraComponent;
class USceneComponent;
#pragma pack(push, 1)
class ACameraActor : public AActor {
public:
    EAutoReceiveInput::Type AutoActivateForPlayer; // 0x248
    char pad_249[0x7];
    UCameraComponent* CameraComponent; // 0x250
    USceneComponent* SceneComponent; // 0x258
    char pad_260[0x8];
    uint8_t bConstrainAspectRatio : 1; // 0x268
    uint8_t pad_bitfield_268_1 : 7;
    char pad_269[0x3];
    float AspectRatio; // 0x26c
    float FOVAngle; // 0x270
    float PostProcessBlendWeight; // 0x274
    char pad_278[0x8];
    FPostProcessSettings PostProcessSettings; // 0x280
    static ACameraActor* StaticClass();
    int32_t GetAutoActivatePlayerIndex();
}; // Size: 0x870
#pragma pack(pop)
