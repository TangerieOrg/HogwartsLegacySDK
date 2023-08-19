#pragma once
#include <cstdint>
#include "FTransform.hpp"
#include "UObject.hpp"
class AActor;
#pragma pack(push, 1)
class UDefaultLevelSequenceInstanceData : public UObject {
public:
    char pad_28[0x8];
    AActor* TransformOriginActor; // 0x30
    char pad_38[0x8];
    FTransform TransformOrigin; // 0x40
    static UDefaultLevelSequenceInstanceData* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
