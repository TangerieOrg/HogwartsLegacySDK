#pragma once
#include <cstdint>
#include "ENiagaraMeshFacingMode.hpp"
#include "ENiagaraMeshLockedAxisSpace.hpp"
#include "ENiagaraMeshPivotOffsetSpace.hpp"
#include "ENiagaraRendererSourceDataMode.hpp"
#include "ENiagaraSortMode.hpp"
#include "FNiagaraMaterialAttributeBinding.hpp"
#include "FNiagaraMeshMaterialOverride.hpp"
#include "FNiagaraMeshRendererMeshProperties.hpp"
#include "FNiagaraVariableAttributeBinding.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UNiagaraRendererProperties.hpp"
class UStaticMesh;
#pragma pack(push, 1)
class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties {
public:
    TArray<FNiagaraMeshRendererMeshProperties> Meshes; // 0x78
    ENiagaraRendererSourceDataMode SourceMode; // 0x88
    ENiagaraSortMode SortMode; // 0x89
    char pad_8a[0x2];
    uint8_t bOverrideMaterials : 1; // 0x8c
    uint8_t bSortOnlyWhenTranslucent : 1; // 0x8c
    uint8_t bGpuLowLatencyTranslucency : 1; // 0x8c
    uint8_t bSubImageBlend : 1; // 0x8c
    uint8_t bEnableFrustumCulling : 1; // 0x8c
    uint8_t bEnableCameraDistanceCulling : 1; // 0x8c
    uint8_t bEnableMeshFlipbook : 1; // 0x8c
    uint8_t pad_bitfield_8c_7 : 1;
    char pad_8d[0x3];
    TArray<FNiagaraMeshMaterialOverride> OverrideMaterials; // 0x90
    FVector2D SubImageSize; // 0xa0
    ENiagaraMeshFacingMode FacingMode; // 0xa8
    char pad_a9[0x3];
    uint8_t bLockedAxisEnable : 1; // 0xac
    uint8_t pad_bitfield_ac_1 : 7;
    char pad_ad[0x3];
    FVector LockedAxis; // 0xb0
    ENiagaraMeshLockedAxisSpace LockedAxisSpace; // 0xbc
    char pad_bd[0x3];
    float MinCameraDistance; // 0xc0
    float MaxCameraDistance; // 0xc4
    uint32_t RendererVisibility; // 0xc8
    char pad_cc[0x4];
    FNiagaraVariableAttributeBinding PositionBinding; // 0xd0
    FNiagaraVariableAttributeBinding ColorBinding; // 0x128
    FNiagaraVariableAttributeBinding VelocityBinding; // 0x180
    FNiagaraVariableAttributeBinding MeshOrientationBinding; // 0x1d8
    FNiagaraVariableAttributeBinding ScaleBinding; // 0x230
    FNiagaraVariableAttributeBinding SubImageIndexBinding; // 0x288
    FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x2e0
    FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x338
    FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x390
    FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x3e8
    FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x440
    FNiagaraVariableAttributeBinding CustomSortingBinding; // 0x498
    FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x4f0
    FNiagaraVariableAttributeBinding CameraOffsetBinding; // 0x548
    FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x5a0
    FNiagaraVariableAttributeBinding MeshIndexBinding; // 0x5f8
    TArray<FNiagaraMaterialAttributeBinding> MaterialParameterBindings; // 0x650
    FNiagaraVariableAttributeBinding PrevPositionBinding; // 0x660
    FNiagaraVariableAttributeBinding PrevScaleBinding; // 0x6b8
    FNiagaraVariableAttributeBinding PrevMeshOrientationBinding; // 0x710
    FNiagaraVariableAttributeBinding PrevCameraOffsetBinding; // 0x768
    FNiagaraVariableAttributeBinding PrevVelocityBinding; // 0x7c0
    char pad_818[0x68];
    UStaticMesh* ParticleMesh; // 0x880
    FVector PivotOffset; // 0x888
    ENiagaraMeshPivotOffsetSpace PivotOffsetSpace; // 0x894
    char pad_895[0x3];
    static UNiagaraMeshRendererProperties* StaticClass();
}; // Size: 0x898
#pragma pack(pop)
