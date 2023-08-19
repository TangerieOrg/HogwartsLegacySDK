#pragma once
#include <cstdint>
#include "FColor.hpp"
#include "FGuid.hpp"
#include "FQuat.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "FVector4.hpp"
#pragma pack(push, 1)
struct FStructSerializerBuiltinTestStruct {
    FGuid Guid; // 0x0
    FName Name; // 0x10
    FString String; // 0x18
    char pad_28[0x18];
    FVector Vector; // 0x40
    char pad_4c[0x4];
    FVector4 Vector4; // 0x50
    FRotator Rotator; // 0x60
    char pad_6c[0x4];
    FQuat Quat; // 0x70
    FColor Color; // 0x80
    char pad_84[0xc];
}; // Size: 0x90
#pragma pack(pop)
