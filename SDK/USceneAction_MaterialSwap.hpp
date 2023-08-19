#pragma once
#include <cstdint>
#include "FSceneActionMaterialSwapParameterColor.hpp"
#include "FSceneActionMaterialSwapParameterScalar.hpp"
#include "FSceneActionMaterialSwapParameterVector.hpp"
#include "USceneRigObjectActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_MaterialSwap : public USceneRigObjectActionBase {
public:
    TArray<FSceneActionMaterialSwapParameterScalar> Scalars; // 0xa0
    TArray<FSceneActionMaterialSwapParameterVector> Vectors; // 0xb0
    TArray<FSceneActionMaterialSwapParameterColor> Colors; // 0xc0
    bool bLeaveSwappedMaterials; // 0xd0
    char pad_d1[0x7];
    static USceneAction_MaterialSwap* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
