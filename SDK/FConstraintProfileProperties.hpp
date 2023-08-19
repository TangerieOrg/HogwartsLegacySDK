#pragma once
#include <cstdint>
#include "FAngularDriveConstraint.hpp"
#include "FConeConstraint.hpp"
#include "FLinearConstraint.hpp"
#include "FLinearDriveConstraint.hpp"
#include "FTwistConstraint.hpp"
#pragma pack(push, 1)
struct FConstraintProfileProperties {
    float ProjectionLinearTolerance; // 0x0
    float ProjectionAngularTolerance; // 0x4
    float ProjectionLinearAlpha; // 0x8
    float ProjectionAngularAlpha; // 0xc
    float ShockPropagationAlpha; // 0x10
    float LinearBreakThreshold; // 0x14
    float LinearPlasticityThreshold; // 0x18
    float AngularBreakThreshold; // 0x1c
    float AngularPlasticityThreshold; // 0x20
    FLinearConstraint LinearLimit; // 0x24
    FConeConstraint ConeLimit; // 0x40
    FTwistConstraint TwistLimit; // 0x60
    FLinearDriveConstraint LinearDrive; // 0x7c
    FAngularDriveConstraint AngularDrive; // 0xc8
    uint8_t bDisableCollision : 1; // 0x114
    uint8_t bParentDominates : 1; // 0x114
    uint8_t bEnableLinearProjection : 1; // 0x114
    uint8_t bEnableAngularProjection : 1; // 0x114
    uint8_t bEnableShockPropagation : 1; // 0x114
    uint8_t bEnableProjection : 1; // 0x114
    uint8_t bEnableSoftProjection : 1; // 0x114
    uint8_t bAngularBreakable : 1; // 0x114
    uint8_t bAngularPlasticity : 1; // 0x115
    uint8_t bLinearBreakable : 1; // 0x115
    uint8_t bLinearPlasticity : 1; // 0x115
    uint8_t pad_bitfield_115_3 : 5;
    char pad_116[0x2];
}; // Size: 0x118
#pragma pack(pop)
