#include "EUIControlEffectTarget.hpp"
#include "FVector.hpp"
#include "UAnselFunctionLibrary.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UAnselFunctionLibrary* UAnselFunctionLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Ansel.AnselFunctionLibrary");
    return (UAnselFunctionLibrary*)res;
}
void UAnselFunctionLibrary::StopSession(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ansel.AnselFunctionLibrary.StopSession"));
    struct Params_StopSession {
        UObject* WorldContextObject; // 0x0
    }; // Size: 0x8
    Params_StopSession params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAnselFunctionLibrary::StartSession(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ansel.AnselFunctionLibrary.StartSession"));
    struct Params_StartSession {
        UObject* WorldContextObject; // 0x0
    }; // Size: 0x8
    Params_StartSession params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAnselFunctionLibrary::SetUIControlVisibility(UObject* WorldContextObject, EUIControlEffectTarget UIControlTarget, bool bIsVisible) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ansel.AnselFunctionLibrary.SetUIControlVisibility"));
    struct Params_SetUIControlVisibility {
        UObject* WorldContextObject; // 0x0
        EUIControlEffectTarget UIControlTarget; // 0x8
        bool bIsVisible; // 0x9
    }; // Size: 0xa
    Params_SetUIControlVisibility params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.UIControlTarget = (EUIControlEffectTarget)UIControlTarget;
    params.bIsVisible = (bool)bIsVisible;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAnselFunctionLibrary::SetCameraMovementSpeed(float TranslationSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ansel.AnselFunctionLibrary.SetCameraMovementSpeed"));
    struct Params_SetCameraMovementSpeed {
        float TranslationSpeed; // 0x0
    }; // Size: 0x4
    Params_SetCameraMovementSpeed params{};
    params.TranslationSpeed = (float)TranslationSpeed;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAnselFunctionLibrary::SetSettleFrames(int32_t NumSettleFrames) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ansel.AnselFunctionLibrary.SetSettleFrames"));
    struct Params_SetSettleFrames {
        int32_t NumSettleFrames; // 0x0
    }; // Size: 0x4
    Params_SetSettleFrames params{};
    params.NumSettleFrames = (int32_t)NumSettleFrames;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAnselFunctionLibrary::SetCameraConstraintDistance(float MaxCameraDistance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ansel.AnselFunctionLibrary.SetCameraConstraintDistance"));
    struct Params_SetCameraConstraintDistance {
        float MaxCameraDistance; // 0x0
    }; // Size: 0x4
    Params_SetCameraConstraintDistance params{};
    params.MaxCameraDistance = (float)MaxCameraDistance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAnselFunctionLibrary::SetIsPhotographyAllowed(bool bIsPhotographyAllowed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ansel.AnselFunctionLibrary.SetIsPhotographyAllowed"));
    struct Params_SetIsPhotographyAllowed {
        bool bIsPhotographyAllowed; // 0x0
    }; // Size: 0x1
    Params_SetIsPhotographyAllowed params{};
    params.bIsPhotographyAllowed = (bool)bIsPhotographyAllowed;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAnselFunctionLibrary::SetCameraConstraintCameraSize(float CameraSize) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ansel.AnselFunctionLibrary.SetCameraConstraintCameraSize"));
    struct Params_SetCameraConstraintCameraSize {
        float CameraSize; // 0x0
    }; // Size: 0x4
    Params_SetCameraConstraintCameraSize params{};
    params.CameraSize = (float)CameraSize;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAnselFunctionLibrary::SetAutoPostprocess(bool bShouldAutoPostprocess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ansel.AnselFunctionLibrary.SetAutoPostprocess"));
    struct Params_SetAutoPostprocess {
        bool bShouldAutoPostprocess; // 0x0
    }; // Size: 0x1
    Params_SetAutoPostprocess params{};
    params.bShouldAutoPostprocess = (bool)bShouldAutoPostprocess;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UAnselFunctionLibrary::IsPhotographyAvailable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ansel.AnselFunctionLibrary.IsPhotographyAvailable"));
    struct Params_IsPhotographyAvailable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPhotographyAvailable params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UAnselFunctionLibrary::SetAutoPause(bool bShouldAutoPause) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ansel.AnselFunctionLibrary.SetAutoPause"));
    struct Params_SetAutoPause {
        bool bShouldAutoPause; // 0x0
    }; // Size: 0x1
    Params_SetAutoPause params{};
    params.bShouldAutoPause = (bool)bShouldAutoPause;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UAnselFunctionLibrary::IsPhotographyAllowed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ansel.AnselFunctionLibrary.IsPhotographyAllowed"));
    struct Params_IsPhotographyAllowed {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPhotographyAllowed params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UAnselFunctionLibrary::ConstrainCameraByGeometry(UObject* WorldContextObject, FVector NewCameraLocation, FVector PreviousCameraLocation, FVector OriginalCameraLocation, FVector& OutCameraLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ansel.AnselFunctionLibrary.ConstrainCameraByGeometry"));
    struct Params_ConstrainCameraByGeometry {
        UObject* WorldContextObject; // 0x0
        FVector NewCameraLocation; // 0x8
        FVector PreviousCameraLocation; // 0x14
        FVector OriginalCameraLocation; // 0x20
        FVector OutCameraLocation; // 0x2c
    }; // Size: 0x38
    Params_ConstrainCameraByGeometry params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.NewCameraLocation = (FVector)NewCameraLocation;
    params.PreviousCameraLocation = (FVector)PreviousCameraLocation;
    params.OriginalCameraLocation = (FVector)OriginalCameraLocation;
    params.OutCameraLocation = (FVector)OutCameraLocation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutCameraLocation = params.OutCameraLocation;
}
void UAnselFunctionLibrary::ConstrainCameraByDistance(UObject* WorldContextObject, FVector NewCameraLocation, FVector PreviousCameraLocation, FVector OriginalCameraLocation, FVector& OutCameraLocation, float MaxDistance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ansel.AnselFunctionLibrary.ConstrainCameraByDistance"));
    struct Params_ConstrainCameraByDistance {
        UObject* WorldContextObject; // 0x0
        FVector NewCameraLocation; // 0x8
        FVector PreviousCameraLocation; // 0x14
        FVector OriginalCameraLocation; // 0x20
        FVector OutCameraLocation; // 0x2c
        float MaxDistance; // 0x38
    }; // Size: 0x3c
    Params_ConstrainCameraByDistance params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.NewCameraLocation = (FVector)NewCameraLocation;
    params.PreviousCameraLocation = (FVector)PreviousCameraLocation;
    params.OriginalCameraLocation = (FVector)OriginalCameraLocation;
    params.OutCameraLocation = (FVector)OutCameraLocation;
    params.MaxDistance = (float)MaxDistance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutCameraLocation = params.OutCameraLocation;
}
