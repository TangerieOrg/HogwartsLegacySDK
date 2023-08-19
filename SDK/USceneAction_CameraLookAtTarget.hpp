#pragma once
#include <cstdint>
#include "ECameraStackLookAtStrength.hpp"
#include "USceneRigActionBase.hpp"
class UTransformProvider;
class UActorProvider;
#pragma pack(push, 1)
class USceneAction_CameraLookAtTarget : public USceneRigActionBase {
public:
    UTransformProvider* LookAtLocation; // 0x88
    bool UseAverageLocation; // 0x90
    char pad_91[0x3];
    int32_t AverageLocationBufferSize; // 0x94
    ECameraStackLookAtStrength LookAtStrength; // 0x98
    char pad_99[0x7];
    UActorProvider* TriggerVolume; // 0xa0
    static USceneAction_CameraLookAtTarget* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
