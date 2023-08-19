#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "USceneRigParameter.hpp"
#pragma pack(push, 1)
class USceneRigParameter_Vector : public USceneRigParameter {
public:
    FVector Value; // 0x38
    char pad_44[0x4];
    static USceneRigParameter_Vector* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
