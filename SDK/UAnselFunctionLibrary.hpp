#pragma once
#include <cstdint>
#include "EUIControlEffectTarget.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UObject;
#pragma pack(push, 1)
class UAnselFunctionLibrary : public UBlueprintFunctionLibrary {
public:
    static UAnselFunctionLibrary* StaticClass();
    static void StopSession(UObject* WorldContextObject);
    static void StartSession(UObject* WorldContextObject);
    static void SetUIControlVisibility(UObject* WorldContextObject, EUIControlEffectTarget UIControlTarget, bool bIsVisible);
    static void SetSettleFrames(int32_t NumSettleFrames);
    static void SetIsPhotographyAllowed(bool bIsPhotographyAllowed);
    static void SetCameraMovementSpeed(float TranslationSpeed);
    static void SetCameraConstraintDistance(float MaxCameraDistance);
    static void SetCameraConstraintCameraSize(float CameraSize);
    static void SetAutoPostprocess(bool bShouldAutoPostprocess);
    static void SetAutoPause(bool bShouldAutoPause);
    static bool IsPhotographyAvailable();
    static bool IsPhotographyAllowed();
    static void ConstrainCameraByGeometry(UObject* WorldContextObject, FVector NewCameraLocation, FVector PreviousCameraLocation, FVector OriginalCameraLocation, FVector& OutCameraLocation);
    static void ConstrainCameraByDistance(UObject* WorldContextObject, FVector NewCameraLocation, FVector PreviousCameraLocation, FVector OriginalCameraLocation, FVector& OutCameraLocation, float MaxDistance);
}; // Size: 0x28
#pragma pack(pop)
