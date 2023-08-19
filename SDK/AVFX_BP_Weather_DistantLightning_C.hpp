#pragma once
#include <cstdint>
#include "AWeatherSurfaceWorldFXBlueprint.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "FVector.hpp"
class UNiagaraComponent;
class USceneComponent;
class UAkComponent;
#pragma pack(push, 1)
class AVFX_BP_Weather_DistantLightning_C : public AWeatherSurfaceWorldFXBlueprint {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UNiagaraComponent* N_Lightning; // 0x270
    USceneComponent* DefaultSceneRoot; // 0x278
    float LightIntensity; // 0x280
    FVector LOC_Camera; // 0x284
    FVector LOC_Strike; // 0x290
    float Lightning_Delay_Max; // 0x29c
    float Lightning_Delay_Min; // 0x2a0
    char pad_2a4[0x4];
    FTimerHandle NewVar_0; // 0x2a8
    float Base_Height; // 0x2b0
    bool Debug; // 0x2b4
    char pad_2b5[0x3];
    float DistanceRange; // 0x2b8
    float Forward_Bias_Weight; // 0x2bc
    static AVFX_BP_Weather_DistantLightning_C* StaticClass();
    void LightningLoop();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_VFX_BP_Weather_DistantLightning(int32_t EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
}; // Size: 0x2c0
#pragma pack(pop)
