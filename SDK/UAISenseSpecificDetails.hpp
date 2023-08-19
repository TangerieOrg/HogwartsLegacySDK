#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UObject.hpp"
class UCogGroupTargetPoint;
#pragma pack(push, 1)
class UAISenseSpecificDetails : public UObject {
public:
    UCogGroupTargetPoint* TargetPointClass; // 0x28
    FVector CalloutOffset; // 0x30
    float FarDistanceOverride; // 0x3c
    bool bPositionCallOutsOverPerceiver; // 0x40
    bool bPerceiverHeadtracksToTarget; // 0x41
    bool bAllowStencil; // 0x42
    bool bCalloutAboveCollision; // 0x43
    char pad_44[0x14];
    static UAISenseSpecificDetails* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
