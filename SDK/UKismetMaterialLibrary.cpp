#include "EMIDCreationFlags.hpp"
#include "FLinearColor.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UKismetMaterialLibrary.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMaterialInterface.hpp"
#include "UMaterialParameterCollection.hpp"
#include "UObject.hpp"
void UKismetMaterialLibrary::SetScalarParameterValue(UObject* WorldContextObject, UMaterialParameterCollection* Collection, FName ParameterName, float ParameterValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMaterialLibrary.SetScalarParameterValue"));
    struct Params_SetScalarParameterValue {
        UObject* WorldContextObject; // 0x0
        UMaterialParameterCollection* Collection; // 0x8
        FName ParameterName; // 0x10
        float ParameterValue; // 0x18
    }; // Size: 0x1c
    Params_SetScalarParameterValue params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Collection = (UMaterialParameterCollection*)Collection;
    params.ParameterName = (FName)ParameterName;
    params.ParameterValue = (float)ParameterValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UKismetMaterialLibrary* UKismetMaterialLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.KismetMaterialLibrary");
    return (UKismetMaterialLibrary*)res;
}
UMaterialInstanceDynamic* UKismetMaterialLibrary::CreateDynamicMaterialInstance(UObject* WorldContextObject, UMaterialInterface* Parent, FName OptionalName, EMIDCreationFlags CreationFlags) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMaterialLibrary.CreateDynamicMaterialInstance"));
    struct Params_CreateDynamicMaterialInstance {
        UObject* WorldContextObject; // 0x0
        UMaterialInterface* Parent; // 0x8
        FName OptionalName; // 0x10
        EMIDCreationFlags CreationFlags; // 0x18
        char pad_19[0x7];
        UMaterialInstanceDynamic* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_CreateDynamicMaterialInstance params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Parent = (UMaterialInterface*)Parent;
    params.OptionalName = (FName)OptionalName;
    params.CreationFlags = (EMIDCreationFlags)CreationFlags;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UMaterialInstanceDynamic*)params.ReturnValue;
}
void UKismetMaterialLibrary::SetVectorParameterValue(UObject* WorldContextObject, UMaterialParameterCollection* Collection, FName ParameterName, FLinearColor& ParameterValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMaterialLibrary.SetVectorParameterValue"));
    struct Params_SetVectorParameterValue {
        UObject* WorldContextObject; // 0x0
        UMaterialParameterCollection* Collection; // 0x8
        FName ParameterName; // 0x10
        FLinearColor ParameterValue; // 0x18
    }; // Size: 0x28
    Params_SetVectorParameterValue params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Collection = (UMaterialParameterCollection*)Collection;
    params.ParameterName = (FName)ParameterName;
    params.ParameterValue = (FLinearColor)ParameterValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ParameterValue = params.ParameterValue;
}
float UKismetMaterialLibrary::GetScalarParameterValue(UObject* WorldContextObject, UMaterialParameterCollection* Collection, FName ParameterName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMaterialLibrary.GetScalarParameterValue"));
    struct Params_GetScalarParameterValue {
        UObject* WorldContextObject; // 0x0
        UMaterialParameterCollection* Collection; // 0x8
        FName ParameterName; // 0x10
        float ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_GetScalarParameterValue params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Collection = (UMaterialParameterCollection*)Collection;
    params.ParameterName = (FName)ParameterName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FLinearColor UKismetMaterialLibrary::GetVectorParameterValue(UObject* WorldContextObject, UMaterialParameterCollection* Collection, FName ParameterName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMaterialLibrary.GetVectorParameterValue"));
    struct Params_GetVectorParameterValue {
        UObject* WorldContextObject; // 0x0
        UMaterialParameterCollection* Collection; // 0x8
        FName ParameterName; // 0x10
        FLinearColor ReturnValue; // 0x18
    }; // Size: 0x28
    Params_GetVectorParameterValue params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Collection = (UMaterialParameterCollection*)Collection;
    params.ParameterName = (FName)ParameterName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
