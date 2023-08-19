#pragma once
#include <cstdint>
#include "UTransformProvider.hpp"
class UActorProvider;
#pragma pack(push, 1)
class UTransform_CameraAttachment : public UTransformProvider {
public:
    UActorProvider* TargetActor; // 0x28
    static UTransform_CameraAttachment* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
