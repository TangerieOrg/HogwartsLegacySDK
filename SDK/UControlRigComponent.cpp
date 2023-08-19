#include "EControlRigComponentSpace.hpp"
#include "ERigElementType.hpp"
#include "FControlRigComponentMappedBone.hpp"
#include "FControlRigComponentMappedComponent.hpp"
#include "FControlRigComponentMappedCurve.hpp"
#include "FControlRigComponentMappedElement.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UClass.hpp"
#include "UControlRig.hpp"
#include "UControlRigComponent.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
#include "USkeletalMesh.hpp"
#include "USkeletalMeshComponent.hpp"
UControlRigComponent* UControlRigComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/ControlRig.ControlRigComponent");
    return (UControlRigComponent*)res;
}
void UControlRigComponent::SetMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigComponent.SetMappedElements"));
    struct Params_SetMappedElements {
        TArray<FControlRigComponentMappedElement> NewMappedElements; // 0x0
    }; // Size: 0x10
    Params_SetMappedElements params{};
    params.NewMappedElements = (TArray<FControlRigComponentMappedElement>)NewMappedElements;
    ProcessEvent(func, &params);
}
void UControlRigComponent::AddMappedSkeletalMesh(USkeletalMeshComponent* SkeletalMeshComponent, TArray<FControlRigComponentMappedBone> Bones, TArray<FControlRigComponentMappedCurve> Curves) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigComponent.AddMappedSkeletalMesh"));
    struct Params_AddMappedSkeletalMesh {
        USkeletalMeshComponent* SkeletalMeshComponent; // 0x0
        TArray<FControlRigComponentMappedBone> Bones; // 0x8
        TArray<FControlRigComponentMappedCurve> Curves; // 0x18
    }; // Size: 0x28
    Params_AddMappedSkeletalMesh params{};
    params.SkeletalMeshComponent = (USkeletalMeshComponent*)SkeletalMeshComponent;
    params.Bones = (TArray<FControlRigComponentMappedBone>)Bones;
    params.Curves = (TArray<FControlRigComponentMappedCurve>)Curves;
    ProcessEvent(func, &params);
}
void UControlRigComponent::Update(float DeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigComponent.Update"));
    struct Params_Update {
        float DeltaTime; // 0x0
    }; // Size: 0x4
    Params_Update params{};
    params.DeltaTime = (float)DeltaTime;
    ProcessEvent(func, &params);
}
void UControlRigComponent::SetInitialSpaceTransform(FName SpaceName, FTransform InitialTransform, EControlRigComponentSpace Space) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigComponent.SetInitialSpaceTransform"));
    struct Params_SetInitialSpaceTransform {
        FName SpaceName; // 0x0
        char pad_8[0x8];
        FTransform InitialTransform; // 0x10
        EControlRigComponentSpace Space; // 0x40
    }; // Size: 0x41
    Params_SetInitialSpaceTransform params{};
    params.SpaceName = (FName)SpaceName;
    params.InitialTransform = (FTransform)InitialTransform;
    params.Space = (EControlRigComponentSpace)Space;
    ProcessEvent(func, &params);
}
UControlRig* UControlRigComponent::GetControlRig() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigComponent.GetControlRig"));
    struct Params_GetControlRig {
        UControlRig* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetControlRig params{};
    ProcessEvent(func, &params);
    return (UControlRig*)params.ReturnValue;
}
void UControlRigComponent::OnPreUpdate(UControlRigComponent* Component) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigComponent.OnPreUpdate"));
    struct Params_OnPreUpdate {
        UControlRigComponent* Component; // 0x0
    }; // Size: 0x8
    Params_OnPreUpdate params{};
    params.Component = (UControlRigComponent*)Component;
    ProcessEvent(func, &params);
}
void UControlRigComponent::SetInitialBoneTransform(FName BoneName, FTransform InitialTransform, EControlRigComponentSpace Space, bool bPropagateToChildren) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigComponent.SetInitialBoneTransform"));
    struct Params_SetInitialBoneTransform {
        FName BoneName; // 0x0
        char pad_8[0x8];
        FTransform InitialTransform; // 0x10
        EControlRigComponentSpace Space; // 0x40
        bool bPropagateToChildren; // 0x41
    }; // Size: 0x42
    Params_SetInitialBoneTransform params{};
    params.BoneName = (FName)BoneName;
    params.InitialTransform = (FTransform)InitialTransform;
    params.Space = (EControlRigComponentSpace)Space;
    params.bPropagateToChildren = (bool)bPropagateToChildren;
    ProcessEvent(func, &params);
}
void UControlRigComponent::SetControlScale(FName ControlName, FVector Value, EControlRigComponentSpace Space) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigComponent.SetControlScale"));
    struct Params_SetControlScale {
        FName ControlName; // 0x0
        FVector Value; // 0x8
        EControlRigComponentSpace Space; // 0x14
    }; // Size: 0x15
    Params_SetControlScale params{};
    params.ControlName = (FName)ControlName;
    params.Value = (FVector)Value;
    params.Space = (EControlRigComponentSpace)Space;
    ProcessEvent(func, &params);
}
void UControlRigComponent::SetControlVector2D(FName ControlName, FVector2D Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigComponent.SetControlVector2D"));
    struct Params_SetControlVector2D {
        FName ControlName; // 0x0
        FVector2D Value; // 0x8
    }; // Size: 0x10
    Params_SetControlVector2D params{};
    params.ControlName = (FName)ControlName;
    params.Value = (FVector2D)Value;
    ProcessEvent(func, &params);
}
FTransform UControlRigComponent::GetInitialBoneTransform(FName BoneName, EControlRigComponentSpace Space) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigComponent.GetInitialBoneTransform"));
    struct Params_GetInitialBoneTransform {
        FName BoneName; // 0x0
        EControlRigComponentSpace Space; // 0x8
        char pad_9[0x7];
        FTransform ReturnValue; // 0x10
    }; // Size: 0x40
    Params_GetInitialBoneTransform params{};
    params.BoneName = (FName)BoneName;
    params.Space = (EControlRigComponentSpace)Space;
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
void UControlRigComponent::SetControlTransform(FName ControlName, FTransform Value, EControlRigComponentSpace Space) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigComponent.SetControlTransform"));
    struct Params_SetControlTransform {
        FName ControlName; // 0x0
        char pad_8[0x8];
        FTransform Value; // 0x10
        EControlRigComponentSpace Space; // 0x40
    }; // Size: 0x41
    Params_SetControlTransform params{};
    params.ControlName = (FName)ControlName;
    params.Value = (FTransform)Value;
    params.Space = (EControlRigComponentSpace)Space;
    ProcessEvent(func, &params);
}
FVector UControlRigComponent::GetControlPosition(FName ControlName, EControlRigComponentSpace Space) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigComponent.GetControlPosition"));
    struct Params_GetControlPosition {
        FName ControlName; // 0x0
        EControlRigComponentSpace Space; // 0x8
        char pad_9[0x3];
        FVector ReturnValue; // 0xc
    }; // Size: 0x18
    Params_GetControlPosition params{};
    params.ControlName = (FName)ControlName;
    params.Space = (EControlRigComponentSpace)Space;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void UControlRigComponent::SetControlRotator(FName ControlName, FRotator Value, EControlRigComponentSpace Space) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigComponent.SetControlRotator"));
    struct Params_SetControlRotator {
        FName ControlName; // 0x0
        FRotator Value; // 0x8
        EControlRigComponentSpace Space; // 0x14
    }; // Size: 0x15
    Params_SetControlRotator params{};
    params.ControlName = (FName)ControlName;
    params.Value = (FRotator)Value;
    params.Space = (EControlRigComponentSpace)Space;
    ProcessEvent(func, &params);
}
void UControlRigComponent::SetControlPosition(FName ControlName, FVector Value, EControlRigComponentSpace Space) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigComponent.SetControlPosition"));
    struct Params_SetControlPosition {
        FName ControlName; // 0x0
        FVector Value; // 0x8
        EControlRigComponentSpace Space; // 0x14
    }; // Size: 0x15
    Params_SetControlPosition params{};
    params.ControlName = (FName)ControlName;
    params.Value = (FVector)Value;
    params.Space = (EControlRigComponentSpace)Space;
    ProcessEvent(func, &params);
}
void UControlRigComponent::SetControlOffset(FName ControlName, FTransform OffsetTransform, EControlRigComponentSpace Space) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigComponent.SetControlOffset"));
    struct Params_SetControlOffset {
        FName ControlName; // 0x0
        char pad_8[0x8];
        FTransform OffsetTransform; // 0x10
        EControlRigComponentSpace Space; // 0x40
    }; // Size: 0x41
    Params_SetControlOffset params{};
    params.ControlName = (FName)ControlName;
    params.OffsetTransform = (FTransform)OffsetTransform;
    params.Space = (EControlRigComponentSpace)Space;
    ProcessEvent(func, &params);
}
void UControlRigComponent::SetControlInt(FName ControlName, int32_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigComponent.SetControlInt"));
    struct Params_SetControlInt {
        FName ControlName; // 0x0
        int32_t Value; // 0x8
    }; // Size: 0xc
    Params_SetControlInt params{};
    params.ControlName = (FName)ControlName;
    params.Value = (int32_t)Value;
    ProcessEvent(func, &params);
}
void UControlRigComponent::SetControlFloat(FName ControlName, float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigComponent.SetControlFloat"));
    struct Params_SetControlFloat {
        FName ControlName; // 0x0
        float Value; // 0x8
    }; // Size: 0xc
    Params_SetControlFloat params{};
    params.ControlName = (FName)ControlName;
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UControlRigComponent::SetControlBool(FName ControlName, bool Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigComponent.SetControlBool"));
    struct Params_SetControlBool {
        FName ControlName; // 0x0
        bool Value; // 0x8
    }; // Size: 0x9
    Params_SetControlBool params{};
    params.ControlName = (FName)ControlName;
    params.Value = (bool)Value;
    ProcessEvent(func, &params);
}
void UControlRigComponent::SetBoneTransform(FName BoneName, FTransform Transform, EControlRigComponentSpace Space, float weight, bool bPropagateToChildren) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigComponent.SetBoneTransform"));
    struct Params_SetBoneTransform {
        FName BoneName; // 0x0
        char pad_8[0x8];
        FTransform Transform; // 0x10
        EControlRigComponentSpace Space; // 0x40
        char pad_41[0x3];
        float weight; // 0x44
        bool bPropagateToChildren; // 0x48
    }; // Size: 0x49
    Params_SetBoneTransform params{};
    params.BoneName = (FName)BoneName;
    params.Transform = (FTransform)Transform;
    params.Space = (EControlRigComponentSpace)Space;
    params.weight = (float)weight;
    params.bPropagateToChildren = (bool)bPropagateToChildren;
    ProcessEvent(func, &params);
}
void UControlRigComponent::SetBoneInitialTransformsFromSkeletalMesh(USkeletalMesh* InSkeletalMesh) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigComponent.SetBoneInitialTransformsFromSkeletalMesh"));
    struct Params_SetBoneInitialTransformsFromSkeletalMesh {
        USkeletalMesh* InSkeletalMesh; // 0x0
    }; // Size: 0x8
    Params_SetBoneInitialTransformsFromSkeletalMesh params{};
    params.InSkeletalMesh = (USkeletalMesh*)InSkeletalMesh;
    ProcessEvent(func, &params);
}
TArray<FName> UControlRigComponent::GetElementNames(ERigElementType ElementType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigComponent.GetElementNames"));
    struct Params_GetElementNames {
        ERigElementType ElementType; // 0x0
        char pad_1[0x7];
        TArray<FName> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetElementNames params{};
    params.ElementType = (ERigElementType)ElementType;
    ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
void UControlRigComponent::OnPreSetup(UControlRigComponent* Component) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigComponent.OnPreSetup"));
    struct Params_OnPreSetup {
        UControlRigComponent* Component; // 0x0
    }; // Size: 0x8
    Params_OnPreSetup params{};
    params.Component = (UControlRigComponent*)Component;
    ProcessEvent(func, &params);
}
float UControlRigComponent::GetControlFloat(FName ControlName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigComponent.GetControlFloat"));
    struct Params_GetControlFloat {
        FName ControlName; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetControlFloat params{};
    params.ControlName = (FName)ControlName;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
int32_t UControlRigComponent::GetControlInt(FName ControlName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigComponent.GetControlInt"));
    struct Params_GetControlInt {
        FName ControlName; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetControlInt params{};
    params.ControlName = (FName)ControlName;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UControlRigComponent::OnPostUpdate(UControlRigComponent* Component) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigComponent.OnPostUpdate"));
    struct Params_OnPostUpdate {
        UControlRigComponent* Component; // 0x0
    }; // Size: 0x8
    Params_OnPostUpdate params{};
    params.Component = (UControlRigComponent*)Component;
    ProcessEvent(func, &params);
}
FVector2D UControlRigComponent::GetControlVector2D(FName ControlName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigComponent.GetControlVector2D"));
    struct Params_GetControlVector2D {
        FName ControlName; // 0x0
        FVector2D ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetControlVector2D params{};
    params.ControlName = (FName)ControlName;
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
void UControlRigComponent::OnPostSetup(UControlRigComponent* Component) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigComponent.OnPostSetup"));
    struct Params_OnPostSetup {
        UControlRigComponent* Component; // 0x0
    }; // Size: 0x8
    Params_OnPostSetup params{};
    params.Component = (UControlRigComponent*)Component;
    ProcessEvent(func, &params);
}
void UControlRigComponent::OnPostInitialize(UControlRigComponent* Component) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigComponent.OnPostInitialize"));
    struct Params_OnPostInitialize {
        UControlRigComponent* Component; // 0x0
    }; // Size: 0x8
    Params_OnPostInitialize params{};
    params.Component = (UControlRigComponent*)Component;
    ProcessEvent(func, &params);
}
void UControlRigComponent::Initialize() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigComponent.Initialize"));
    struct Params_Initialize {
    }; // Size: 0x0
    Params_Initialize params{};
    ProcessEvent(func, &params);
}
FTransform UControlRigComponent::GetSpaceTransform(FName SpaceName, EControlRigComponentSpace Space) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigComponent.GetSpaceTransform"));
    struct Params_GetSpaceTransform {
        FName SpaceName; // 0x0
        EControlRigComponentSpace Space; // 0x8
        char pad_9[0x7];
        FTransform ReturnValue; // 0x10
    }; // Size: 0x40
    Params_GetSpaceTransform params{};
    params.SpaceName = (FName)SpaceName;
    params.Space = (EControlRigComponentSpace)Space;
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
void UControlRigComponent::AddMappedCompleteSkeletalMesh(USkeletalMeshComponent* SkeletalMeshComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigComponent.AddMappedCompleteSkeletalMesh"));
    struct Params_AddMappedCompleteSkeletalMesh {
        USkeletalMeshComponent* SkeletalMeshComponent; // 0x0
    }; // Size: 0x8
    Params_AddMappedCompleteSkeletalMesh params{};
    params.SkeletalMeshComponent = (USkeletalMeshComponent*)SkeletalMeshComponent;
    ProcessEvent(func, &params);
}
FTransform UControlRigComponent::GetInitialSpaceTransform(FName SpaceName, EControlRigComponentSpace Space) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigComponent.GetInitialSpaceTransform"));
    struct Params_GetInitialSpaceTransform {
        FName SpaceName; // 0x0
        EControlRigComponentSpace Space; // 0x8
        char pad_9[0x7];
        FTransform ReturnValue; // 0x10
    }; // Size: 0x40
    Params_GetInitialSpaceTransform params{};
    params.SpaceName = (FName)SpaceName;
    params.Space = (EControlRigComponentSpace)Space;
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
FTransform UControlRigComponent::GetControlTransform(FName ControlName, EControlRigComponentSpace Space) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigComponent.GetControlTransform"));
    struct Params_GetControlTransform {
        FName ControlName; // 0x0
        EControlRigComponentSpace Space; // 0x8
        char pad_9[0x7];
        FTransform ReturnValue; // 0x10
    }; // Size: 0x40
    Params_GetControlTransform params{};
    params.ControlName = (FName)ControlName;
    params.Space = (EControlRigComponentSpace)Space;
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
FVector UControlRigComponent::GetControlScale(FName ControlName, EControlRigComponentSpace Space) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigComponent.GetControlScale"));
    struct Params_GetControlScale {
        FName ControlName; // 0x0
        EControlRigComponentSpace Space; // 0x8
        char pad_9[0x3];
        FVector ReturnValue; // 0xc
    }; // Size: 0x18
    Params_GetControlScale params{};
    params.ControlName = (FName)ControlName;
    params.Space = (EControlRigComponentSpace)Space;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FRotator UControlRigComponent::GetControlRotator(FName ControlName, EControlRigComponentSpace Space) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigComponent.GetControlRotator"));
    struct Params_GetControlRotator {
        FName ControlName; // 0x0
        EControlRigComponentSpace Space; // 0x8
        char pad_9[0x3];
        FRotator ReturnValue; // 0xc
    }; // Size: 0x18
    Params_GetControlRotator params{};
    params.ControlName = (FName)ControlName;
    params.Space = (EControlRigComponentSpace)Space;
    ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
FTransform UControlRigComponent::GetControlOffset(FName ControlName, EControlRigComponentSpace Space) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigComponent.GetControlOffset"));
    struct Params_GetControlOffset {
        FName ControlName; // 0x0
        EControlRigComponentSpace Space; // 0x8
        char pad_9[0x7];
        FTransform ReturnValue; // 0x10
    }; // Size: 0x40
    Params_GetControlOffset params{};
    params.ControlName = (FName)ControlName;
    params.Space = (EControlRigComponentSpace)Space;
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
bool UControlRigComponent::GetControlBool(FName ControlName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigComponent.GetControlBool"));
    struct Params_GetControlBool {
        FName ControlName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetControlBool params{};
    params.ControlName = (FName)ControlName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FTransform UControlRigComponent::GetBoneTransform(FName BoneName, EControlRigComponentSpace Space) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigComponent.GetBoneTransform"));
    struct Params_GetBoneTransform {
        FName BoneName; // 0x0
        EControlRigComponentSpace Space; // 0x8
        char pad_9[0x7];
        FTransform ReturnValue; // 0x10
    }; // Size: 0x40
    Params_GetBoneTransform params{};
    params.BoneName = (FName)BoneName;
    params.Space = (EControlRigComponentSpace)Space;
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
float UControlRigComponent::GetAbsoluteTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigComponent.GetAbsoluteTime"));
    struct Params_GetAbsoluteTime {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetAbsoluteTime params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UControlRigComponent::DoesElementExist(FName Name, ERigElementType ElementType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigComponent.DoesElementExist"));
    struct Params_DoesElementExist {
        FName Name; // 0x0
        ERigElementType ElementType; // 0x8
        bool ReturnValue; // 0x9
    }; // Size: 0xa
    Params_DoesElementExist params{};
    params.Name = (FName)Name;
    params.ElementType = (ERigElementType)ElementType;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UControlRigComponent::ClearMappedElements() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigComponent.ClearMappedElements"));
    struct Params_ClearMappedElements {
    }; // Size: 0x0
    Params_ClearMappedElements params{};
    ProcessEvent(func, &params);
}
void UControlRigComponent::AddMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigComponent.AddMappedElements"));
    struct Params_AddMappedElements {
        TArray<FControlRigComponentMappedElement> NewMappedElements; // 0x0
    }; // Size: 0x10
    Params_AddMappedElements params{};
    params.NewMappedElements = (TArray<FControlRigComponentMappedElement>)NewMappedElements;
    ProcessEvent(func, &params);
}
void UControlRigComponent::AddMappedComponents(TArray<FControlRigComponentMappedComponent> Components) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigComponent.AddMappedComponents"));
    struct Params_AddMappedComponents {
        TArray<FControlRigComponentMappedComponent> Components; // 0x0
    }; // Size: 0x10
    Params_AddMappedComponents params{};
    params.Components = (TArray<FControlRigComponentMappedComponent>)Components;
    ProcessEvent(func, &params);
}
