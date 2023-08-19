#pragma once
#include <cstdint>
#include "ESceneParameterChangeRequestType.hpp"
#include "FTransform.hpp"
class UObject;
#pragma pack(push, 1)
struct FSceneParameterChangeRequest {
    FName ParameterName; // 0x0
    ESceneParameterChangeRequestType ChangeType; // 0x8
    char pad_9[0x7];
    FString String; // 0x10
    bool Bool; // 0x20
    char pad_21[0x3];
    float float; // 0x24
    UObject* Object; // 0x28
    int32_t int; // 0x30
    char pad_34[0xc];
    FTransform Transform; // 0x40
}; // Size: 0x70
#pragma pack(pop)
