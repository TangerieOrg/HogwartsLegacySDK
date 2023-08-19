#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UGizmoConstantAxisSource : public UObject {
public:
    char pad_28[0x8];
    FVector Origin; // 0x30
    FVector Direction; // 0x3c
    static UGizmoConstantAxisSource* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
