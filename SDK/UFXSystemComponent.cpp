#include "AActor.hpp"
#include "EAttachmentRule.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "UFXSystemAsset.hpp"
#include "UFXSystemComponent.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
void UFXSystemComponent::SetBoolParameter(FName ParameterName, bool Param) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.FXSystemComponent.SetBoolParameter"));
    struct Params_SetBoolParameter {
        FName ParameterName; // 0x0
        bool Param; // 0x8
    }; // Size: 0x9
    Params_SetBoolParameter params{};
    params.ParameterName = (FName)ParameterName;
    params.Param = (bool)Param;
    ProcessEvent(func, &params);
}
UFXSystemComponent* UFXSystemComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.FXSystemComponent");
    return (UFXSystemComponent*)res;
}
void UFXSystemComponent::SetVectorParameter(FName ParameterName, FVector Param) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.FXSystemComponent.SetVectorParameter"));
    struct Params_SetVectorParameter {
        FName ParameterName; // 0x0
        FVector Param; // 0x8
    }; // Size: 0x14
    Params_SetVectorParameter params{};
    params.ParameterName = (FName)ParameterName;
    params.Param = (FVector)Param;
    ProcessEvent(func, &params);
}
void UFXSystemComponent::SetIntParameter(FName ParameterName, int32_t Param) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.FXSystemComponent.SetIntParameter"));
    struct Params_SetIntParameter {
        FName ParameterName; // 0x0
        int32_t Param; // 0x8
    }; // Size: 0xc
    Params_SetIntParameter params{};
    params.ParameterName = (FName)ParameterName;
    params.Param = (int32_t)Param;
    ProcessEvent(func, &params);
}
void UFXSystemComponent::SetUseAutoManageAttachment(bool bAutoManage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.FXSystemComponent.SetUseAutoManageAttachment"));
    struct Params_SetUseAutoManageAttachment {
        bool bAutoManage; // 0x0
    }; // Size: 0x1
    Params_SetUseAutoManageAttachment params{};
    params.bAutoManage = (bool)bAutoManage;
    ProcessEvent(func, &params);
}
void UFXSystemComponent::SetFloatParameter(FName ParameterName, float Param) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.FXSystemComponent.SetFloatParameter"));
    struct Params_SetFloatParameter {
        FName ParameterName; // 0x0
        float Param; // 0x8
    }; // Size: 0xc
    Params_SetFloatParameter params{};
    params.ParameterName = (FName)ParameterName;
    params.Param = (float)Param;
    ProcessEvent(func, &params);
}
void UFXSystemComponent::SetEmitterEnable(FName EmitterName, bool bNewEnableState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.FXSystemComponent.SetEmitterEnable"));
    struct Params_SetEmitterEnable {
        FName EmitterName; // 0x0
        bool bNewEnableState; // 0x8
    }; // Size: 0x9
    Params_SetEmitterEnable params{};
    params.EmitterName = (FName)EmitterName;
    params.bNewEnableState = (bool)bNewEnableState;
    ProcessEvent(func, &params);
}
void UFXSystemComponent::SetColorParameter(FName ParameterName, FLinearColor Param) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.FXSystemComponent.SetColorParameter"));
    struct Params_SetColorParameter {
        FName ParameterName; // 0x0
        FLinearColor Param; // 0x8
    }; // Size: 0x18
    Params_SetColorParameter params{};
    params.ParameterName = (FName)ParameterName;
    params.Param = (FLinearColor)Param;
    ProcessEvent(func, &params);
}
void UFXSystemComponent::SetAutoAttachmentParameters(USceneComponent* Parent, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.FXSystemComponent.SetAutoAttachmentParameters"));
    struct Params_SetAutoAttachmentParameters {
        USceneComponent* Parent; // 0x0
        FName SocketName; // 0x8
        EAttachmentRule LocationRule; // 0x10
        EAttachmentRule RotationRule; // 0x11
        EAttachmentRule ScaleRule; // 0x12
    }; // Size: 0x13
    Params_SetAutoAttachmentParameters params{};
    params.Parent = (USceneComponent*)Parent;
    params.SocketName = (FName)SocketName;
    params.LocationRule = (EAttachmentRule)LocationRule;
    params.RotationRule = (EAttachmentRule)RotationRule;
    params.ScaleRule = (EAttachmentRule)ScaleRule;
    ProcessEvent(func, &params);
}
void UFXSystemComponent::SetActorParameter(FName ParameterName, AActor* Param) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.FXSystemComponent.SetActorParameter"));
    struct Params_SetActorParameter {
        FName ParameterName; // 0x0
        AActor* Param; // 0x8
    }; // Size: 0x10
    Params_SetActorParameter params{};
    params.ParameterName = (FName)ParameterName;
    params.Param = (AActor*)Param;
    ProcessEvent(func, &params);
}
void UFXSystemComponent::ReleaseToPool() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.FXSystemComponent.ReleaseToPool"));
    struct Params_ReleaseToPool {
    }; // Size: 0x0
    Params_ReleaseToPool params{};
    ProcessEvent(func, &params);
}
UFXSystemAsset* UFXSystemComponent::GetFXSystemAsset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.FXSystemComponent.GetFXSystemAsset"));
    struct Params_GetFXSystemAsset {
        UFXSystemAsset* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetFXSystemAsset params{};
    ProcessEvent(func, &params);
    return (UFXSystemAsset*)params.ReturnValue;
}
