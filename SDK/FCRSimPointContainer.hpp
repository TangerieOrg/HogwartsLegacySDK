#pragma once
#include <cstdint>
#include "FCRSimContainer.hpp"
#include "FCRSimLinearSpring.hpp"
#include "FCRSimPoint.hpp"
#include "FCRSimPointConstraint.hpp"
#include "FCRSimPointForce.hpp"
#include "FCRSimSoftCollision.hpp"
#pragma pack(push, 1)
struct FCRSimPointContainer : public FCRSimContainer {
    TArray<FCRSimPoint> Points; // 0x18
    TArray<FCRSimLinearSpring> Springs; // 0x28
    TArray<FCRSimPointForce> Forces; // 0x38
    TArray<FCRSimSoftCollision> CollisionVolumes; // 0x48
    TArray<FCRSimPointConstraint> Constraints; // 0x58
    TArray<FCRSimPoint> PreviousStep; // 0x68
}; // Size: 0x78
#pragma pack(pop)
