#include "AActor.hpp"
#include "AEmitter.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UMaterialInterface.hpp"
#include "UParticleSystem.hpp"
#include "UParticleSystemComponent.hpp"
AEmitter* AEmitter::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.Emitter");
    return (AEmitter*)res;
}
void AEmitter::ToggleActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Emitter.ToggleActive"));
    struct Params_ToggleActive {
    }; // Size: 0x0
    Params_ToggleActive params{};
    ProcessEvent(func, &params);
}
void AEmitter::SetMaterialParameter(FName ParameterName, UMaterialInterface* Param) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Emitter.SetMaterialParameter"));
    struct Params_SetMaterialParameter {
        FName ParameterName; // 0x0
        UMaterialInterface* Param; // 0x8
    }; // Size: 0x10
    Params_SetMaterialParameter params{};
    params.ParameterName = (FName)ParameterName;
    params.Param = (UMaterialInterface*)Param;
    ProcessEvent(func, &params);
}
void AEmitter::SetVectorParameter(FName ParameterName, FVector Param) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Emitter.SetVectorParameter"));
    struct Params_SetVectorParameter {
        FName ParameterName; // 0x0
        FVector Param; // 0x8
    }; // Size: 0x14
    Params_SetVectorParameter params{};
    params.ParameterName = (FName)ParameterName;
    params.Param = (FVector)Param;
    ProcessEvent(func, &params);
}
void AEmitter::SetTemplate(UParticleSystem* NewTemplate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Emitter.SetTemplate"));
    struct Params_SetTemplate {
        UParticleSystem* NewTemplate; // 0x0
    }; // Size: 0x8
    Params_SetTemplate params{};
    params.NewTemplate = (UParticleSystem*)NewTemplate;
    ProcessEvent(func, &params);
}
void AEmitter::SetFloatParameter(FName ParameterName, float Param) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Emitter.SetFloatParameter"));
    struct Params_SetFloatParameter {
        FName ParameterName; // 0x0
        float Param; // 0x8
    }; // Size: 0xc
    Params_SetFloatParameter params{};
    params.ParameterName = (FName)ParameterName;
    params.Param = (float)Param;
    ProcessEvent(func, &params);
}
void AEmitter::Activate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Emitter.Activate"));
    struct Params_Activate {
    }; // Size: 0x0
    Params_Activate params{};
    ProcessEvent(func, &params);
}
void AEmitter::SetColorParameter(FName ParameterName, FLinearColor Param) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Emitter.SetColorParameter"));
    struct Params_SetColorParameter {
        FName ParameterName; // 0x0
        FLinearColor Param; // 0x8
    }; // Size: 0x18
    Params_SetColorParameter params{};
    params.ParameterName = (FName)ParameterName;
    params.Param = (FLinearColor)Param;
    ProcessEvent(func, &params);
}
void AEmitter::SetActorParameter(FName ParameterName, AActor* Param) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Emitter.SetActorParameter"));
    struct Params_SetActorParameter {
        FName ParameterName; // 0x0
        AActor* Param; // 0x8
    }; // Size: 0x10
    Params_SetActorParameter params{};
    params.ParameterName = (FName)ParameterName;
    params.Param = (AActor*)Param;
    ProcessEvent(func, &params);
}
void AEmitter::OnRep_bCurrentlyActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Emitter.OnRep_bCurrentlyActive"));
    struct Params_OnRep_bCurrentlyActive {
    }; // Size: 0x0
    Params_OnRep_bCurrentlyActive params{};
    ProcessEvent(func, &params);
}
void AEmitter::OnParticleSystemFinished(UParticleSystemComponent* FinishedComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Emitter.OnParticleSystemFinished"));
    struct Params_OnParticleSystemFinished {
        UParticleSystemComponent* FinishedComponent; // 0x0
    }; // Size: 0x8
    Params_OnParticleSystemFinished params{};
    params.FinishedComponent = (UParticleSystemComponent*)FinishedComponent;
    ProcessEvent(func, &params);
}
bool AEmitter::IsActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Emitter.IsActive"));
    struct Params_IsActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsActive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AEmitter::Deactivate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Emitter.Deactivate"));
    struct Params_Deactivate {
    }; // Size: 0x0
    Params_Deactivate params{};
    ProcessEvent(func, &params);
}
