#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UInterface.hpp"
#pragma pack(push, 1)
class UGizmoAxisSource : public UInterface {
public:
    static UGizmoAxisSource* StaticClass();
    bool HasTangentVectors();
    void GetTangentVectors(FVector& TangentXOut, FVector& TangentYOut);
    FVector GetOrigin();
    FVector GetDirection();
}; // Size: 0x28
#pragma pack(pop)
