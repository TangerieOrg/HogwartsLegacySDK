#include "FGeometry.hpp"
#include "FSlateBrush.hpp"
#include "FVector2D.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USlateBlueprintLibrary.hpp"
bool USlateBlueprintLibrary::IsUnderLocation(FGeometry& Geometry, FVector2D& AbsoluteCoordinate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SlateBlueprintLibrary.IsUnderLocation"));
    struct Params_IsUnderLocation {
        FGeometry Geometry; // 0x0
        FVector2D AbsoluteCoordinate; // 0x38
        bool ReturnValue; // 0x40
    }; // Size: 0x41
    Params_IsUnderLocation params{};
    params.Geometry = (FGeometry)Geometry;
    params.AbsoluteCoordinate = (FVector2D)AbsoluteCoordinate;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Geometry = params.Geometry;
    AbsoluteCoordinate = params.AbsoluteCoordinate;
    return (bool)params.ReturnValue;
}
void USlateBlueprintLibrary::ScreenToWidgetAbsolute(UObject* WorldContextObject, FVector2D ScreenPosition, FVector2D& AbsoluteCoordinate, bool bIncludeWindowPosition) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute"));
    struct Params_ScreenToWidgetAbsolute {
        UObject* WorldContextObject; // 0x0
        FVector2D ScreenPosition; // 0x8
        FVector2D AbsoluteCoordinate; // 0x10
        bool bIncludeWindowPosition; // 0x18
    }; // Size: 0x19
    Params_ScreenToWidgetAbsolute params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.ScreenPosition = (FVector2D)ScreenPosition;
    params.AbsoluteCoordinate = (FVector2D)AbsoluteCoordinate;
    params.bIncludeWindowPosition = (bool)bIncludeWindowPosition;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    AbsoluteCoordinate = params.AbsoluteCoordinate;
}
USlateBlueprintLibrary* USlateBlueprintLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.SlateBlueprintLibrary");
    return (USlateBlueprintLibrary*)res;
}
void USlateBlueprintLibrary::ScreenToWidgetLocal(UObject* WorldContextObject, FGeometry& Geometry, FVector2D ScreenPosition, FVector2D& LocalCoordinate, bool bIncludeWindowPosition) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SlateBlueprintLibrary.ScreenToWidgetLocal"));
    struct Params_ScreenToWidgetLocal {
        UObject* WorldContextObject; // 0x0
        FGeometry Geometry; // 0x8
        FVector2D ScreenPosition; // 0x40
        FVector2D LocalCoordinate; // 0x48
        bool bIncludeWindowPosition; // 0x50
    }; // Size: 0x51
    Params_ScreenToWidgetLocal params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Geometry = (FGeometry)Geometry;
    params.ScreenPosition = (FVector2D)ScreenPosition;
    params.LocalCoordinate = (FVector2D)LocalCoordinate;
    params.bIncludeWindowPosition = (bool)bIncludeWindowPosition;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Geometry = params.Geometry;
    LocalCoordinate = params.LocalCoordinate;
}
FVector2D USlateBlueprintLibrary::TransformVectorAbsoluteToLocal(FGeometry& Geometry, FVector2D AbsoluteVector) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal"));
    struct Params_TransformVectorAbsoluteToLocal {
        FGeometry Geometry; // 0x0
        FVector2D AbsoluteVector; // 0x38
        FVector2D ReturnValue; // 0x40
    }; // Size: 0x48
    Params_TransformVectorAbsoluteToLocal params{};
    params.Geometry = (FGeometry)Geometry;
    params.AbsoluteVector = (FVector2D)AbsoluteVector;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Geometry = params.Geometry;
    return (FVector2D)params.ReturnValue;
}
FVector2D USlateBlueprintLibrary::TransformVectorLocalToAbsolute(FGeometry& Geometry, FVector2D LocalVector) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute"));
    struct Params_TransformVectorLocalToAbsolute {
        FGeometry Geometry; // 0x0
        FVector2D LocalVector; // 0x38
        FVector2D ReturnValue; // 0x40
    }; // Size: 0x48
    Params_TransformVectorLocalToAbsolute params{};
    params.Geometry = (FGeometry)Geometry;
    params.LocalVector = (FVector2D)LocalVector;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Geometry = params.Geometry;
    return (FVector2D)params.ReturnValue;
}
float USlateBlueprintLibrary::TransformScalarLocalToAbsolute(FGeometry& Geometry, float LocalScalar) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute"));
    struct Params_TransformScalarLocalToAbsolute {
        FGeometry Geometry; // 0x0
        float LocalScalar; // 0x38
        float ReturnValue; // 0x3c
    }; // Size: 0x40
    Params_TransformScalarLocalToAbsolute params{};
    params.Geometry = (FGeometry)Geometry;
    params.LocalScalar = (float)LocalScalar;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Geometry = params.Geometry;
    return (float)params.ReturnValue;
}
float USlateBlueprintLibrary::TransformScalarAbsoluteToLocal(FGeometry& Geometry, float AbsoluteScalar) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal"));
    struct Params_TransformScalarAbsoluteToLocal {
        FGeometry Geometry; // 0x0
        float AbsoluteScalar; // 0x38
        float ReturnValue; // 0x3c
    }; // Size: 0x40
    Params_TransformScalarAbsoluteToLocal params{};
    params.Geometry = (FGeometry)Geometry;
    params.AbsoluteScalar = (float)AbsoluteScalar;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Geometry = params.Geometry;
    return (float)params.ReturnValue;
}
void USlateBlueprintLibrary::ScreenToViewport(UObject* WorldContextObject, FVector2D ScreenPosition, FVector2D& ViewportPosition) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SlateBlueprintLibrary.ScreenToViewport"));
    struct Params_ScreenToViewport {
        UObject* WorldContextObject; // 0x0
        FVector2D ScreenPosition; // 0x8
        FVector2D ViewportPosition; // 0x10
    }; // Size: 0x18
    Params_ScreenToViewport params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.ScreenPosition = (FVector2D)ScreenPosition;
    params.ViewportPosition = (FVector2D)ViewportPosition;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ViewportPosition = params.ViewportPosition;
}
FVector2D USlateBlueprintLibrary::GetAbsoluteSize(FGeometry& Geometry) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SlateBlueprintLibrary.GetAbsoluteSize"));
    struct Params_GetAbsoluteSize {
        FGeometry Geometry; // 0x0
        FVector2D ReturnValue; // 0x38
    }; // Size: 0x40
    Params_GetAbsoluteSize params{};
    params.Geometry = (FGeometry)Geometry;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Geometry = params.Geometry;
    return (FVector2D)params.ReturnValue;
}
void USlateBlueprintLibrary::LocalToViewport(UObject* WorldContextObject, FGeometry& Geometry, FVector2D LocalCoordinate, FVector2D& PixelPosition, FVector2D& ViewportPosition) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SlateBlueprintLibrary.LocalToViewport"));
    struct Params_LocalToViewport {
        UObject* WorldContextObject; // 0x0
        FGeometry Geometry; // 0x8
        FVector2D LocalCoordinate; // 0x40
        FVector2D PixelPosition; // 0x48
        FVector2D ViewportPosition; // 0x50
    }; // Size: 0x58
    Params_LocalToViewport params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Geometry = (FGeometry)Geometry;
    params.LocalCoordinate = (FVector2D)LocalCoordinate;
    params.PixelPosition = (FVector2D)PixelPosition;
    params.ViewportPosition = (FVector2D)ViewportPosition;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Geometry = params.Geometry;
    PixelPosition = params.PixelPosition;
    ViewportPosition = params.ViewportPosition;
}
FVector2D USlateBlueprintLibrary::LocalToAbsolute(FGeometry& Geometry, FVector2D LocalCoordinate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SlateBlueprintLibrary.LocalToAbsolute"));
    struct Params_LocalToAbsolute {
        FGeometry Geometry; // 0x0
        FVector2D LocalCoordinate; // 0x38
        FVector2D ReturnValue; // 0x40
    }; // Size: 0x48
    Params_LocalToAbsolute params{};
    params.Geometry = (FGeometry)Geometry;
    params.LocalCoordinate = (FVector2D)LocalCoordinate;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Geometry = params.Geometry;
    return (FVector2D)params.ReturnValue;
}
void USlateBlueprintLibrary::AbsoluteToViewport(UObject* WorldContextObject, FVector2D AbsoluteDesktopCoordinate, FVector2D& PixelPosition, FVector2D& ViewportPosition) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SlateBlueprintLibrary.AbsoluteToViewport"));
    struct Params_AbsoluteToViewport {
        UObject* WorldContextObject; // 0x0
        FVector2D AbsoluteDesktopCoordinate; // 0x8
        FVector2D PixelPosition; // 0x10
        FVector2D ViewportPosition; // 0x18
    }; // Size: 0x20
    Params_AbsoluteToViewport params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.AbsoluteDesktopCoordinate = (FVector2D)AbsoluteDesktopCoordinate;
    params.PixelPosition = (FVector2D)PixelPosition;
    params.ViewportPosition = (FVector2D)ViewportPosition;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    PixelPosition = params.PixelPosition;
    ViewportPosition = params.ViewportPosition;
}
FVector2D USlateBlueprintLibrary::GetLocalTopLeft(FGeometry& Geometry) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SlateBlueprintLibrary.GetLocalTopLeft"));
    struct Params_GetLocalTopLeft {
        FGeometry Geometry; // 0x0
        FVector2D ReturnValue; // 0x38
    }; // Size: 0x40
    Params_GetLocalTopLeft params{};
    params.Geometry = (FGeometry)Geometry;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Geometry = params.Geometry;
    return (FVector2D)params.ReturnValue;
}
FVector2D USlateBlueprintLibrary::GetLocalSize(FGeometry& Geometry) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SlateBlueprintLibrary.GetLocalSize"));
    struct Params_GetLocalSize {
        FGeometry Geometry; // 0x0
        FVector2D ReturnValue; // 0x38
    }; // Size: 0x40
    Params_GetLocalSize params{};
    params.Geometry = (FGeometry)Geometry;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Geometry = params.Geometry;
    return (FVector2D)params.ReturnValue;
}
bool USlateBlueprintLibrary::EqualEqual_SlateBrush(FSlateBrush& A, FSlateBrush& B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush"));
    struct Params_EqualEqual_SlateBrush {
        FSlateBrush A; // 0x0
        FSlateBrush B; // 0x88
        bool ReturnValue; // 0x110
    }; // Size: 0x111
    Params_EqualEqual_SlateBrush params{};
    params.A = (FSlateBrush)A;
    params.B = (FSlateBrush)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    B = params.B;
    return (bool)params.ReturnValue;
}
FVector2D USlateBlueprintLibrary::AbsoluteToLocal(FGeometry& Geometry, FVector2D AbsoluteCoordinate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SlateBlueprintLibrary.AbsoluteToLocal"));
    struct Params_AbsoluteToLocal {
        FGeometry Geometry; // 0x0
        FVector2D AbsoluteCoordinate; // 0x38
        FVector2D ReturnValue; // 0x40
    }; // Size: 0x48
    Params_AbsoluteToLocal params{};
    params.Geometry = (FGeometry)Geometry;
    params.AbsoluteCoordinate = (FVector2D)AbsoluteCoordinate;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Geometry = params.Geometry;
    return (FVector2D)params.ReturnValue;
}
