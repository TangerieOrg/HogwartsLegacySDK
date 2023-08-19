#pragma once
#include <cstdint>
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
#include "UPrimitiveComponent.hpp"
class UClass;
class UControlRig;
class USkeletalMesh;
class USkeletalMeshComponent;
#pragma pack(push, 1)
class UControlRigComponent : public UPrimitiveComponent {
public:
    UClass* ControlRigClass; // 0x480
    char pad_488[0x50];
    TArray<FControlRigComponentMappedElement> MappedElements; // 0x4d8
    bool bResetTransformBeforeTick; // 0x4e8
    bool bResetInitialsBeforeSetup; // 0x4e9
    bool bUpdateRigOnTick; // 0x4ea
    bool bUpdateInEditor; // 0x4eb
    bool bDrawBones; // 0x4ec
    bool bShowDebugDrawing; // 0x4ed
    char pad_4ee[0x2];
    UControlRig* ControlRig; // 0x4f0
    char pad_4f8[0x68];
    static UControlRigComponent* StaticClass();
    void Update(float DeltaTime);
    void SetMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements);
    void SetInitialSpaceTransform(FName SpaceName, FTransform InitialTransform, EControlRigComponentSpace Space);
    void SetInitialBoneTransform(FName BoneName, FTransform InitialTransform, EControlRigComponentSpace Space, bool bPropagateToChildren);
    void SetControlVector2D(FName ControlName, FVector2D Value);
    void SetControlTransform(FName ControlName, FTransform Value, EControlRigComponentSpace Space);
    void SetControlScale(FName ControlName, FVector Value, EControlRigComponentSpace Space);
    void SetControlRotator(FName ControlName, FRotator Value, EControlRigComponentSpace Space);
    void SetControlPosition(FName ControlName, FVector Value, EControlRigComponentSpace Space);
    void SetControlOffset(FName ControlName, FTransform OffsetTransform, EControlRigComponentSpace Space);
    void SetControlInt(FName ControlName, int32_t Value);
    void SetControlFloat(FName ControlName, float Value);
    void SetControlBool(FName ControlName, bool Value);
    void SetBoneTransform(FName BoneName, FTransform Transform, EControlRigComponentSpace Space, float weight, bool bPropagateToChildren);
    void SetBoneInitialTransformsFromSkeletalMesh(USkeletalMesh* InSkeletalMesh);
    void OnPreUpdate(UControlRigComponent* Component);
    void OnPreSetup(UControlRigComponent* Component);
    void OnPostUpdate(UControlRigComponent* Component);
    void OnPostSetup(UControlRigComponent* Component);
    void OnPostInitialize(UControlRigComponent* Component);
    void Initialize();
    FTransform GetSpaceTransform(FName SpaceName, EControlRigComponentSpace Space);
    FTransform GetInitialSpaceTransform(FName SpaceName, EControlRigComponentSpace Space);
    FTransform GetInitialBoneTransform(FName BoneName, EControlRigComponentSpace Space);
    TArray<FName> GetElementNames(ERigElementType ElementType);
    FVector2D GetControlVector2D(FName ControlName);
    FTransform GetControlTransform(FName ControlName, EControlRigComponentSpace Space);
    FVector GetControlScale(FName ControlName, EControlRigComponentSpace Space);
    FRotator GetControlRotator(FName ControlName, EControlRigComponentSpace Space);
    UControlRig* GetControlRig();
    FVector GetControlPosition(FName ControlName, EControlRigComponentSpace Space);
    FTransform GetControlOffset(FName ControlName, EControlRigComponentSpace Space);
    int32_t GetControlInt(FName ControlName);
    float GetControlFloat(FName ControlName);
    bool GetControlBool(FName ControlName);
    FTransform GetBoneTransform(FName BoneName, EControlRigComponentSpace Space);
    float GetAbsoluteTime();
    bool DoesElementExist(FName Name, ERigElementType ElementType);
    void ClearMappedElements();
    void AddMappedSkeletalMesh(USkeletalMeshComponent* SkeletalMeshComponent, TArray<FControlRigComponentMappedBone> Bones, TArray<FControlRigComponentMappedCurve> Curves);
    void AddMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements);
    void AddMappedComponents(TArray<FControlRigComponentMappedComponent> Components);
    void AddMappedCompleteSkeletalMesh(USkeletalMeshComponent* SkeletalMeshComponent);
}; // Size: 0x560
#pragma pack(pop)
