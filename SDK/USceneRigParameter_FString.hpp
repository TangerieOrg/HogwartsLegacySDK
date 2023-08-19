#pragma once
#include <cstdint>
#include "USceneRigParameter.hpp"
#pragma pack(push, 1)
class USceneRigParameter_FString : public USceneRigParameter {
public:
    FString Value; // 0x38
    static USceneRigParameter_FString* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
