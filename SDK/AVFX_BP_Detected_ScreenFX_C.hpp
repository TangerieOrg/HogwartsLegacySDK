#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UPostProcessComponent;
class USceneComponent;
class UTimelineComponent;
class UVFX_BP_Detected_HUD_FlashColor_C;
#pragma pack(push, 1)
class AVFX_BP_Detected_ScreenFX_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UPostProcessComponent* Radial_Blur_SC_PostProcess; // 0x250
    UPostProcessComponent* Contrast_PostProcess; // 0x258
    USceneComponent* DefaultSceneRoot; // 0x260
    float Camera_Timeline_Blur_Amount_C41BD6754AC3946F7F8B5B883B518082; // 0x268
    float Camera_Timeline_Contrast_C41BD6754AC3946F7F8B5B883B518082; // 0x26c
    ETimelineDirection::Type Camera_Timeline__Direction_C41BD6754AC3946F7F8B5B883B518082; // 0x270
    char pad_271[0x7];
    UTimelineComponent* Camera_Timeline; // 0x278
    UVFX_BP_Detected_HUD_FlashColor_C* Flash; // 0x280
    char pad_288[0x10];
    float NewVar_0; // 0x298
    char pad_29c[0x4];
    static AVFX_BP_Detected_ScreenFX_C* StaticClass();
    void Camera_Timeline__FinishedFunc();
    void Camera_Timeline__UpdateFunc();
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_VFX_BP_Detected_ScreenFX(int32_t EntryPoint, bool CallFunc_IsPlayerInIntrusionArea_ReturnValue);
    void Flash_UI__DelegateSignature();
}; // Size: 0x2a0
#pragma pack(pop)
