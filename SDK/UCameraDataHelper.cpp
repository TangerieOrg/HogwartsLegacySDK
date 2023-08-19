#include "AActor.hpp"
#include "APlayerController.hpp"
#include "FBox2D.hpp"
#include "FCameraData.hpp"
#include "FMatrix.hpp"
#include "FPlane.hpp"
#include "FQuat.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UCameraDataHelper.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UCameraDataHelper* UCameraDataHelper::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraDataHelper");
    return (UCameraDataHelper*)res;
}
FRotator UCameraDataHelper::VecToRot(FVector Vec) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraDataHelper.VecToRot"));
    struct Params_VecToRot {
        FVector Vec; // 0x0
        FRotator ReturnValue; // 0xc
    }; // Size: 0x18
    Params_VecToRot params{};
    params.Vec = (FVector)Vec;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
bool UCameraDataHelper::GetScreenLocationAtWorldLocation(FVector& InWorldLocation, FMatrix& InViewProjectionMatrix, FVector2D& OutScreenLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraDataHelper.GetScreenLocationAtWorldLocation"));
    struct Params_GetScreenLocationAtWorldLocation {
        FVector InWorldLocation; // 0x0
        char pad_c[0x4];
        FMatrix InViewProjectionMatrix; // 0x10
        FVector2D OutScreenLocation; // 0x50
        bool ReturnValue; // 0x58
    }; // Size: 0x59
    Params_GetScreenLocationAtWorldLocation params{};
    params.InWorldLocation = (FVector)InWorldLocation;
    params.InViewProjectionMatrix = (FMatrix)InViewProjectionMatrix;
    params.OutScreenLocation = (FVector2D)OutScreenLocation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InWorldLocation = params.InWorldLocation;
    InViewProjectionMatrix = params.InViewProjectionMatrix;
    OutScreenLocation = params.OutScreenLocation;
    return (bool)params.ReturnValue;
}
FRotator UCameraDataHelper::ToOrientationRotator(FVector Vec) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraDataHelper.ToOrientationRotator"));
    struct Params_ToOrientationRotator {
        FVector Vec; // 0x0
        FRotator ReturnValue; // 0xc
    }; // Size: 0x18
    Params_ToOrientationRotator params{};
    params.Vec = (FVector)Vec;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
void UCameraDataHelper::SetTargetOffset(FCameraData& CameraData, FVector Value, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraDataHelper.SetTargetOffset"));
    struct Params_SetTargetOffset {
        FCameraData CameraData; // 0x0
        FVector Value; // 0xb0
        FVector Velocity; // 0xbc
    }; // Size: 0xc8
    Params_SetTargetOffset params{};
    params.CameraData = (FCameraData)CameraData;
    params.Value = (FVector)Value;
    params.Velocity = (FVector)Velocity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CameraData = params.CameraData;
}
void UCameraDataHelper::SetCameraSpaceTranslation(FCameraData& CameraData, FVector Value, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraDataHelper.SetCameraSpaceTranslation"));
    struct Params_SetCameraSpaceTranslation {
        FCameraData CameraData; // 0x0
        FVector Value; // 0xb0
        FVector Velocity; // 0xbc
    }; // Size: 0xc8
    Params_SetCameraSpaceTranslation params{};
    params.CameraData = (FCameraData)CameraData;
    params.Value = (FVector)Value;
    params.Velocity = (FVector)Velocity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CameraData = params.CameraData;
}
void UCameraDataHelper::RotateAroundLocation(FVector& TargetLocation, FVector& InOutViewLocation, FRotator& InOutViewRotation, float AngleInRadians) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraDataHelper.RotateAroundLocation"));
    struct Params_RotateAroundLocation {
        FVector TargetLocation; // 0x0
        FVector InOutViewLocation; // 0xc
        FRotator InOutViewRotation; // 0x18
        float AngleInRadians; // 0x24
    }; // Size: 0x28
    Params_RotateAroundLocation params{};
    params.TargetLocation = (FVector)TargetLocation;
    params.InOutViewLocation = (FVector)InOutViewLocation;
    params.InOutViewRotation = (FRotator)InOutViewRotation;
    params.AngleInRadians = (float)AngleInRadians;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TargetLocation = params.TargetLocation;
    InOutViewLocation = params.InOutViewLocation;
    InOutViewRotation = params.InOutViewRotation;
}
void UCameraDataHelper::SetRotation(FCameraData& CameraData, FRotator Value, FRotator Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraDataHelper.SetRotation"));
    struct Params_SetRotation {
        FCameraData CameraData; // 0x0
        FRotator Value; // 0xb0
        FRotator Velocity; // 0xbc
    }; // Size: 0xc8
    Params_SetRotation params{};
    params.CameraData = (FCameraData)CameraData;
    params.Value = (FRotator)Value;
    params.Velocity = (FRotator)Velocity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CameraData = params.CameraData;
}
void UCameraDataHelper::GetTargetOffset(FCameraData& CameraData, FVector& OutValue, FVector& OutVelocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraDataHelper.GetTargetOffset"));
    struct Params_GetTargetOffset {
        FCameraData CameraData; // 0x0
        FVector OutValue; // 0xb0
        FVector OutVelocity; // 0xbc
    }; // Size: 0xc8
    Params_GetTargetOffset params{};
    params.CameraData = (FCameraData)CameraData;
    params.OutValue = (FVector)OutValue;
    params.OutVelocity = (FVector)OutVelocity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CameraData = params.CameraData;
    OutValue = params.OutValue;
    OutVelocity = params.OutVelocity;
}
void UCameraDataHelper::SetFocusDistance(FCameraData& CameraData, float Value, float Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraDataHelper.SetFocusDistance"));
    struct Params_SetFocusDistance {
        FCameraData CameraData; // 0x0
        float Value; // 0xb0
        float Velocity; // 0xb4
    }; // Size: 0xb8
    Params_SetFocusDistance params{};
    params.CameraData = (FCameraData)CameraData;
    params.Value = (float)Value;
    params.Velocity = (float)Velocity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CameraData = params.CameraData;
}
void UCameraDataHelper::SetFieldOfView(FCameraData& CameraData, float Value, float Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraDataHelper.SetFieldOfView"));
    struct Params_SetFieldOfView {
        FCameraData CameraData; // 0x0
        float Value; // 0xb0
        float Velocity; // 0xb4
    }; // Size: 0xb8
    Params_SetFieldOfView params{};
    params.CameraData = (FCameraData)CameraData;
    params.Value = (float)Value;
    params.Velocity = (float)Velocity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CameraData = params.CameraData;
}
void UCameraDataHelper::GetCameraSpaceTranslation(FCameraData& CameraData, FVector& OutValue, FVector& OutVelocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraDataHelper.GetCameraSpaceTranslation"));
    struct Params_GetCameraSpaceTranslation {
        FCameraData CameraData; // 0x0
        FVector OutValue; // 0xb0
        FVector OutVelocity; // 0xbc
    }; // Size: 0xc8
    Params_GetCameraSpaceTranslation params{};
    params.CameraData = (FCameraData)CameraData;
    params.OutValue = (FVector)OutValue;
    params.OutVelocity = (FVector)OutVelocity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CameraData = params.CameraData;
    OutValue = params.OutValue;
    OutVelocity = params.OutVelocity;
}
void UCameraDataHelper::SetArmLength(FCameraData& CameraData, float Value, float Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraDataHelper.SetArmLength"));
    struct Params_SetArmLength {
        FCameraData CameraData; // 0x0
        float Value; // 0xb0
        float Velocity; // 0xb4
    }; // Size: 0xb8
    Params_SetArmLength params{};
    params.CameraData = (FCameraData)CameraData;
    params.Value = (float)Value;
    params.Velocity = (float)Velocity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CameraData = params.CameraData;
}
void UCameraDataHelper::SetCameraSpaceRotation(FCameraData& CameraData, FRotator Value, FRotator Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraDataHelper.SetCameraSpaceRotation"));
    struct Params_SetCameraSpaceRotation {
        FCameraData CameraData; // 0x0
        FRotator Value; // 0xb0
        FRotator Velocity; // 0xbc
    }; // Size: 0xc8
    Params_SetCameraSpaceRotation params{};
    params.CameraData = (FCameraData)CameraData;
    params.Value = (FRotator)Value;
    params.Velocity = (FRotator)Velocity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CameraData = params.CameraData;
}
void UCameraDataHelper::SetArmOrigin(FCameraData& CameraData, FVector Value, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraDataHelper.SetArmOrigin"));
    struct Params_SetArmOrigin {
        FCameraData CameraData; // 0x0
        FVector Value; // 0xb0
        FVector Velocity; // 0xbc
    }; // Size: 0xc8
    Params_SetArmOrigin params{};
    params.CameraData = (FCameraData)CameraData;
    params.Value = (FVector)Value;
    params.Velocity = (FVector)Velocity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CameraData = params.CameraData;
}
float UCameraDataHelper::SafeUnwindDegrees(float Deg) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraDataHelper.SafeUnwindDegrees"));
    struct Params_SafeUnwindDegrees {
        float Deg; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_SafeUnwindDegrees params{};
    params.Deg = (float)Deg;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UCameraDataHelper::SetAperture(FCameraData& CameraData, float Value, float Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraDataHelper.SetAperture"));
    struct Params_SetAperture {
        FCameraData CameraData; // 0x0
        float Value; // 0xb0
        float Velocity; // 0xb4
    }; // Size: 0xb8
    Params_SetAperture params{};
    params.CameraData = (FCameraData)CameraData;
    params.Value = (float)Value;
    params.Velocity = (float)Velocity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CameraData = params.CameraData;
}
void UCameraDataHelper::SetAccumulatedRotationDelta(FCameraData& CameraData, FRotator Value, FRotator Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraDataHelper.SetAccumulatedRotationDelta"));
    struct Params_SetAccumulatedRotationDelta {
        FCameraData CameraData; // 0x0
        FRotator Value; // 0xb0
        FRotator Velocity; // 0xbc
    }; // Size: 0xc8
    Params_SetAccumulatedRotationDelta params{};
    params.CameraData = (FCameraData)CameraData;
    params.Value = (FRotator)Value;
    params.Velocity = (FRotator)Velocity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CameraData = params.CameraData;
}
FVector UCameraDataHelper::RotToVec(FRotator Rot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraDataHelper.RotToVec"));
    struct Params_RotToVec {
        FRotator Rot; // 0x0
        FVector ReturnValue; // 0xc
    }; // Size: 0x18
    Params_RotToVec params{};
    params.Rot = (FRotator)Rot;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector UCameraDataHelper::RayPlaneIntersection(FVector& RayOrigin, FVector& RayDirection, FPlane& Plane) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraDataHelper.RayPlaneIntersection"));
    struct Params_RayPlaneIntersection {
        FVector RayOrigin; // 0x0
        FVector RayDirection; // 0xc
        char pad_18[0x8];
        FPlane Plane; // 0x20
        FVector ReturnValue; // 0x30
    }; // Size: 0x3c
    Params_RayPlaneIntersection params{};
    params.RayOrigin = (FVector)RayOrigin;
    params.RayDirection = (FVector)RayDirection;
    params.Plane = (FPlane)Plane;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    RayOrigin = params.RayOrigin;
    RayDirection = params.RayDirection;
    Plane = params.Plane;
    return (FVector)params.ReturnValue;
}
FVector UCameraDataHelper::GetWorldDirectionAtScreenLocation(FVector2D& InScreenLocation, FMatrix& InInvViewProjectionMatrix) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraDataHelper.GetWorldDirectionAtScreenLocation"));
    struct Params_GetWorldDirectionAtScreenLocation {
        FVector2D InScreenLocation; // 0x0
        char pad_8[0x8];
        FMatrix InInvViewProjectionMatrix; // 0x10
        FVector ReturnValue; // 0x50
    }; // Size: 0x5c
    Params_GetWorldDirectionAtScreenLocation params{};
    params.InScreenLocation = (FVector2D)InScreenLocation;
    params.InInvViewProjectionMatrix = (FMatrix)InInvViewProjectionMatrix;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InInvViewProjectionMatrix = params.InInvViewProjectionMatrix;
    InScreenLocation = params.InScreenLocation;
    return (FVector)params.ReturnValue;
}
void UCameraDataHelper::GetRotation(FCameraData& CameraData, FRotator& OutValue, FRotator& OutVelocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraDataHelper.GetRotation"));
    struct Params_GetRotation {
        FCameraData CameraData; // 0x0
        FRotator OutValue; // 0xb0
        FRotator OutVelocity; // 0xbc
    }; // Size: 0xc8
    Params_GetRotation params{};
    params.CameraData = (FCameraData)CameraData;
    params.OutValue = (FRotator)OutValue;
    params.OutVelocity = (FRotator)OutVelocity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CameraData = params.CameraData;
    OutValue = params.OutValue;
    OutVelocity = params.OutVelocity;
}
float UCameraDataHelper::GetFOVFromFocalLength(float InFocalLength, float InSensorWidth, bool bIncOffset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraDataHelper.GetFOVFromFocalLength"));
    struct Params_GetFOVFromFocalLength {
        float InFocalLength; // 0x0
        float InSensorWidth; // 0x4
        bool bIncOffset; // 0x8
        char pad_9[0x3];
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_GetFOVFromFocalLength params{};
    params.InFocalLength = (float)InFocalLength;
    params.InSensorWidth = (float)InSensorWidth;
    params.bIncOffset = (bool)bIncOffset;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UCameraDataHelper::AddFieldOfView(FCameraData& CameraData, float Value, float Velocity, float Scale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraDataHelper.AddFieldOfView"));
    struct Params_AddFieldOfView {
        FCameraData CameraData; // 0x0
        float Value; // 0xb0
        float Velocity; // 0xb4
        float Scale; // 0xb8
    }; // Size: 0xbc
    Params_AddFieldOfView params{};
    params.CameraData = (FCameraData)CameraData;
    params.Value = (float)Value;
    params.Velocity = (float)Velocity;
    params.Scale = (float)Scale;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CameraData = params.CameraData;
}
void UCameraDataHelper::GetFocusDistance(FCameraData& CameraData, float& OutValue, float& OutVelocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraDataHelper.GetFocusDistance"));
    struct Params_GetFocusDistance {
        FCameraData CameraData; // 0x0
        float OutValue; // 0xb0
        float OutVelocity; // 0xb4
    }; // Size: 0xb8
    Params_GetFocusDistance params{};
    params.CameraData = (FCameraData)CameraData;
    params.OutValue = (float)OutValue;
    params.OutVelocity = (float)OutVelocity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CameraData = params.CameraData;
    OutValue = params.OutValue;
    OutVelocity = params.OutVelocity;
}
float UCameraDataHelper::GetFocalLengthFromFOV(float InFieldOfView, float InSensorWidth, bool bIncOffset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraDataHelper.GetFocalLengthFromFOV"));
    struct Params_GetFocalLengthFromFOV {
        float InFieldOfView; // 0x0
        float InSensorWidth; // 0x4
        bool bIncOffset; // 0x8
        char pad_9[0x3];
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_GetFocalLengthFromFOV params{};
    params.InFieldOfView = (float)InFieldOfView;
    params.InSensorWidth = (float)InSensorWidth;
    params.bIncOffset = (bool)bIncOffset;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UCameraDataHelper::GetFieldOfView(FCameraData& CameraData, float& OutValue, float& OutVelocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraDataHelper.GetFieldOfView"));
    struct Params_GetFieldOfView {
        FCameraData CameraData; // 0x0
        float OutValue; // 0xb0
        float OutVelocity; // 0xb4
    }; // Size: 0xb8
    Params_GetFieldOfView params{};
    params.CameraData = (FCameraData)CameraData;
    params.OutValue = (float)OutValue;
    params.OutVelocity = (float)OutVelocity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CameraData = params.CameraData;
    OutValue = params.OutValue;
    OutVelocity = params.OutVelocity;
}
void UCameraDataHelper::AddFocusDistance(FCameraData& CameraData, float Value, float Velocity, float Scale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraDataHelper.AddFocusDistance"));
    struct Params_AddFocusDistance {
        FCameraData CameraData; // 0x0
        float Value; // 0xb0
        float Velocity; // 0xb4
        float Scale; // 0xb8
    }; // Size: 0xbc
    Params_AddFocusDistance params{};
    params.CameraData = (FCameraData)CameraData;
    params.Value = (float)Value;
    params.Velocity = (float)Velocity;
    params.Scale = (float)Scale;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CameraData = params.CameraData;
}
void UCameraDataHelper::GetCameraSpaceRotation(FCameraData& CameraData, FRotator& OutValue, FRotator& OutVelocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraDataHelper.GetCameraSpaceRotation"));
    struct Params_GetCameraSpaceRotation {
        FCameraData CameraData; // 0x0
        FRotator OutValue; // 0xb0
        FRotator OutVelocity; // 0xbc
    }; // Size: 0xc8
    Params_GetCameraSpaceRotation params{};
    params.CameraData = (FCameraData)CameraData;
    params.OutValue = (FRotator)OutValue;
    params.OutVelocity = (FRotator)OutVelocity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CameraData = params.CameraData;
    OutValue = params.OutValue;
    OutVelocity = params.OutVelocity;
}
void UCameraDataHelper::DeprojectScreenToWorldStable(APlayerController* PlayerController, FVector2D& InScreenPosition, FVector& OutLocation, FVector& OutDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraDataHelper.DeprojectScreenToWorldStable"));
    struct Params_DeprojectScreenToWorldStable {
        APlayerController* PlayerController; // 0x0
        FVector2D InScreenPosition; // 0x8
        FVector OutLocation; // 0x10
        FVector OutDirection; // 0x1c
    }; // Size: 0x28
    Params_DeprojectScreenToWorldStable params{};
    params.PlayerController = (APlayerController*)PlayerController;
    params.InScreenPosition = (FVector2D)InScreenPosition;
    params.OutLocation = (FVector)OutLocation;
    params.OutDirection = (FVector)OutDirection;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InScreenPosition = params.InScreenPosition;
    OutLocation = params.OutLocation;
    OutDirection = params.OutDirection;
}
void UCameraDataHelper::GetArmOrigin(FCameraData& CameraData, FVector& OutValue, FVector& OutVelocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraDataHelper.GetArmOrigin"));
    struct Params_GetArmOrigin {
        FCameraData CameraData; // 0x0
        FVector OutValue; // 0xb0
        FVector OutVelocity; // 0xbc
    }; // Size: 0xc8
    Params_GetArmOrigin params{};
    params.CameraData = (FCameraData)CameraData;
    params.OutValue = (FVector)OutValue;
    params.OutVelocity = (FVector)OutVelocity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CameraData = params.CameraData;
    OutValue = params.OutValue;
    OutVelocity = params.OutVelocity;
}
void UCameraDataHelper::GetArmLength(FCameraData& CameraData, float& OutValue, float& OutVelocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraDataHelper.GetArmLength"));
    struct Params_GetArmLength {
        FCameraData CameraData; // 0x0
        float OutValue; // 0xb0
        float OutVelocity; // 0xb4
    }; // Size: 0xb8
    Params_GetArmLength params{};
    params.CameraData = (FCameraData)CameraData;
    params.OutValue = (float)OutValue;
    params.OutVelocity = (float)OutVelocity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CameraData = params.CameraData;
    OutValue = params.OutValue;
    OutVelocity = params.OutVelocity;
}
void UCameraDataHelper::GetAperture(FCameraData& CameraData, float& OutValue, float& OutVelocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraDataHelper.GetAperture"));
    struct Params_GetAperture {
        FCameraData CameraData; // 0x0
        float OutValue; // 0xb0
        float OutVelocity; // 0xb4
    }; // Size: 0xb8
    Params_GetAperture params{};
    params.CameraData = (FCameraData)CameraData;
    params.OutValue = (float)OutValue;
    params.OutVelocity = (float)OutVelocity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CameraData = params.CameraData;
    OutValue = params.OutValue;
    OutVelocity = params.OutVelocity;
}
void UCameraDataHelper::AddRotation(FCameraData& CameraData, FRotator Value, FRotator Velocity, float Scale, bool bAccumulate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraDataHelper.AddRotation"));
    struct Params_AddRotation {
        FCameraData CameraData; // 0x0
        FRotator Value; // 0xb0
        FRotator Velocity; // 0xbc
        float Scale; // 0xc8
        bool bAccumulate; // 0xcc
    }; // Size: 0xcd
    Params_AddRotation params{};
    params.CameraData = (FCameraData)CameraData;
    params.Value = (FRotator)Value;
    params.Velocity = (FRotator)Velocity;
    params.Scale = (float)Scale;
    params.bAccumulate = (bool)bAccumulate;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CameraData = params.CameraData;
}
void UCameraDataHelper::GetAccumulatedRotationDelta(FCameraData& CameraData, FRotator& OutValue, FRotator& OutVelocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraDataHelper.GetAccumulatedRotationDelta"));
    struct Params_GetAccumulatedRotationDelta {
        FCameraData CameraData; // 0x0
        FRotator OutValue; // 0xb0
        FRotator OutVelocity; // 0xbc
    }; // Size: 0xc8
    Params_GetAccumulatedRotationDelta params{};
    params.CameraData = (FCameraData)CameraData;
    params.OutValue = (FRotator)OutValue;
    params.OutVelocity = (FRotator)OutVelocity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CameraData = params.CameraData;
    OutValue = params.OutValue;
    OutVelocity = params.OutVelocity;
}
void UCameraDataHelper::AddTargetOffset(FCameraData& CameraData, FVector Value, FVector Velocity, float Scale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraDataHelper.AddTargetOffset"));
    struct Params_AddTargetOffset {
        FCameraData CameraData; // 0x0
        FVector Value; // 0xb0
        FVector Velocity; // 0xbc
        float Scale; // 0xc8
    }; // Size: 0xcc
    Params_AddTargetOffset params{};
    params.CameraData = (FCameraData)CameraData;
    params.Value = (FVector)Value;
    params.Velocity = (FVector)Velocity;
    params.Scale = (float)Scale;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CameraData = params.CameraData;
}
float UCameraDataHelper::FindSwingTwistDecomposition(FQuat& Quat, FVector& Axis) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraDataHelper.FindSwingTwistDecomposition"));
    struct Params_FindSwingTwistDecomposition {
        FQuat Quat; // 0x0
        FVector Axis; // 0x10
        float ReturnValue; // 0x1c
    }; // Size: 0x20
    Params_FindSwingTwistDecomposition params{};
    params.Quat = (FQuat)Quat;
    params.Axis = (FVector)Axis;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Quat = params.Quat;
    Axis = params.Axis;
    return (float)params.ReturnValue;
}
FMatrix UCameraDataHelper::ComputeViewProjectionMatrix(AActor* InTargetActor, FTransform& InCameraTransform, float InFieldOfView) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraDataHelper.ComputeViewProjectionMatrix"));
    struct Params_ComputeViewProjectionMatrix {
        AActor* InTargetActor; // 0x0
        char pad_8[0x8];
        FTransform InCameraTransform; // 0x10
        float InFieldOfView; // 0x40
        char pad_44[0xc];
        FMatrix ReturnValue; // 0x50
    }; // Size: 0x90
    Params_ComputeViewProjectionMatrix params{};
    params.InTargetActor = (AActor*)InTargetActor;
    params.InCameraTransform = (FTransform)InCameraTransform;
    params.InFieldOfView = (float)InFieldOfView;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InCameraTransform = params.InCameraTransform;
    return (FMatrix)params.ReturnValue;
}
FVector UCameraDataHelper::ComputeClosestDirectionInFrustum(FVector& InTargetDirection, FBox2D& InScreenArea, FVector& InEyeLocation, FMatrix& InViewProjMatrix, FMatrix& InInvViewProjMatrix) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraDataHelper.ComputeClosestDirectionInFrustum"));
    struct Params_ComputeClosestDirectionInFrustum {
        FVector InTargetDirection; // 0x0
        FBox2D InScreenArea; // 0xc
        FVector InEyeLocation; // 0x20
        char pad_2c[0x4];
        FMatrix InViewProjMatrix; // 0x30
        FMatrix InInvViewProjMatrix; // 0x70
        FVector ReturnValue; // 0xb0
    }; // Size: 0xbc
    Params_ComputeClosestDirectionInFrustum params{};
    params.InTargetDirection = (FVector)InTargetDirection;
    params.InScreenArea = (FBox2D)InScreenArea;
    params.InEyeLocation = (FVector)InEyeLocation;
    params.InViewProjMatrix = (FMatrix)InViewProjMatrix;
    params.InInvViewProjMatrix = (FMatrix)InInvViewProjMatrix;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InTargetDirection = params.InTargetDirection;
    InScreenArea = params.InScreenArea;
    InViewProjMatrix = params.InViewProjMatrix;
    InEyeLocation = params.InEyeLocation;
    InInvViewProjMatrix = params.InInvViewProjMatrix;
    return (FVector)params.ReturnValue;
}
void UCameraDataHelper::AddCameraSpaceTranslation(FCameraData& CameraData, FVector Value, FVector Velocity, float Scale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraDataHelper.AddCameraSpaceTranslation"));
    struct Params_AddCameraSpaceTranslation {
        FCameraData CameraData; // 0x0
        FVector Value; // 0xb0
        FVector Velocity; // 0xbc
        float Scale; // 0xc8
    }; // Size: 0xcc
    Params_AddCameraSpaceTranslation params{};
    params.CameraData = (FCameraData)CameraData;
    params.Value = (FVector)Value;
    params.Velocity = (FVector)Velocity;
    params.Scale = (float)Scale;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CameraData = params.CameraData;
}
void UCameraDataHelper::AddCameraSpaceRotation(FCameraData& CameraData, FRotator Value, FRotator Velocity, float Scale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraDataHelper.AddCameraSpaceRotation"));
    struct Params_AddCameraSpaceRotation {
        FCameraData CameraData; // 0x0
        FRotator Value; // 0xb0
        FRotator Velocity; // 0xbc
        float Scale; // 0xc8
    }; // Size: 0xcc
    Params_AddCameraSpaceRotation params{};
    params.CameraData = (FCameraData)CameraData;
    params.Value = (FRotator)Value;
    params.Velocity = (FRotator)Velocity;
    params.Scale = (float)Scale;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CameraData = params.CameraData;
}
void UCameraDataHelper::AddArmOrigin(FCameraData& CameraData, FVector Value, FVector Velocity, float Scale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraDataHelper.AddArmOrigin"));
    struct Params_AddArmOrigin {
        FCameraData CameraData; // 0x0
        FVector Value; // 0xb0
        FVector Velocity; // 0xbc
        float Scale; // 0xc8
    }; // Size: 0xcc
    Params_AddArmOrigin params{};
    params.CameraData = (FCameraData)CameraData;
    params.Value = (FVector)Value;
    params.Velocity = (FVector)Velocity;
    params.Scale = (float)Scale;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CameraData = params.CameraData;
}
void UCameraDataHelper::AddArmLength(FCameraData& CameraData, float Value, float Velocity, float Scale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraDataHelper.AddArmLength"));
    struct Params_AddArmLength {
        FCameraData CameraData; // 0x0
        float Value; // 0xb0
        float Velocity; // 0xb4
        float Scale; // 0xb8
    }; // Size: 0xbc
    Params_AddArmLength params{};
    params.CameraData = (FCameraData)CameraData;
    params.Value = (float)Value;
    params.Velocity = (float)Velocity;
    params.Scale = (float)Scale;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CameraData = params.CameraData;
}
void UCameraDataHelper::AddAperture(FCameraData& CameraData, float Value, float Velocity, float Scale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraDataHelper.AddAperture"));
    struct Params_AddAperture {
        FCameraData CameraData; // 0x0
        float Value; // 0xb0
        float Velocity; // 0xb4
        float Scale; // 0xb8
    }; // Size: 0xbc
    Params_AddAperture params{};
    params.CameraData = (FCameraData)CameraData;
    params.Value = (float)Value;
    params.Velocity = (float)Velocity;
    params.Scale = (float)Scale;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CameraData = params.CameraData;
}
