#pragma once
#include <cstdint>
#include "FEnemy_TargetSense_DisillusionmentScale.hpp"
#include "FEnemy_TargetSense_FOV.hpp"
#include "FEnemy_TargetSense_LOS.hpp"
#include "FEnemy_TargetSense_Remember.hpp"
#include "FEnemy_TargetSense_TAS.hpp"
#pragma pack(push, 1)
struct FEnemy_TargetSense {
    bool bOverrideLOS; // 0x0
    char pad_1[0x3];
    FEnemy_TargetSense_LOS LOS; // 0x4
    bool bOverrideFOV; // 0x20
    char pad_21[0x3];
    FEnemy_TargetSense_FOV FOV; // 0x24
    FEnemy_TargetSense_DisillusionmentScale DisillusionmentScale; // 0x1e0
    bool bOverrideRemember; // 0x1e4
    char pad_1e5[0x3];
    FEnemy_TargetSense_Remember Remember; // 0x1e8
    bool bOverrideTAS; // 0x1f8
    char pad_1f9[0x7];
    FEnemy_TargetSense_TAS TAS; // 0x200
    bool bOverrideEvaluateDist; // 0x228
    char pad_229[0x3];
    float EvaluateDist; // 0x22c
    float StealthShowBlipDist; // 0x230
    char pad_234[0x4];
}; // Size: 0x238
#pragma pack(pop)
