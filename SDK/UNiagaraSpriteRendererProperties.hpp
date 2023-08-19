#pragma once
#include <cstdint>
#include "ENiagaraRendererSourceDataMode.hpp"
#include "ENiagaraSortMode.hpp"
#include "ENiagaraSpriteAlignment.hpp"
#include "ENiagaraSpriteFacingMode.hpp"
#include "FNiagaraMaterialAttributeBinding.hpp"
#include "FNiagaraUserParameterBinding.hpp"
#include "FNiagaraVariableAttributeBinding.hpp"
#include "FVector2D.hpp"
#include "UNiagaraRendererProperties.hpp"
class UMaterialInterface;
#pragma pack(push, 1)
class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties {
public:
    UMaterialInterface* Material; // 0x78
    ENiagaraRendererSourceDataMode SourceMode; // 0x80
    char pad_81[0x7];
    FNiagaraUserParameterBinding MaterialUserParamBinding; // 0x88
    ENiagaraSpriteAlignment Alignment; // 0xa8
    ENiagaraSpriteFacingMode FacingMode; // 0xa9
    char pad_aa[0x2];
    FVector2D PivotInUVSpace; // 0xac
    ENiagaraSortMode SortMode; // 0xb4
    char pad_b5[0x3];
    FVector2D SubImageSize; // 0xb8
    uint8_t bSubImageBlend : 1; // 0xc0
    uint8_t bRemoveHMDRollInVR : 1; // 0xc0
    uint8_t bSortOnlyWhenTranslucent : 1; // 0xc0
    uint8_t bGpuLowLatencyTranslucency : 1; // 0xc0
    uint8_t pad_bitfield_c0_4 : 4;
    char pad_c1[0x3];
    float MinFacingCameraBlendDistance; // 0xc4
    float MaxFacingCameraBlendDistance; // 0xc8
    uint8_t bEnableCameraDistanceCulling : 1; // 0xcc
    uint8_t pad_bitfield_cc_1 : 7;
    char pad_cd[0x3];
    float MinCameraDistance; // 0xd0
    float MaxCameraDistance; // 0xd4
    uint32_t RendererVisibility; // 0xd8
    char pad_dc[0x4];
    FNiagaraVariableAttributeBinding PositionBinding; // 0xe0
    FNiagaraVariableAttributeBinding ColorBinding; // 0x138
    FNiagaraVariableAttributeBinding VelocityBinding; // 0x190
    FNiagaraVariableAttributeBinding SpriteRotationBinding; // 0x1e8
    FNiagaraVariableAttributeBinding SpriteSizeBinding; // 0x240
    FNiagaraVariableAttributeBinding SpriteFacingBinding; // 0x298
    FNiagaraVariableAttributeBinding SpriteAlignmentBinding; // 0x2f0
    FNiagaraVariableAttributeBinding SubImageIndexBinding; // 0x348
    FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x3a0
    FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x3f8
    FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x450
    FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x4a8
    FNiagaraVariableAttributeBinding CameraOffsetBinding; // 0x500
    FNiagaraVariableAttributeBinding UVScaleBinding; // 0x558
    FNiagaraVariableAttributeBinding PivotOffsetBinding; // 0x5b0
    FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x608
    FNiagaraVariableAttributeBinding CustomSortingBinding; // 0x660
    FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x6b8
    FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x710
    TArray<FNiagaraMaterialAttributeBinding> MaterialParameterBindings; // 0x768
    FNiagaraVariableAttributeBinding PrevPositionBinding; // 0x778
    FNiagaraVariableAttributeBinding PrevVelocityBinding; // 0x7d0
    FNiagaraVariableAttributeBinding PrevSpriteRotationBinding; // 0x828
    FNiagaraVariableAttributeBinding PrevSpriteSizeBinding; // 0x880
    FNiagaraVariableAttributeBinding PrevSpriteFacingBinding; // 0x8d8
    FNiagaraVariableAttributeBinding PrevSpriteAlignmentBinding; // 0x930
    FNiagaraVariableAttributeBinding PrevCameraOffsetBinding; // 0x988
    FNiagaraVariableAttributeBinding PrevPivotOffsetBinding; // 0x9e0
    char pad_a38[0x78];
    static UNiagaraSpriteRendererProperties* StaticClass();
}; // Size: 0xab0
#pragma pack(pop)
