#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UGizmoConstantFrameAxisSource : public UObject {
public:
    char pad_28[0x8];
    FVector Origin; // 0x30
    FVector Direction; // 0x3c
    FVector TangentX; // 0x48
    FVector TangentY; // 0x54
    static UGizmoConstantFrameAxisSource* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
