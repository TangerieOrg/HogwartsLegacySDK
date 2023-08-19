#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
class UNiagaraComponent;
class USceneComponent;
class APlayerCameraManager;
class UPointLightComponent;
class UPostProcessComponent;
class UTimelineComponent;
#pragma pack(push, 1)
class AVFX_BP_Spider_Luminous_Blind_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UNiagaraComponent* NS_Flashes; // 0x250
    UPointLightComponent* PointLight; // 0x258
    UPostProcessComponent* PostProcess; // 0x260
    USceneComponent* DefaultSceneRoot; // 0x268
    float Timeline_0_Lightintisity_70DECC1E46B965328A5BFAA068EB7A70; // 0x270
    float Timeline_0_Strength_70DECC1E46B965328A5BFAA068EB7A70; // 0x274
    ETimelineDirection::Type Timeline_0__Direction_70DECC1E46B965328A5BFAA068EB7A70; // 0x278
    char pad_279[0x7];
    UTimelineComponent* Timeline_0; // 0x280
    float LightIntesity; // 0x288
    char pad_28c[0x4];
    USceneComponent* NewVar_0; // 0x290
    APlayerCameraManager* NewVar_1; // 0x298
    FVector NewVar_2; // 0x2a0
    FVector NewVar_3; // 0x2ac
    FRotator NewVar_4; // 0x2b8
    char pad_2c4[0x4];
    static AVFX_BP_Spider_Luminous_Blind_C* StaticClass();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_VFX_BP_Spider_Luminous_Blind(int32_t EntryPoint, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
}; // Size: 0x2c8
#pragma pack(pop)
