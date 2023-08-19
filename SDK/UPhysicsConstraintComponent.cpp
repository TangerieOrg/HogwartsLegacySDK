#include "AActor.hpp"
#include "EAngularConstraintMotion.hpp"
#include "EAngularDriveMode\Type.hpp"
#include "EConstraintFrame\Type.hpp"
#include "ELinearConstraintMotion.hpp"
#include "FConstrainComponentPropName.hpp"
#include "FConstraintInstance.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UPhysicsConstraintComponent.hpp"
#include "UPhysicsConstraintTemplate.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
void UPhysicsConstraintComponent::SetAngularTwistLimit(EAngularConstraintMotion ConstraintType, float TwistLimitAngle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsConstraintComponent.SetAngularTwistLimit"));
    struct Params_SetAngularTwistLimit {
        EAngularConstraintMotion ConstraintType; // 0x0
        char pad_1[0x3];
        float TwistLimitAngle; // 0x4
    }; // Size: 0x8
    Params_SetAngularTwistLimit params{};
    params.ConstraintType = (EAngularConstraintMotion)ConstraintType;
    params.TwistLimitAngle = (float)TwistLimitAngle;
    ProcessEvent(func, &params);
}
UPhysicsConstraintComponent* UPhysicsConstraintComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PhysicsConstraintComponent");
    return (UPhysicsConstraintComponent*)res;
}
void UPhysicsConstraintComponent::SetOrientationDriveTwistAndSwing(bool bEnableTwistDrive, bool bEnableSwingDrive) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsConstraintComponent.SetOrientationDriveTwistAndSwing"));
    struct Params_SetOrientationDriveTwistAndSwing {
        bool bEnableTwistDrive; // 0x0
        bool bEnableSwingDrive; // 0x1
    }; // Size: 0x2
    Params_SetOrientationDriveTwistAndSwing params{};
    params.bEnableTwistDrive = (bool)bEnableTwistDrive;
    params.bEnableSwingDrive = (bool)bEnableSwingDrive;
    ProcessEvent(func, &params);
}
void UPhysicsConstraintComponent::SetOrientationDriveSLERP(bool bEnableSLERP) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsConstraintComponent.SetOrientationDriveSLERP"));
    struct Params_SetOrientationDriveSLERP {
        bool bEnableSLERP; // 0x0
    }; // Size: 0x1
    Params_SetOrientationDriveSLERP params{};
    params.bEnableSLERP = (bool)bEnableSLERP;
    ProcessEvent(func, &params);
}
void UPhysicsConstraintComponent::SetLinearZLimit(ELinearConstraintMotion ConstraintType, float LimitSize) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsConstraintComponent.SetLinearZLimit"));
    struct Params_SetLinearZLimit {
        ELinearConstraintMotion ConstraintType; // 0x0
        char pad_1[0x3];
        float LimitSize; // 0x4
    }; // Size: 0x8
    Params_SetLinearZLimit params{};
    params.ConstraintType = (ELinearConstraintMotion)ConstraintType;
    params.LimitSize = (float)LimitSize;
    ProcessEvent(func, &params);
}
void UPhysicsConstraintComponent::SetLinearVelocityTarget(FVector& InVelTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsConstraintComponent.SetLinearVelocityTarget"));
    struct Params_SetLinearVelocityTarget {
        FVector InVelTarget; // 0x0
    }; // Size: 0xc
    Params_SetLinearVelocityTarget params{};
    params.InVelTarget = (FVector)InVelTarget;
    ProcessEvent(func, &params);
    InVelTarget = params.InVelTarget;
}
void UPhysicsConstraintComponent::GetConstraintForce(FVector& OutLinearForce, FVector& OutAngularForce) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsConstraintComponent.GetConstraintForce"));
    struct Params_GetConstraintForce {
        FVector OutLinearForce; // 0x0
        FVector OutAngularForce; // 0xc
    }; // Size: 0x18
    Params_GetConstraintForce params{};
    params.OutLinearForce = (FVector)OutLinearForce;
    params.OutAngularForce = (FVector)OutAngularForce;
    ProcessEvent(func, &params);
    OutLinearForce = params.OutLinearForce;
    OutAngularForce = params.OutAngularForce;
}
void UPhysicsConstraintComponent::SetLinearXLimit(ELinearConstraintMotion ConstraintType, float LimitSize) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsConstraintComponent.SetLinearXLimit"));
    struct Params_SetLinearXLimit {
        ELinearConstraintMotion ConstraintType; // 0x0
        char pad_1[0x3];
        float LimitSize; // 0x4
    }; // Size: 0x8
    Params_SetLinearXLimit params{};
    params.ConstraintType = (ELinearConstraintMotion)ConstraintType;
    params.LimitSize = (float)LimitSize;
    ProcessEvent(func, &params);
}
void UPhysicsConstraintComponent::SetLinearYLimit(ELinearConstraintMotion ConstraintType, float LimitSize) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsConstraintComponent.SetLinearYLimit"));
    struct Params_SetLinearYLimit {
        ELinearConstraintMotion ConstraintType; // 0x0
        char pad_1[0x3];
        float LimitSize; // 0x4
    }; // Size: 0x8
    Params_SetLinearYLimit params{};
    params.ConstraintType = (ELinearConstraintMotion)ConstraintType;
    params.LimitSize = (float)LimitSize;
    ProcessEvent(func, &params);
}
void UPhysicsConstraintComponent::SetAngularVelocityDriveTwistAndSwing(bool bEnableTwistDrive, bool bEnableSwingDrive) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsConstraintComponent.SetAngularVelocityDriveTwistAndSwing"));
    struct Params_SetAngularVelocityDriveTwistAndSwing {
        bool bEnableTwistDrive; // 0x0
        bool bEnableSwingDrive; // 0x1
    }; // Size: 0x2
    Params_SetAngularVelocityDriveTwistAndSwing params{};
    params.bEnableTwistDrive = (bool)bEnableTwistDrive;
    params.bEnableSwingDrive = (bool)bEnableSwingDrive;
    ProcessEvent(func, &params);
}
void UPhysicsConstraintComponent::SetLinearVelocityDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsConstraintComponent.SetLinearVelocityDrive"));
    struct Params_SetLinearVelocityDrive {
        bool bEnableDriveX; // 0x0
        bool bEnableDriveY; // 0x1
        bool bEnableDriveZ; // 0x2
    }; // Size: 0x3
    Params_SetLinearVelocityDrive params{};
    params.bEnableDriveX = (bool)bEnableDriveX;
    params.bEnableDriveY = (bool)bEnableDriveY;
    params.bEnableDriveZ = (bool)bEnableDriveZ;
    ProcessEvent(func, &params);
}
void UPhysicsConstraintComponent::SetLinearPositionTarget(FVector& InPosTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsConstraintComponent.SetLinearPositionTarget"));
    struct Params_SetLinearPositionTarget {
        FVector InPosTarget; // 0x0
    }; // Size: 0xc
    Params_SetLinearPositionTarget params{};
    params.InPosTarget = (FVector)InPosTarget;
    ProcessEvent(func, &params);
    InPosTarget = params.InPosTarget;
}
void UPhysicsConstraintComponent::SetAngularPlasticity(bool bAngularPlasticity, float AngularPlasticityThreshold) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsConstraintComponent.SetAngularPlasticity"));
    struct Params_SetAngularPlasticity {
        bool bAngularPlasticity; // 0x0
        char pad_1[0x3];
        float AngularPlasticityThreshold; // 0x4
    }; // Size: 0x8
    Params_SetAngularPlasticity params{};
    params.bAngularPlasticity = (bool)bAngularPlasticity;
    params.AngularPlasticityThreshold = (float)AngularPlasticityThreshold;
    ProcessEvent(func, &params);
}
void UPhysicsConstraintComponent::SetConstraintReferenceFrame(EConstraintFrame::Type Frame, FTransform& RefFrame) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsConstraintComponent.SetConstraintReferenceFrame"));
    struct Params_SetConstraintReferenceFrame {
        EConstraintFrame::Type Frame; // 0x0
        char pad_1[0xf];
        FTransform RefFrame; // 0x10
    }; // Size: 0x40
    Params_SetConstraintReferenceFrame params{};
    params.Frame = (EConstraintFrame::Type)Frame;
    params.RefFrame = (FTransform)RefFrame;
    ProcessEvent(func, &params);
    RefFrame = params.RefFrame;
}
void UPhysicsConstraintComponent::SetLinearPositionDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsConstraintComponent.SetLinearPositionDrive"));
    struct Params_SetLinearPositionDrive {
        bool bEnableDriveX; // 0x0
        bool bEnableDriveY; // 0x1
        bool bEnableDriveZ; // 0x2
    }; // Size: 0x3
    Params_SetLinearPositionDrive params{};
    params.bEnableDriveX = (bool)bEnableDriveX;
    params.bEnableDriveY = (bool)bEnableDriveY;
    params.bEnableDriveZ = (bool)bEnableDriveZ;
    ProcessEvent(func, &params);
}
void UPhysicsConstraintComponent::SetLinearPlasticity(bool bLinearPlasticity, float LinearPlasticityThreshold) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsConstraintComponent.SetLinearPlasticity"));
    struct Params_SetLinearPlasticity {
        bool bLinearPlasticity; // 0x0
        char pad_1[0x3];
        float LinearPlasticityThreshold; // 0x4
    }; // Size: 0x8
    Params_SetLinearPlasticity params{};
    params.bLinearPlasticity = (bool)bLinearPlasticity;
    params.LinearPlasticityThreshold = (float)LinearPlasticityThreshold;
    ProcessEvent(func, &params);
}
void UPhysicsConstraintComponent::SetAngularSwing2Limit(EAngularConstraintMotion MotionType, float Swing2LimitAngle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsConstraintComponent.SetAngularSwing2Limit"));
    struct Params_SetAngularSwing2Limit {
        EAngularConstraintMotion MotionType; // 0x0
        char pad_1[0x3];
        float Swing2LimitAngle; // 0x4
    }; // Size: 0x8
    Params_SetAngularSwing2Limit params{};
    params.MotionType = (EAngularConstraintMotion)MotionType;
    params.Swing2LimitAngle = (float)Swing2LimitAngle;
    ProcessEvent(func, &params);
}
void UPhysicsConstraintComponent::SetAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsConstraintComponent.SetAngularVelocityDrive"));
    struct Params_SetAngularVelocityDrive {
        bool bEnableSwingDrive; // 0x0
        bool bEnableTwistDrive; // 0x1
    }; // Size: 0x2
    Params_SetAngularVelocityDrive params{};
    params.bEnableSwingDrive = (bool)bEnableSwingDrive;
    params.bEnableTwistDrive = (bool)bEnableTwistDrive;
    ProcessEvent(func, &params);
}
void UPhysicsConstraintComponent::SetLinearDriveParams(float PositionStrength, float VelocityStrength, float InForceLimit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsConstraintComponent.SetLinearDriveParams"));
    struct Params_SetLinearDriveParams {
        float PositionStrength; // 0x0
        float VelocityStrength; // 0x4
        float InForceLimit; // 0x8
    }; // Size: 0xc
    Params_SetLinearDriveParams params{};
    params.PositionStrength = (float)PositionStrength;
    params.VelocityStrength = (float)VelocityStrength;
    params.InForceLimit = (float)InForceLimit;
    ProcessEvent(func, &params);
}
bool UPhysicsConstraintComponent::IsBroken() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsConstraintComponent.IsBroken"));
    struct Params_IsBroken {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsBroken params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPhysicsConstraintComponent::SetLinearBreakable(bool bLinearBreakable, float LinearBreakThreshold) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsConstraintComponent.SetLinearBreakable"));
    struct Params_SetLinearBreakable {
        bool bLinearBreakable; // 0x0
        char pad_1[0x3];
        float LinearBreakThreshold; // 0x4
    }; // Size: 0x8
    Params_SetLinearBreakable params{};
    params.bLinearBreakable = (bool)bLinearBreakable;
    params.LinearBreakThreshold = (float)LinearBreakThreshold;
    ProcessEvent(func, &params);
}
void UPhysicsConstraintComponent::SetDisableCollision(bool bDisableCollision) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsConstraintComponent.SetDisableCollision"));
    struct Params_SetDisableCollision {
        bool bDisableCollision; // 0x0
    }; // Size: 0x1
    Params_SetDisableCollision params{};
    params.bDisableCollision = (bool)bDisableCollision;
    ProcessEvent(func, &params);
}
void UPhysicsConstraintComponent::SetConstraintReferencePosition(EConstraintFrame::Type Frame, FVector& RefPosition) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsConstraintComponent.SetConstraintReferencePosition"));
    struct Params_SetConstraintReferencePosition {
        EConstraintFrame::Type Frame; // 0x0
        char pad_1[0x3];
        FVector RefPosition; // 0x4
    }; // Size: 0x10
    Params_SetConstraintReferencePosition params{};
    params.Frame = (EConstraintFrame::Type)Frame;
    params.RefPosition = (FVector)RefPosition;
    ProcessEvent(func, &params);
    RefPosition = params.RefPosition;
}
void UPhysicsConstraintComponent::SetConstraintReferenceOrientation(EConstraintFrame::Type Frame, FVector& PriAxis, FVector& SecAxis) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsConstraintComponent.SetConstraintReferenceOrientation"));
    struct Params_SetConstraintReferenceOrientation {
        EConstraintFrame::Type Frame; // 0x0
        char pad_1[0x3];
        FVector PriAxis; // 0x4
        FVector SecAxis; // 0x10
    }; // Size: 0x1c
    Params_SetConstraintReferenceOrientation params{};
    params.Frame = (EConstraintFrame::Type)Frame;
    params.PriAxis = (FVector)PriAxis;
    params.SecAxis = (FVector)SecAxis;
    ProcessEvent(func, &params);
    PriAxis = params.PriAxis;
    SecAxis = params.SecAxis;
}
void UPhysicsConstraintComponent::SetConstrainedComponents(UPrimitiveComponent* Component1, FName BoneName1, UPrimitiveComponent* Component2, FName BoneName2) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsConstraintComponent.SetConstrainedComponents"));
    struct Params_SetConstrainedComponents {
        UPrimitiveComponent* Component1; // 0x0
        FName BoneName1; // 0x8
        UPrimitiveComponent* Component2; // 0x10
        FName BoneName2; // 0x18
    }; // Size: 0x20
    Params_SetConstrainedComponents params{};
    params.Component1 = (UPrimitiveComponent*)Component1;
    params.BoneName1 = (FName)BoneName1;
    params.Component2 = (UPrimitiveComponent*)Component2;
    params.BoneName2 = (FName)BoneName2;
    ProcessEvent(func, &params);
}
void UPhysicsConstraintComponent::SetAngularVelocityTarget(FVector& InVelTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsConstraintComponent.SetAngularVelocityTarget"));
    struct Params_SetAngularVelocityTarget {
        FVector InVelTarget; // 0x0
    }; // Size: 0xc
    Params_SetAngularVelocityTarget params{};
    params.InVelTarget = (FVector)InVelTarget;
    ProcessEvent(func, &params);
    InVelTarget = params.InVelTarget;
}
void UPhysicsConstraintComponent::SetAngularVelocityDriveSLERP(bool bEnableSLERP) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsConstraintComponent.SetAngularVelocityDriveSLERP"));
    struct Params_SetAngularVelocityDriveSLERP {
        bool bEnableSLERP; // 0x0
    }; // Size: 0x1
    Params_SetAngularVelocityDriveSLERP params{};
    params.bEnableSLERP = (bool)bEnableSLERP;
    ProcessEvent(func, &params);
}
void UPhysicsConstraintComponent::SetAngularSwing1Limit(EAngularConstraintMotion MotionType, float Swing1LimitAngle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsConstraintComponent.SetAngularSwing1Limit"));
    struct Params_SetAngularSwing1Limit {
        EAngularConstraintMotion MotionType; // 0x0
        char pad_1[0x3];
        float Swing1LimitAngle; // 0x4
    }; // Size: 0x8
    Params_SetAngularSwing1Limit params{};
    params.MotionType = (EAngularConstraintMotion)MotionType;
    params.Swing1LimitAngle = (float)Swing1LimitAngle;
    ProcessEvent(func, &params);
}
void UPhysicsConstraintComponent::SetAngularOrientationTarget(FRotator& InPosTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsConstraintComponent.SetAngularOrientationTarget"));
    struct Params_SetAngularOrientationTarget {
        FRotator InPosTarget; // 0x0
    }; // Size: 0xc
    Params_SetAngularOrientationTarget params{};
    params.InPosTarget = (FRotator)InPosTarget;
    ProcessEvent(func, &params);
    InPosTarget = params.InPosTarget;
}
void UPhysicsConstraintComponent::SetAngularOrientationDrive(bool bEnableSwingDrive, bool bEnableTwistDrive) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsConstraintComponent.SetAngularOrientationDrive"));
    struct Params_SetAngularOrientationDrive {
        bool bEnableSwingDrive; // 0x0
        bool bEnableTwistDrive; // 0x1
    }; // Size: 0x2
    Params_SetAngularOrientationDrive params{};
    params.bEnableSwingDrive = (bool)bEnableSwingDrive;
    params.bEnableTwistDrive = (bool)bEnableTwistDrive;
    ProcessEvent(func, &params);
}
float UPhysicsConstraintComponent::GetCurrentSwing1() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsConstraintComponent.GetCurrentSwing1"));
    struct Params_GetCurrentSwing1 {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCurrentSwing1 params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UPhysicsConstraintComponent::SetAngularDriveParams(float PositionStrength, float VelocityStrength, float InForceLimit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsConstraintComponent.SetAngularDriveParams"));
    struct Params_SetAngularDriveParams {
        float PositionStrength; // 0x0
        float VelocityStrength; // 0x4
        float InForceLimit; // 0x8
    }; // Size: 0xc
    Params_SetAngularDriveParams params{};
    params.PositionStrength = (float)PositionStrength;
    params.VelocityStrength = (float)VelocityStrength;
    params.InForceLimit = (float)InForceLimit;
    ProcessEvent(func, &params);
}
void UPhysicsConstraintComponent::SetAngularDriveMode(EAngularDriveMode::Type DriveMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsConstraintComponent.SetAngularDriveMode"));
    struct Params_SetAngularDriveMode {
        EAngularDriveMode::Type DriveMode; // 0x0
    }; // Size: 0x1
    Params_SetAngularDriveMode params{};
    params.DriveMode = (EAngularDriveMode::Type)DriveMode;
    ProcessEvent(func, &params);
}
void UPhysicsConstraintComponent::SetAngularBreakable(bool bAngularBreakable, float AngularBreakThreshold) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsConstraintComponent.SetAngularBreakable"));
    struct Params_SetAngularBreakable {
        bool bAngularBreakable; // 0x0
        char pad_1[0x3];
        float AngularBreakThreshold; // 0x4
    }; // Size: 0x8
    Params_SetAngularBreakable params{};
    params.bAngularBreakable = (bool)bAngularBreakable;
    params.AngularBreakThreshold = (float)AngularBreakThreshold;
    ProcessEvent(func, &params);
}
float UPhysicsConstraintComponent::GetCurrentTwist() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsConstraintComponent.GetCurrentTwist"));
    struct Params_GetCurrentTwist {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCurrentTwist params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UPhysicsConstraintComponent::GetCurrentSwing2() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsConstraintComponent.GetCurrentSwing2"));
    struct Params_GetCurrentSwing2 {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCurrentSwing2 params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UPhysicsConstraintComponent::BreakConstraint() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsConstraintComponent.BreakConstraint"));
    struct Params_BreakConstraint {
    }; // Size: 0x0
    Params_BreakConstraint params{};
    ProcessEvent(func, &params);
}
