#include "AActor.hpp"
#include "AAmbulatory_Character.hpp"
#include "ALumosEmberActor.hpp"
#include "FLumosScalabilitySettings.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UCurveFloat.hpp"
#include "UFunction.hpp"
#include "ULumosEmberTrick.hpp"
#include "UMaterialSwapMeshStatesFireAndForgetComponent.hpp"
void ALumosEmberActor::ExternallyStartLumosFlicker() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LumosEmberActor.ExternallyStartLumosFlicker"));
    struct Params_ExternallyStartLumosFlicker {
    }; // Size: 0x0
    Params_ExternallyStartLumosFlicker params{};
    ProcessEvent(func, &params);
}
ALumosEmberActor* ALumosEmberActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LumosEmberActor");
    return (ALumosEmberActor*)res;
}
void ALumosEmberActor::GetLumosFlicker(float& IntensityMultiplier) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LumosEmberActor.GetLumosFlicker"));
    struct Params_GetLumosFlicker {
        float IntensityMultiplier; // 0x0
    }; // Size: 0x4
    Params_GetLumosFlicker params{};
    params.IntensityMultiplier = (float)IntensityMultiplier;
    ProcessEvent(func, &params);
    IntensityMultiplier = params.IntensityMultiplier;
}
void ALumosEmberActor::UpdateLumosFlicker(float DeltaTime, bool bIsFading) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LumosEmberActor.UpdateLumosFlicker"));
    struct Params_UpdateLumosFlicker {
        float DeltaTime; // 0x0
        bool bIsFading; // 0x4
    }; // Size: 0x5
    Params_UpdateLumosFlicker params{};
    params.DeltaTime = (float)DeltaTime;
    params.bIsFading = (bool)bIsFading;
    ProcessEvent(func, &params);
}
void ALumosEmberActor::RefreshCurrentScalabilitySettings() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LumosEmberActor.RefreshCurrentScalabilitySettings"));
    struct Params_RefreshCurrentScalabilitySettings {
    }; // Size: 0x0
    Params_RefreshCurrentScalabilitySettings params{};
    ProcessEvent(func, &params);
}
UMaterialSwapMeshStatesFireAndForgetComponent* ALumosEmberActor::GetScalabilityMeshStatesComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LumosEmberActor.GetScalabilityMeshStatesComponent"));
    struct Params_GetScalabilityMeshStatesComponent {
        UMaterialSwapMeshStatesFireAndForgetComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetScalabilityMeshStatesComponent params{};
    ProcessEvent(func, &params);
    return (UMaterialSwapMeshStatesFireAndForgetComponent*)params.ReturnValue;
}
void ALumosEmberActor::ExternallyStartLumosFlickerForActor(AActor* OnlyForOwningActor, bool& bMatchedOwner) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LumosEmberActor.ExternallyStartLumosFlickerForActor"));
    struct Params_ExternallyStartLumosFlickerForActor {
        AActor* OnlyForOwningActor; // 0x0
        bool bMatchedOwner; // 0x8
    }; // Size: 0x9
    Params_ExternallyStartLumosFlickerForActor params{};
    params.OnlyForOwningActor = (AActor*)OnlyForOwningActor;
    params.bMatchedOwner = (bool)bMatchedOwner;
    ProcessEvent(func, &params);
    bMatchedOwner = params.bMatchedOwner;
}
void ALumosEmberActor::CharacterTeleported(AAmbulatory_Character* TeleportedCharacter, FVector AmountDisplaced, FRotator AmountRotated) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LumosEmberActor.CharacterTeleported"));
    struct Params_CharacterTeleported {
        AAmbulatory_Character* TeleportedCharacter; // 0x0
        FVector AmountDisplaced; // 0x8
        FRotator AmountRotated; // 0x14
    }; // Size: 0x20
    Params_CharacterTeleported params{};
    params.TeleportedCharacter = (AAmbulatory_Character*)TeleportedCharacter;
    params.AmountDisplaced = (FVector)AmountDisplaced;
    params.AmountRotated = (FRotator)AmountRotated;
    ProcessEvent(func, &params);
}
void ALumosEmberActor::CacheLerpVolumeLumosVolumetricScatteringIntensity(float Value, bool bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LumosEmberActor.CacheLerpVolumeLumosVolumetricScatteringIntensity"));
    struct Params_CacheLerpVolumeLumosVolumetricScatteringIntensity {
        float Value; // 0x0
        bool bSuccess; // 0x4
    }; // Size: 0x5
    Params_CacheLerpVolumeLumosVolumetricScatteringIntensity params{};
    params.Value = (float)Value;
    params.bSuccess = (bool)bSuccess;
    ProcessEvent(func, &params);
}
void ALumosEmberActor::CacheLerpVolumeLumosEVAdjust(float Value, bool bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LumosEmberActor.CacheLerpVolumeLumosEVAdjust"));
    struct Params_CacheLerpVolumeLumosEVAdjust {
        float Value; // 0x0
        bool bSuccess; // 0x4
    }; // Size: 0x5
    Params_CacheLerpVolumeLumosEVAdjust params{};
    params.Value = (float)Value;
    params.bSuccess = (bool)bSuccess;
    ProcessEvent(func, &params);
}
