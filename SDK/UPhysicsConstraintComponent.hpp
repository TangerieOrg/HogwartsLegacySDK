#pragma once
#include <cstdint>
#include "EAngularConstraintMotion.hpp"
#include "EAngularDriveMode\Type.hpp"
#include "EConstraintFrame\Type.hpp"
#include "ELinearConstraintMotion.hpp"
#include "FConstrainComponentPropName.hpp"
#include "FConstraintInstance.hpp"
#include "USceneComponent.hpp"
class AActor;
class UPhysicsConstraintTemplate;
struct FVector;
struct FTransform;
class UPrimitiveComponent;
struct FRotator;
#pragma pack(push, 1)
class UPhysicsConstraintComponent : public USceneComponent {
public:
    FConstrainComponentPropName ComponentName1; // 0x220
    AActor* ConstraintActor2; // 0x228
    FConstrainComponentPropName ComponentName2; // 0x230
    char pad_238[0x10];
    UPhysicsConstraintTemplate* ConstraintSetup; // 0x248
    char pad_250[0x10];
    FConstraintInstance ConstraintInstance; // 0x260
    static UPhysicsConstraintComponent* StaticClass();
    void SetOrientationDriveTwistAndSwing(bool bEnableTwistDrive, bool bEnableSwingDrive);
    void SetOrientationDriveSLERP(bool bEnableSLERP);
    void SetLinearZLimit(ELinearConstraintMotion ConstraintType, float LimitSize);
    void SetLinearYLimit(ELinearConstraintMotion ConstraintType, float LimitSize);
    void SetLinearXLimit(ELinearConstraintMotion ConstraintType, float LimitSize);
    void SetLinearVelocityTarget(FVector& InVelTarget);
    void SetLinearVelocityDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ);
    void SetLinearPositionTarget(FVector& InPosTarget);
    void SetLinearPositionDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ);
    void SetLinearPlasticity(bool bLinearPlasticity, float LinearPlasticityThreshold);
    void SetLinearDriveParams(float PositionStrength, float VelocityStrength, float InForceLimit);
    void SetLinearBreakable(bool bLinearBreakable, float LinearBreakThreshold);
    void SetDisableCollision(bool bDisableCollision);
    void SetConstraintReferencePosition(EConstraintFrame::Type Frame, FVector& RefPosition);
    void SetConstraintReferenceOrientation(EConstraintFrame::Type Frame, FVector& PriAxis, FVector& SecAxis);
    void SetConstraintReferenceFrame(EConstraintFrame::Type Frame, FTransform& RefFrame);
    void SetConstrainedComponents(UPrimitiveComponent* Component1, FName BoneName1, UPrimitiveComponent* Component2, FName BoneName2);
    void SetAngularVelocityTarget(FVector& InVelTarget);
    void SetAngularVelocityDriveTwistAndSwing(bool bEnableTwistDrive, bool bEnableSwingDrive);
    void SetAngularVelocityDriveSLERP(bool bEnableSLERP);
    void SetAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive);
    void SetAngularTwistLimit(EAngularConstraintMotion ConstraintType, float TwistLimitAngle);
    void SetAngularSwing2Limit(EAngularConstraintMotion MotionType, float Swing2LimitAngle);
    void SetAngularSwing1Limit(EAngularConstraintMotion MotionType, float Swing1LimitAngle);
    void SetAngularPlasticity(bool bAngularPlasticity, float AngularPlasticityThreshold);
    void SetAngularOrientationTarget(FRotator& InPosTarget);
    void SetAngularOrientationDrive(bool bEnableSwingDrive, bool bEnableTwistDrive);
    void SetAngularDriveParams(float PositionStrength, float VelocityStrength, float InForceLimit);
    void SetAngularDriveMode(EAngularDriveMode::Type DriveMode);
    void SetAngularBreakable(bool bAngularBreakable, float AngularBreakThreshold);
    bool IsBroken();
    float GetCurrentTwist();
    float GetCurrentSwing2();
    float GetCurrentSwing1();
    void GetConstraintForce(FVector& OutLinearForce, FVector& OutAngularForce);
    void BreakConstraint();
}; // Size: 0x430
#pragma pack(pop)
