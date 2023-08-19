#include "FLinearColor.hpp"
#include "FQuat.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "FVector4.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
#include "UNiagaraDataInterfaceArrayFunctionLibrary.hpp"
void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector2DValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FVector2D& Value, bool bSizeToFit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2DValue"));
    struct Params_SetNiagaraArrayVector2DValue {
        UNiagaraComponent* NiagaraSystem; // 0x0
        FName OverrideName; // 0x8
        int32_t Index; // 0x10
        FVector2D Value; // 0x14
        bool bSizeToFit; // 0x1c
    }; // Size: 0x1d
    Params_SetNiagaraArrayVector2DValue params{};
    params.NiagaraSystem = (UNiagaraComponent*)NiagaraSystem;
    params.OverrideName = (FName)OverrideName;
    params.Index = (int32_t)Index;
    params.Value = (FVector2D)Value;
    params.bSizeToFit = (bool)bSizeToFit;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Value = params.Value;
}
UNiagaraDataInterfaceArrayFunctionLibrary* UNiagaraDataInterfaceArrayFunctionLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary");
    return (UNiagaraDataInterfaceArrayFunctionLibrary*)res;
}
int32_t UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayInt32Value(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32Value"));
    struct Params_GetNiagaraArrayInt32Value {
        UNiagaraComponent* NiagaraSystem; // 0x0
        FName OverrideName; // 0x8
        int32_t Index; // 0x10
        int32_t ReturnValue; // 0x14
    }; // Size: 0x18
    Params_GetNiagaraArrayInt32Value params{};
    params.NiagaraSystem = (UNiagaraComponent*)NiagaraSystem;
    params.OverrideName = (FName)OverrideName;
    params.Index = (int32_t)Index;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVectorValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FVector& Value, bool bSizeToFit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVectorValue"));
    struct Params_SetNiagaraArrayVectorValue {
        UNiagaraComponent* NiagaraSystem; // 0x0
        FName OverrideName; // 0x8
        int32_t Index; // 0x10
        FVector Value; // 0x14
        bool bSizeToFit; // 0x20
    }; // Size: 0x21
    Params_SetNiagaraArrayVectorValue params{};
    params.NiagaraSystem = (UNiagaraComponent*)NiagaraSystem;
    params.OverrideName = (FName)OverrideName;
    params.Index = (int32_t)Index;
    params.Value = (FVector)Value;
    params.bSizeToFit = (bool)bSizeToFit;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Value = params.Value;
}
void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector4Value(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FVector4& Value, bool bSizeToFit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4Value"));
    struct Params_SetNiagaraArrayVector4Value {
        UNiagaraComponent* NiagaraSystem; // 0x0
        FName OverrideName; // 0x8
        int32_t Index; // 0x10
        char pad_14[0xc];
        FVector4 Value; // 0x20
        bool bSizeToFit; // 0x30
    }; // Size: 0x31
    Params_SetNiagaraArrayVector4Value params{};
    params.NiagaraSystem = (UNiagaraComponent*)NiagaraSystem;
    params.OverrideName = (FName)OverrideName;
    params.Index = (int32_t)Index;
    params.Value = (FVector4)Value;
    params.bSizeToFit = (bool)bSizeToFit;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Value = params.Value;
}
void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector(UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FVector>& ArrayData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector"));
    struct Params_SetNiagaraArrayVector {
        UNiagaraComponent* NiagaraSystem; // 0x0
        FName OverrideName; // 0x8
        TArray<FVector> ArrayData; // 0x10
    }; // Size: 0x20
    Params_SetNiagaraArrayVector params{};
    params.NiagaraSystem = (UNiagaraComponent*)NiagaraSystem;
    params.OverrideName = (FName)OverrideName;
    params.ArrayData = (TArray<FVector>)ArrayData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ArrayData = params.ArrayData;
}
void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector2D(UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FVector2D>& ArrayData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2D"));
    struct Params_SetNiagaraArrayVector2D {
        UNiagaraComponent* NiagaraSystem; // 0x0
        FName OverrideName; // 0x8
        TArray<FVector2D> ArrayData; // 0x10
    }; // Size: 0x20
    Params_SetNiagaraArrayVector2D params{};
    params.NiagaraSystem = (UNiagaraComponent*)NiagaraSystem;
    params.OverrideName = (FName)OverrideName;
    params.ArrayData = (TArray<FVector2D>)ArrayData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ArrayData = params.ArrayData;
}
void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector4(UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FVector4>& ArrayData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4"));
    struct Params_SetNiagaraArrayVector4 {
        UNiagaraComponent* NiagaraSystem; // 0x0
        FName OverrideName; // 0x8
        TArray<FVector4> ArrayData; // 0x10
    }; // Size: 0x20
    Params_SetNiagaraArrayVector4 params{};
    params.NiagaraSystem = (UNiagaraComponent*)NiagaraSystem;
    params.OverrideName = (FName)OverrideName;
    params.ArrayData = (TArray<FVector4>)ArrayData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ArrayData = params.ArrayData;
}
void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayQuatValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FQuat& Value, bool bSizeToFit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuatValue"));
    struct Params_SetNiagaraArrayQuatValue {
        UNiagaraComponent* NiagaraSystem; // 0x0
        FName OverrideName; // 0x8
        int32_t Index; // 0x10
        char pad_14[0xc];
        FQuat Value; // 0x20
        bool bSizeToFit; // 0x30
    }; // Size: 0x31
    Params_SetNiagaraArrayQuatValue params{};
    params.NiagaraSystem = (UNiagaraComponent*)NiagaraSystem;
    params.OverrideName = (FName)OverrideName;
    params.Index = (int32_t)Index;
    params.Value = (FQuat)Value;
    params.bSizeToFit = (bool)bSizeToFit;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Value = params.Value;
}
void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayQuat(UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FQuat>& ArrayData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuat"));
    struct Params_SetNiagaraArrayQuat {
        UNiagaraComponent* NiagaraSystem; // 0x0
        FName OverrideName; // 0x8
        TArray<FQuat> ArrayData; // 0x10
    }; // Size: 0x20
    Params_SetNiagaraArrayQuat params{};
    params.NiagaraSystem = (UNiagaraComponent*)NiagaraSystem;
    params.OverrideName = (FName)OverrideName;
    params.ArrayData = (TArray<FQuat>)ArrayData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ArrayData = params.ArrayData;
}
void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayColorValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FLinearColor& Value, bool bSizeToFit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColorValue"));
    struct Params_SetNiagaraArrayColorValue {
        UNiagaraComponent* NiagaraSystem; // 0x0
        FName OverrideName; // 0x8
        int32_t Index; // 0x10
        FLinearColor Value; // 0x14
        bool bSizeToFit; // 0x24
    }; // Size: 0x25
    Params_SetNiagaraArrayColorValue params{};
    params.NiagaraSystem = (UNiagaraComponent*)NiagaraSystem;
    params.OverrideName = (FName)OverrideName;
    params.Index = (int32_t)Index;
    params.Value = (FLinearColor)Value;
    params.bSizeToFit = (bool)bSizeToFit;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Value = params.Value;
}
void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayInt32Value(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, int32_t Value, bool bSizeToFit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32Value"));
    struct Params_SetNiagaraArrayInt32Value {
        UNiagaraComponent* NiagaraSystem; // 0x0
        FName OverrideName; // 0x8
        int32_t Index; // 0x10
        int32_t Value; // 0x14
        bool bSizeToFit; // 0x18
    }; // Size: 0x19
    Params_SetNiagaraArrayInt32Value params{};
    params.NiagaraSystem = (UNiagaraComponent*)NiagaraSystem;
    params.OverrideName = (FName)OverrideName;
    params.Index = (int32_t)Index;
    params.Value = (int32_t)Value;
    params.bSizeToFit = (bool)bSizeToFit;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayInt32(UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<int32_t>& ArrayData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32"));
    struct Params_SetNiagaraArrayInt32 {
        UNiagaraComponent* NiagaraSystem; // 0x0
        FName OverrideName; // 0x8
        TArray<int32_t> ArrayData; // 0x10
    }; // Size: 0x20
    Params_SetNiagaraArrayInt32 params{};
    params.NiagaraSystem = (UNiagaraComponent*)NiagaraSystem;
    params.OverrideName = (FName)OverrideName;
    params.ArrayData = (TArray<int32_t>)ArrayData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ArrayData = params.ArrayData;
}
void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayFloatValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, float Value, bool bSizeToFit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloatValue"));
    struct Params_SetNiagaraArrayFloatValue {
        UNiagaraComponent* NiagaraSystem; // 0x0
        FName OverrideName; // 0x8
        int32_t Index; // 0x10
        float Value; // 0x14
        bool bSizeToFit; // 0x18
    }; // Size: 0x19
    Params_SetNiagaraArrayFloatValue params{};
    params.NiagaraSystem = (UNiagaraComponent*)NiagaraSystem;
    params.OverrideName = (FName)OverrideName;
    params.Index = (int32_t)Index;
    params.Value = (float)Value;
    params.bSizeToFit = (bool)bSizeToFit;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
TArray<int32_t> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayInt32(UNiagaraComponent* NiagaraSystem, FName OverrideName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32"));
    struct Params_GetNiagaraArrayInt32 {
        UNiagaraComponent* NiagaraSystem; // 0x0
        FName OverrideName; // 0x8
        TArray<int32_t> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetNiagaraArrayInt32 params{};
    params.NiagaraSystem = (UNiagaraComponent*)NiagaraSystem;
    params.OverrideName = (FName)OverrideName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<int32_t>)params.ReturnValue;
}
void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayFloat(UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<float>& ArrayData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloat"));
    struct Params_SetNiagaraArrayFloat {
        UNiagaraComponent* NiagaraSystem; // 0x0
        FName OverrideName; // 0x8
        TArray<float> ArrayData; // 0x10
    }; // Size: 0x20
    Params_SetNiagaraArrayFloat params{};
    params.NiagaraSystem = (UNiagaraComponent*)NiagaraSystem;
    params.OverrideName = (FName)OverrideName;
    params.ArrayData = (TArray<float>)ArrayData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ArrayData = params.ArrayData;
}
void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayColor(UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FLinearColor>& ArrayData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColor"));
    struct Params_SetNiagaraArrayColor {
        UNiagaraComponent* NiagaraSystem; // 0x0
        FName OverrideName; // 0x8
        TArray<FLinearColor> ArrayData; // 0x10
    }; // Size: 0x20
    Params_SetNiagaraArrayColor params{};
    params.NiagaraSystem = (UNiagaraComponent*)NiagaraSystem;
    params.OverrideName = (FName)OverrideName;
    params.ArrayData = (TArray<FLinearColor>)ArrayData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ArrayData = params.ArrayData;
}
void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayBoolValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, bool& Value, bool bSizeToFit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBoolValue"));
    struct Params_SetNiagaraArrayBoolValue {
        UNiagaraComponent* NiagaraSystem; // 0x0
        FName OverrideName; // 0x8
        int32_t Index; // 0x10
        bool Value; // 0x14
        bool bSizeToFit; // 0x15
    }; // Size: 0x16
    Params_SetNiagaraArrayBoolValue params{};
    params.NiagaraSystem = (UNiagaraComponent*)NiagaraSystem;
    params.OverrideName = (FName)OverrideName;
    params.Index = (int32_t)Index;
    params.Value = (bool)Value;
    params.bSizeToFit = (bool)bSizeToFit;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Value = params.Value;
}
TArray<FLinearColor> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayColor(UNiagaraComponent* NiagaraSystem, FName OverrideName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColor"));
    struct Params_GetNiagaraArrayColor {
        UNiagaraComponent* NiagaraSystem; // 0x0
        FName OverrideName; // 0x8
        TArray<FLinearColor> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetNiagaraArrayColor params{};
    params.NiagaraSystem = (UNiagaraComponent*)NiagaraSystem;
    params.OverrideName = (FName)OverrideName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FLinearColor>)params.ReturnValue;
}
void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayBool(UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<bool>& ArrayData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBool"));
    struct Params_SetNiagaraArrayBool {
        UNiagaraComponent* NiagaraSystem; // 0x0
        FName OverrideName; // 0x8
        TArray<bool> ArrayData; // 0x10
    }; // Size: 0x20
    Params_SetNiagaraArrayBool params{};
    params.NiagaraSystem = (UNiagaraComponent*)NiagaraSystem;
    params.OverrideName = (FName)OverrideName;
    params.ArrayData = (TArray<bool>)ArrayData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ArrayData = params.ArrayData;
}
FVector UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVectorValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVectorValue"));
    struct Params_GetNiagaraArrayVectorValue {
        UNiagaraComponent* NiagaraSystem; // 0x0
        FName OverrideName; // 0x8
        int32_t Index; // 0x10
        FVector ReturnValue; // 0x14
    }; // Size: 0x20
    Params_GetNiagaraArrayVectorValue params{};
    params.NiagaraSystem = (UNiagaraComponent*)NiagaraSystem;
    params.OverrideName = (FName)OverrideName;
    params.Index = (int32_t)Index;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector4 UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector4Value(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4Value"));
    struct Params_GetNiagaraArrayVector4Value {
        UNiagaraComponent* NiagaraSystem; // 0x0
        FName OverrideName; // 0x8
        int32_t Index; // 0x10
        char pad_14[0xc];
        FVector4 ReturnValue; // 0x20
    }; // Size: 0x30
    Params_GetNiagaraArrayVector4Value params{};
    params.NiagaraSystem = (UNiagaraComponent*)NiagaraSystem;
    params.OverrideName = (FName)OverrideName;
    params.Index = (int32_t)Index;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector4)params.ReturnValue;
}
TArray<FVector4> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector4(UNiagaraComponent* NiagaraSystem, FName OverrideName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4"));
    struct Params_GetNiagaraArrayVector4 {
        UNiagaraComponent* NiagaraSystem; // 0x0
        FName OverrideName; // 0x8
        TArray<FVector4> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetNiagaraArrayVector4 params{};
    params.NiagaraSystem = (UNiagaraComponent*)NiagaraSystem;
    params.OverrideName = (FName)OverrideName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FVector4>)params.ReturnValue;
}
FVector2D UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector2DValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2DValue"));
    struct Params_GetNiagaraArrayVector2DValue {
        UNiagaraComponent* NiagaraSystem; // 0x0
        FName OverrideName; // 0x8
        int32_t Index; // 0x10
        FVector2D ReturnValue; // 0x14
    }; // Size: 0x1c
    Params_GetNiagaraArrayVector2DValue params{};
    params.NiagaraSystem = (UNiagaraComponent*)NiagaraSystem;
    params.OverrideName = (FName)OverrideName;
    params.Index = (int32_t)Index;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
TArray<FVector2D> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector2D(UNiagaraComponent* NiagaraSystem, FName OverrideName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2D"));
    struct Params_GetNiagaraArrayVector2D {
        UNiagaraComponent* NiagaraSystem; // 0x0
        FName OverrideName; // 0x8
        TArray<FVector2D> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetNiagaraArrayVector2D params{};
    params.NiagaraSystem = (UNiagaraComponent*)NiagaraSystem;
    params.OverrideName = (FName)OverrideName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FVector2D>)params.ReturnValue;
}
TArray<FVector> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector(UNiagaraComponent* NiagaraSystem, FName OverrideName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector"));
    struct Params_GetNiagaraArrayVector {
        UNiagaraComponent* NiagaraSystem; // 0x0
        FName OverrideName; // 0x8
        TArray<FVector> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetNiagaraArrayVector params{};
    params.NiagaraSystem = (UNiagaraComponent*)NiagaraSystem;
    params.OverrideName = (FName)OverrideName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FVector>)params.ReturnValue;
}
FQuat UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayQuatValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuatValue"));
    struct Params_GetNiagaraArrayQuatValue {
        UNiagaraComponent* NiagaraSystem; // 0x0
        FName OverrideName; // 0x8
        int32_t Index; // 0x10
        char pad_14[0xc];
        FQuat ReturnValue; // 0x20
    }; // Size: 0x30
    Params_GetNiagaraArrayQuatValue params{};
    params.NiagaraSystem = (UNiagaraComponent*)NiagaraSystem;
    params.OverrideName = (FName)OverrideName;
    params.Index = (int32_t)Index;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FQuat)params.ReturnValue;
}
TArray<FQuat> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayQuat(UNiagaraComponent* NiagaraSystem, FName OverrideName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuat"));
    struct Params_GetNiagaraArrayQuat {
        UNiagaraComponent* NiagaraSystem; // 0x0
        FName OverrideName; // 0x8
        TArray<FQuat> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetNiagaraArrayQuat params{};
    params.NiagaraSystem = (UNiagaraComponent*)NiagaraSystem;
    params.OverrideName = (FName)OverrideName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FQuat>)params.ReturnValue;
}
bool UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayBoolValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBoolValue"));
    struct Params_GetNiagaraArrayBoolValue {
        UNiagaraComponent* NiagaraSystem; // 0x0
        FName OverrideName; // 0x8
        int32_t Index; // 0x10
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_GetNiagaraArrayBoolValue params{};
    params.NiagaraSystem = (UNiagaraComponent*)NiagaraSystem;
    params.OverrideName = (FName)OverrideName;
    params.Index = (int32_t)Index;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayFloatValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloatValue"));
    struct Params_GetNiagaraArrayFloatValue {
        UNiagaraComponent* NiagaraSystem; // 0x0
        FName OverrideName; // 0x8
        int32_t Index; // 0x10
        float ReturnValue; // 0x14
    }; // Size: 0x18
    Params_GetNiagaraArrayFloatValue params{};
    params.NiagaraSystem = (UNiagaraComponent*)NiagaraSystem;
    params.OverrideName = (FName)OverrideName;
    params.Index = (int32_t)Index;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
TArray<float> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayFloat(UNiagaraComponent* NiagaraSystem, FName OverrideName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloat"));
    struct Params_GetNiagaraArrayFloat {
        UNiagaraComponent* NiagaraSystem; // 0x0
        FName OverrideName; // 0x8
        TArray<float> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetNiagaraArrayFloat params{};
    params.NiagaraSystem = (UNiagaraComponent*)NiagaraSystem;
    params.OverrideName = (FName)OverrideName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<float>)params.ReturnValue;
}
FLinearColor UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayColorValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColorValue"));
    struct Params_GetNiagaraArrayColorValue {
        UNiagaraComponent* NiagaraSystem; // 0x0
        FName OverrideName; // 0x8
        int32_t Index; // 0x10
        FLinearColor ReturnValue; // 0x14
    }; // Size: 0x24
    Params_GetNiagaraArrayColorValue params{};
    params.NiagaraSystem = (UNiagaraComponent*)NiagaraSystem;
    params.OverrideName = (FName)OverrideName;
    params.Index = (int32_t)Index;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
TArray<bool> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayBool(UNiagaraComponent* NiagaraSystem, FName OverrideName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBool"));
    struct Params_GetNiagaraArrayBool {
        UNiagaraComponent* NiagaraSystem; // 0x0
        FName OverrideName; // 0x8
        TArray<bool> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetNiagaraArrayBool params{};
    params.NiagaraSystem = (UNiagaraComponent*)NiagaraSystem;
    params.OverrideName = (FName)OverrideName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<bool>)params.ReturnValue;
}
