#include "AActor.hpp"
#include "ERichCurveInterpMode.hpp"
#include "FBlueprintCurveKey.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UCurveFloat.hpp"
#include "UCurveHelpersBlueprintLibrary.hpp"
#include "UFunction.hpp"
#include "USplineComponent.hpp"
void UCurveHelpersBlueprintLibrary::ShiftCurve(FRuntimeFloatCurve& RuntimeFloatCurve, float DeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CurveHelpers.CurveHelpersBlueprintLibrary.ShiftCurve"));
    struct Params_ShiftCurve {
        FRuntimeFloatCurve RuntimeFloatCurve; // 0x0
        float DeltaTime; // 0x88
    }; // Size: 0x8c
    Params_ShiftCurve params{};
    params.RuntimeFloatCurve = (FRuntimeFloatCurve)RuntimeFloatCurve;
    params.DeltaTime = (float)DeltaTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    RuntimeFloatCurve = params.RuntimeFloatCurve;
}
void UCurveHelpersBlueprintLibrary::GetCurveKeyTimeValue(FRuntimeFloatCurve& RuntimeFloatCurve, int32_t KeyIndex, float& Time, float& Value, bool& bInRange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CurveHelpers.CurveHelpersBlueprintLibrary.GetCurveKeyTimeValue"));
    struct Params_GetCurveKeyTimeValue {
        FRuntimeFloatCurve RuntimeFloatCurve; // 0x0
        int32_t KeyIndex; // 0x88
        float Time; // 0x8c
        float Value; // 0x90
        bool bInRange; // 0x94
    }; // Size: 0x95
    Params_GetCurveKeyTimeValue params{};
    params.RuntimeFloatCurve = (FRuntimeFloatCurve)RuntimeFloatCurve;
    params.KeyIndex = (int32_t)KeyIndex;
    params.Time = (float)Time;
    params.Value = (float)Value;
    params.bInRange = (bool)bInRange;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Time = params.Time;
    RuntimeFloatCurve = params.RuntimeFloatCurve;
    Value = params.Value;
    bInRange = params.bInRange;
}
UCurveHelpersBlueprintLibrary* UCurveHelpersBlueprintLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/CurveHelpers.CurveHelpersBlueprintLibrary");
    return (UCurveHelpersBlueprintLibrary*)res;
}
void UCurveHelpersBlueprintLibrary::CurveKeyIndexInRange(FRuntimeFloatCurve& RuntimeFloatCurve, int32_t KeyIndex, bool& bInRange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CurveHelpers.CurveHelpersBlueprintLibrary.CurveKeyIndexInRange"));
    struct Params_CurveKeyIndexInRange {
        FRuntimeFloatCurve RuntimeFloatCurve; // 0x0
        int32_t KeyIndex; // 0x88
        bool bInRange; // 0x8c
    }; // Size: 0x8d
    Params_CurveKeyIndexInRange params{};
    params.RuntimeFloatCurve = (FRuntimeFloatCurve)RuntimeFloatCurve;
    params.KeyIndex = (int32_t)KeyIndex;
    params.bInRange = (bool)bInRange;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    RuntimeFloatCurve = params.RuntimeFloatCurve;
    bInRange = params.bInRange;
}
void UCurveHelpersBlueprintLibrary::SetCurveDefaultValue(FRuntimeFloatCurve& RuntimeFloatCurve, float DefaultValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CurveHelpers.CurveHelpersBlueprintLibrary.SetCurveDefaultValue"));
    struct Params_SetCurveDefaultValue {
        FRuntimeFloatCurve RuntimeFloatCurve; // 0x0
        float DefaultValue; // 0x88
    }; // Size: 0x8c
    Params_SetCurveDefaultValue params{};
    params.RuntimeFloatCurve = (FRuntimeFloatCurve)RuntimeFloatCurve;
    params.DefaultValue = (float)DefaultValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    RuntimeFloatCurve = params.RuntimeFloatCurve;
}
void UCurveHelpersBlueprintLibrary::CloneCurve(FRuntimeFloatCurve& SourceRuntimeFloatCurve, FRuntimeFloatCurve& NewRuntimeFloatCurve) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CurveHelpers.CurveHelpersBlueprintLibrary.CloneCurve"));
    struct Params_CloneCurve {
        FRuntimeFloatCurve SourceRuntimeFloatCurve; // 0x0
        FRuntimeFloatCurve NewRuntimeFloatCurve; // 0x88
    }; // Size: 0x110
    Params_CloneCurve params{};
    params.SourceRuntimeFloatCurve = (FRuntimeFloatCurve)SourceRuntimeFloatCurve;
    params.NewRuntimeFloatCurve = (FRuntimeFloatCurve)NewRuntimeFloatCurve;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SourceRuntimeFloatCurve = params.SourceRuntimeFloatCurve;
    NewRuntimeFloatCurve = params.NewRuntimeFloatCurve;
}
void UCurveHelpersBlueprintLibrary::SetSplineHasBeenEdited(USplineComponent* Spline, bool bEdited) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CurveHelpers.CurveHelpersBlueprintLibrary.SetSplineHasBeenEdited"));
    struct Params_SetSplineHasBeenEdited {
        USplineComponent* Spline; // 0x0
        bool bEdited; // 0x8
    }; // Size: 0x9
    Params_SetSplineHasBeenEdited params{};
    params.Spline = (USplineComponent*)Spline;
    params.bEdited = (bool)bEdited;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UCurveHelpersBlueprintLibrary::CurveHasAnyData(FRuntimeFloatCurve& RuntimeFloatCurve, bool& bHasAnyData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CurveHelpers.CurveHelpersBlueprintLibrary.CurveHasAnyData"));
    struct Params_CurveHasAnyData {
        FRuntimeFloatCurve RuntimeFloatCurve; // 0x0
        bool bHasAnyData; // 0x88
    }; // Size: 0x89
    Params_CurveHasAnyData params{};
    params.RuntimeFloatCurve = (FRuntimeFloatCurve)RuntimeFloatCurve;
    params.bHasAnyData = (bool)bHasAnyData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    RuntimeFloatCurve = params.RuntimeFloatCurve;
    bHasAnyData = params.bHasAnyData;
}
void UCurveHelpersBlueprintLibrary::SetCurveKeys(FRuntimeFloatCurve& RuntimeFloatCurve, TArray<FBlueprintCurveKey>& Keys) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CurveHelpers.CurveHelpersBlueprintLibrary.SetCurveKeys"));
    struct Params_SetCurveKeys {
        FRuntimeFloatCurve RuntimeFloatCurve; // 0x0
        TArray<FBlueprintCurveKey> Keys; // 0x88
    }; // Size: 0x98
    Params_SetCurveKeys params{};
    params.RuntimeFloatCurve = (FRuntimeFloatCurve)RuntimeFloatCurve;
    params.Keys = (TArray<FBlueprintCurveKey>)Keys;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    RuntimeFloatCurve = params.RuntimeFloatCurve;
    Keys = params.Keys;
}
void UCurveHelpersBlueprintLibrary::GetCurveKey(FRuntimeFloatCurve& RuntimeFloatCurve, int32_t KeyIndex, FBlueprintCurveKey& Key, bool& bInRange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CurveHelpers.CurveHelpersBlueprintLibrary.GetCurveKey"));
    struct Params_GetCurveKey {
        FRuntimeFloatCurve RuntimeFloatCurve; // 0x0
        int32_t KeyIndex; // 0x88
        FBlueprintCurveKey Key; // 0x8c
        bool bInRange; // 0xa8
    }; // Size: 0xa9
    Params_GetCurveKey params{};
    params.RuntimeFloatCurve = (FRuntimeFloatCurve)RuntimeFloatCurve;
    params.KeyIndex = (int32_t)KeyIndex;
    params.Key = (FBlueprintCurveKey)Key;
    params.bInRange = (bool)bInRange;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    RuntimeFloatCurve = params.RuntimeFloatCurve;
    Key = params.Key;
    bInRange = params.bInRange;
}
void UCurveHelpersBlueprintLibrary::GetExternalCurve(FRuntimeFloatCurve& RuntimeFloatCurve, UCurveFloat*& ExternalCurve) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CurveHelpers.CurveHelpersBlueprintLibrary.GetExternalCurve"));
    struct Params_GetExternalCurve {
        FRuntimeFloatCurve RuntimeFloatCurve; // 0x0
        UCurveFloat* ExternalCurve; // 0x88
    }; // Size: 0x90
    Params_GetExternalCurve params{};
    params.RuntimeFloatCurve = (FRuntimeFloatCurve)RuntimeFloatCurve;
    params.ExternalCurve = (UCurveFloat*)ExternalCurve;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    RuntimeFloatCurve = params.RuntimeFloatCurve;
    ExternalCurve = params.ExternalCurve;
}
void UCurveHelpersBlueprintLibrary::SetExternalCurve(FRuntimeFloatCurve& RuntimeFloatCurve, UCurveFloat* ExternalCurve, bool bCopyToInternal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CurveHelpers.CurveHelpersBlueprintLibrary.SetExternalCurve"));
    struct Params_SetExternalCurve {
        FRuntimeFloatCurve RuntimeFloatCurve; // 0x0
        UCurveFloat* ExternalCurve; // 0x88
        bool bCopyToInternal; // 0x90
    }; // Size: 0x91
    Params_SetExternalCurve params{};
    params.RuntimeFloatCurve = (FRuntimeFloatCurve)RuntimeFloatCurve;
    params.ExternalCurve = (UCurveFloat*)ExternalCurve;
    params.bCopyToInternal = (bool)bCopyToInternal;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    RuntimeFloatCurve = params.RuntimeFloatCurve;
}
void UCurveHelpersBlueprintLibrary::ScaleCurve(FRuntimeFloatCurve& RuntimeFloatCurve, float ScaleOrigin, float ScaleFactor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CurveHelpers.CurveHelpersBlueprintLibrary.ScaleCurve"));
    struct Params_ScaleCurve {
        FRuntimeFloatCurve RuntimeFloatCurve; // 0x0
        float ScaleOrigin; // 0x88
        float ScaleFactor; // 0x8c
    }; // Size: 0x90
    Params_ScaleCurve params{};
    params.RuntimeFloatCurve = (FRuntimeFloatCurve)RuntimeFloatCurve;
    params.ScaleOrigin = (float)ScaleOrigin;
    params.ScaleFactor = (float)ScaleFactor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    RuntimeFloatCurve = params.RuntimeFloatCurve;
}
void UCurveHelpersBlueprintLibrary::RunConstructionScripts(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CurveHelpers.CurveHelpersBlueprintLibrary.RunConstructionScripts"));
    struct Params_RunConstructionScripts {
        AActor* Actor; // 0x0
    }; // Size: 0x8
    Params_RunConstructionScripts params{};
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UCurveHelpersBlueprintLibrary::ResetCurve(FRuntimeFloatCurve& RuntimeFloatCurve) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CurveHelpers.CurveHelpersBlueprintLibrary.ResetCurve"));
    struct Params_ResetCurve {
        FRuntimeFloatCurve RuntimeFloatCurve; // 0x0
    }; // Size: 0x88
    Params_ResetCurve params{};
    params.RuntimeFloatCurve = (FRuntimeFloatCurve)RuntimeFloatCurve;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    RuntimeFloatCurve = params.RuntimeFloatCurve;
}
void UCurveHelpersBlueprintLibrary::RemoveRedundantCurveKeys(FRuntimeFloatCurve& RuntimeFloatCurve, float Tolerance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CurveHelpers.CurveHelpersBlueprintLibrary.RemoveRedundantCurveKeys"));
    struct Params_RemoveRedundantCurveKeys {
        FRuntimeFloatCurve RuntimeFloatCurve; // 0x0
        float Tolerance; // 0x88
    }; // Size: 0x8c
    Params_RemoveRedundantCurveKeys params{};
    params.RuntimeFloatCurve = (FRuntimeFloatCurve)RuntimeFloatCurve;
    params.Tolerance = (float)Tolerance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    RuntimeFloatCurve = params.RuntimeFloatCurve;
}
void UCurveHelpersBlueprintLibrary::MakeLinearCurveKey(float Time, float Value, FBlueprintCurveKey& Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CurveHelpers.CurveHelpersBlueprintLibrary.MakeLinearCurveKey"));
    struct Params_MakeLinearCurveKey {
        float Time; // 0x0
        float Value; // 0x4
        FBlueprintCurveKey Key; // 0x8
    }; // Size: 0x24
    Params_MakeLinearCurveKey params{};
    params.Time = (float)Time;
    params.Value = (float)Value;
    params.Key = (FBlueprintCurveKey)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Key = params.Key;
}
void UCurveHelpersBlueprintLibrary::MakeCurveKeysTriplet(TArray<FBlueprintCurveKey>& Keys, float StartTime, float StartValue, float MidTime, float MidValue, float EndTime, float EndValue, bool bLinear) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CurveHelpers.CurveHelpersBlueprintLibrary.MakeCurveKeysTriplet"));
    struct Params_MakeCurveKeysTriplet {
        TArray<FBlueprintCurveKey> Keys; // 0x0
        float StartTime; // 0x10
        float StartValue; // 0x14
        float MidTime; // 0x18
        float MidValue; // 0x1c
        float EndTime; // 0x20
        float EndValue; // 0x24
        bool bLinear; // 0x28
    }; // Size: 0x29
    Params_MakeCurveKeysTriplet params{};
    params.Keys = (TArray<FBlueprintCurveKey>)Keys;
    params.StartTime = (float)StartTime;
    params.StartValue = (float)StartValue;
    params.MidTime = (float)MidTime;
    params.MidValue = (float)MidValue;
    params.EndTime = (float)EndTime;
    params.EndValue = (float)EndValue;
    params.bLinear = (bool)bLinear;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Keys = params.Keys;
}
void UCurveHelpersBlueprintLibrary::MakeCurveKey(float Time, float Value, FBlueprintCurveKey& Key, ERichCurveInterpMode InterpMode, float ArriveTangent, float LeaveTangent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CurveHelpers.CurveHelpersBlueprintLibrary.MakeCurveKey"));
    struct Params_MakeCurveKey {
        float Time; // 0x0
        float Value; // 0x4
        FBlueprintCurveKey Key; // 0x8
        ERichCurveInterpMode InterpMode; // 0x24
        char pad_25[0x3];
        float ArriveTangent; // 0x28
        float LeaveTangent; // 0x2c
    }; // Size: 0x30
    Params_MakeCurveKey params{};
    params.Time = (float)Time;
    params.Value = (float)Value;
    params.Key = (FBlueprintCurveKey)Key;
    params.InterpMode = (ERichCurveInterpMode)InterpMode;
    params.ArriveTangent = (float)ArriveTangent;
    params.LeaveTangent = (float)LeaveTangent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Key = params.Key;
}
void UCurveHelpersBlueprintLibrary::MakeCurveKeysSimple(TArray<FBlueprintCurveKey>& Keys, float StartTime, float StartValue, float EndTime, float EndValue, bool bLinear) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CurveHelpers.CurveHelpersBlueprintLibrary.MakeCurveKeysSimple"));
    struct Params_MakeCurveKeysSimple {
        TArray<FBlueprintCurveKey> Keys; // 0x0
        float StartTime; // 0x10
        float StartValue; // 0x14
        float EndTime; // 0x18
        float EndValue; // 0x1c
        bool bLinear; // 0x20
    }; // Size: 0x21
    Params_MakeCurveKeysSimple params{};
    params.Keys = (TArray<FBlueprintCurveKey>)Keys;
    params.StartTime = (float)StartTime;
    params.StartValue = (float)StartValue;
    params.EndTime = (float)EndTime;
    params.EndValue = (float)EndValue;
    params.bLinear = (bool)bLinear;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Keys = params.Keys;
}
void UCurveHelpersBlueprintLibrary::IsUsingExternalCurve(FRuntimeFloatCurve& RuntimeFloatCurve, bool& bExternalCurve) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CurveHelpers.CurveHelpersBlueprintLibrary.IsUsingExternalCurve"));
    struct Params_IsUsingExternalCurve {
        FRuntimeFloatCurve RuntimeFloatCurve; // 0x0
        bool bExternalCurve; // 0x88
    }; // Size: 0x89
    Params_IsUsingExternalCurve params{};
    params.RuntimeFloatCurve = (FRuntimeFloatCurve)RuntimeFloatCurve;
    params.bExternalCurve = (bool)bExternalCurve;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    RuntimeFloatCurve = params.RuntimeFloatCurve;
    bExternalCurve = params.bExternalCurve;
}
void UCurveHelpersBlueprintLibrary::InsertCurveKeys(FRuntimeFloatCurve& RuntimeFloatCurve, TArray<FBlueprintCurveKey>& Keys) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CurveHelpers.CurveHelpersBlueprintLibrary.InsertCurveKeys"));
    struct Params_InsertCurveKeys {
        FRuntimeFloatCurve RuntimeFloatCurve; // 0x0
        TArray<FBlueprintCurveKey> Keys; // 0x88
    }; // Size: 0x98
    Params_InsertCurveKeys params{};
    params.RuntimeFloatCurve = (FRuntimeFloatCurve)RuntimeFloatCurve;
    params.Keys = (TArray<FBlueprintCurveKey>)Keys;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Keys = params.Keys;
    RuntimeFloatCurve = params.RuntimeFloatCurve;
}
void UCurveHelpersBlueprintLibrary::InsertCurveKey(FRuntimeFloatCurve& RuntimeFloatCurve, FBlueprintCurveKey& Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CurveHelpers.CurveHelpersBlueprintLibrary.InsertCurveKey"));
    struct Params_InsertCurveKey {
        FRuntimeFloatCurve RuntimeFloatCurve; // 0x0
        FBlueprintCurveKey Key; // 0x88
    }; // Size: 0xa4
    Params_InsertCurveKey params{};
    params.RuntimeFloatCurve = (FRuntimeFloatCurve)RuntimeFloatCurve;
    params.Key = (FBlueprintCurveKey)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Key = params.Key;
    RuntimeFloatCurve = params.RuntimeFloatCurve;
}
void UCurveHelpersBlueprintLibrary::GetSplineHasBeenEdited(USplineComponent* Spline, bool& bEdited) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CurveHelpers.CurveHelpersBlueprintLibrary.GetSplineHasBeenEdited"));
    struct Params_GetSplineHasBeenEdited {
        USplineComponent* Spline; // 0x0
        bool bEdited; // 0x8
    }; // Size: 0x9
    Params_GetSplineHasBeenEdited params{};
    params.Spline = (USplineComponent*)Spline;
    params.bEdited = (bool)bEdited;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bEdited = params.bEdited;
}
void UCurveHelpersBlueprintLibrary::ClearCurveDefaultValue(FRuntimeFloatCurve& RuntimeFloatCurve) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CurveHelpers.CurveHelpersBlueprintLibrary.ClearCurveDefaultValue"));
    struct Params_ClearCurveDefaultValue {
        FRuntimeFloatCurve RuntimeFloatCurve; // 0x0
    }; // Size: 0x88
    Params_ClearCurveDefaultValue params{};
    params.RuntimeFloatCurve = (FRuntimeFloatCurve)RuntimeFloatCurve;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    RuntimeFloatCurve = params.RuntimeFloatCurve;
}
void UCurveHelpersBlueprintLibrary::GetCurveValueRange(FRuntimeFloatCurve& RuntimeFloatCurve, float& MinValue, float& MaxValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CurveHelpers.CurveHelpersBlueprintLibrary.GetCurveValueRange"));
    struct Params_GetCurveValueRange {
        FRuntimeFloatCurve RuntimeFloatCurve; // 0x0
        float MinValue; // 0x88
        float MaxValue; // 0x8c
    }; // Size: 0x90
    Params_GetCurveValueRange params{};
    params.RuntimeFloatCurve = (FRuntimeFloatCurve)RuntimeFloatCurve;
    params.MinValue = (float)MinValue;
    params.MaxValue = (float)MaxValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    RuntimeFloatCurve = params.RuntimeFloatCurve;
    MinValue = params.MinValue;
    MaxValue = params.MaxValue;
}
void UCurveHelpersBlueprintLibrary::GetCurveTimeRange(FRuntimeFloatCurve& RuntimeFloatCurve, float& MinTime, float& MaxTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CurveHelpers.CurveHelpersBlueprintLibrary.GetCurveTimeRange"));
    struct Params_GetCurveTimeRange {
        FRuntimeFloatCurve RuntimeFloatCurve; // 0x0
        float MinTime; // 0x88
        float MaxTime; // 0x8c
    }; // Size: 0x90
    Params_GetCurveTimeRange params{};
    params.RuntimeFloatCurve = (FRuntimeFloatCurve)RuntimeFloatCurve;
    params.MinTime = (float)MinTime;
    params.MaxTime = (float)MaxTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    RuntimeFloatCurve = params.RuntimeFloatCurve;
    MaxTime = params.MaxTime;
    MinTime = params.MinTime;
}
void UCurveHelpersBlueprintLibrary::GetCurveKeys(FRuntimeFloatCurve& RuntimeFloatCurve, TArray<FBlueprintCurveKey>& Keys, int32_t& KeyCount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CurveHelpers.CurveHelpersBlueprintLibrary.GetCurveKeys"));
    struct Params_GetCurveKeys {
        FRuntimeFloatCurve RuntimeFloatCurve; // 0x0
        TArray<FBlueprintCurveKey> Keys; // 0x88
        int32_t KeyCount; // 0x98
    }; // Size: 0x9c
    Params_GetCurveKeys params{};
    params.RuntimeFloatCurve = (FRuntimeFloatCurve)RuntimeFloatCurve;
    params.Keys = (TArray<FBlueprintCurveKey>)Keys;
    params.KeyCount = (int32_t)KeyCount;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    KeyCount = params.KeyCount;
    RuntimeFloatCurve = params.RuntimeFloatCurve;
    Keys = params.Keys;
}
void UCurveHelpersBlueprintLibrary::AutoSetCurveTangents(FRuntimeFloatCurve& RuntimeFloatCurve, float Tension) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CurveHelpers.CurveHelpersBlueprintLibrary.AutoSetCurveTangents"));
    struct Params_AutoSetCurveTangents {
        FRuntimeFloatCurve RuntimeFloatCurve; // 0x0
        float Tension; // 0x88
    }; // Size: 0x8c
    Params_AutoSetCurveTangents params{};
    params.RuntimeFloatCurve = (FRuntimeFloatCurve)RuntimeFloatCurve;
    params.Tension = (float)Tension;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    RuntimeFloatCurve = params.RuntimeFloatCurve;
}
void UCurveHelpersBlueprintLibrary::GetCurveKeyCount(FRuntimeFloatCurve& RuntimeFloatCurve, int32_t& KeyCount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CurveHelpers.CurveHelpersBlueprintLibrary.GetCurveKeyCount"));
    struct Params_GetCurveKeyCount {
        FRuntimeFloatCurve RuntimeFloatCurve; // 0x0
        int32_t KeyCount; // 0x88
    }; // Size: 0x8c
    Params_GetCurveKeyCount params{};
    params.RuntimeFloatCurve = (FRuntimeFloatCurve)RuntimeFloatCurve;
    params.KeyCount = (int32_t)KeyCount;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    RuntimeFloatCurve = params.RuntimeFloatCurve;
    KeyCount = params.KeyCount;
}
void UCurveHelpersBlueprintLibrary::GetCurveDefaultValue(FRuntimeFloatCurve& RuntimeFloatCurve, float& DefaultValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CurveHelpers.CurveHelpersBlueprintLibrary.GetCurveDefaultValue"));
    struct Params_GetCurveDefaultValue {
        FRuntimeFloatCurve RuntimeFloatCurve; // 0x0
        float DefaultValue; // 0x88
    }; // Size: 0x8c
    Params_GetCurveDefaultValue params{};
    params.RuntimeFloatCurve = (FRuntimeFloatCurve)RuntimeFloatCurve;
    params.DefaultValue = (float)DefaultValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    RuntimeFloatCurve = params.RuntimeFloatCurve;
    DefaultValue = params.DefaultValue;
}
void UCurveHelpersBlueprintLibrary::EvalCurve(FRuntimeFloatCurve& RuntimeFloatCurve, float Time, float& Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CurveHelpers.CurveHelpersBlueprintLibrary.EvalCurve"));
    struct Params_EvalCurve {
        FRuntimeFloatCurve RuntimeFloatCurve; // 0x0
        float Time; // 0x88
        float Value; // 0x8c
    }; // Size: 0x90
    Params_EvalCurve params{};
    params.RuntimeFloatCurve = (FRuntimeFloatCurve)RuntimeFloatCurve;
    params.Time = (float)Time;
    params.Value = (float)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    RuntimeFloatCurve = params.RuntimeFloatCurve;
    Value = params.Value;
}
void UCurveHelpersBlueprintLibrary::ConvertExternalCurve(FRuntimeFloatCurve& RuntimeFloatCurve) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CurveHelpers.CurveHelpersBlueprintLibrary.ConvertExternalCurve"));
    struct Params_ConvertExternalCurve {
        FRuntimeFloatCurve RuntimeFloatCurve; // 0x0
    }; // Size: 0x88
    Params_ConvertExternalCurve params{};
    params.RuntimeFloatCurve = (FRuntimeFloatCurve)RuntimeFloatCurve;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    RuntimeFloatCurve = params.RuntimeFloatCurve;
}
void UCurveHelpersBlueprintLibrary::AppendCurveKey(FRuntimeFloatCurve& RuntimeFloatCurve, FBlueprintCurveKey& Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CurveHelpers.CurveHelpersBlueprintLibrary.AppendCurveKey"));
    struct Params_AppendCurveKey {
        FRuntimeFloatCurve RuntimeFloatCurve; // 0x0
        FBlueprintCurveKey Key; // 0x88
    }; // Size: 0xa4
    Params_AppendCurveKey params{};
    params.RuntimeFloatCurve = (FRuntimeFloatCurve)RuntimeFloatCurve;
    params.Key = (FBlueprintCurveKey)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    RuntimeFloatCurve = params.RuntimeFloatCurve;
    Key = params.Key;
}
