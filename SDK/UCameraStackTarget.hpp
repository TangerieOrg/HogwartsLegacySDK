#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UObject.hpp"
class AActor;
#pragma pack(push, 1)
class UCameraStackTarget : public UObject {
public:
    char pad_28[0x8];
    FName TargetSocket; // 0x30
    FVector TargetOffset; // 0x38
    char pad_44[0x5c];
    static UCameraStackTarget* StaticClass();
    bool IsWorldCamera();
    FVector GetTargetVelocity();
    AActor* GetTargetActor();
}; // Size: 0xa0
#pragma pack(pop)
