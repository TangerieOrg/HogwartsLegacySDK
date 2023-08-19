#include "UFunction.hpp"
#include "UMastermindJsonObject.hpp"
#include "UObject.hpp"
UMastermindJsonObject* UMastermindJsonObject::StaticClass() {
    static auto res = find_uobject("Class /Script/Mastermind.MastermindJsonObject");
    return (UMastermindJsonObject*)res;
}
void UMastermindJsonObject::SetStringField(FString InKey, FString InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindJsonObject.SetStringField"));
    struct Params_SetStringField {
        FString InKey; // 0x0
        FString InValue; // 0x10
    }; // Size: 0x20
    Params_SetStringField params{};
    params.InKey = (FString)InKey;
    params.InValue = (FString)InValue;
    ProcessEvent(func, &params);
}
void UMastermindJsonObject::SetNumberField(FString InKey, float InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindJsonObject.SetNumberField"));
    struct Params_SetNumberField {
        FString InKey; // 0x0
        float InValue; // 0x10
    }; // Size: 0x14
    Params_SetNumberField params{};
    params.InKey = (FString)InKey;
    params.InValue = (float)InValue;
    ProcessEvent(func, &params);
}
FString UMastermindJsonObject::ToJsonString() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindJsonObject.ToJsonString"));
    struct Params_ToJsonString {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_ToJsonString params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UMastermindJsonObject::SetStringListField(FString InKey, TArray<FString>& InValues) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindJsonObject.SetStringListField"));
    struct Params_SetStringListField {
        FString InKey; // 0x0
        TArray<FString> InValues; // 0x10
    }; // Size: 0x20
    Params_SetStringListField params{};
    params.InKey = (FString)InKey;
    params.InValues = (TArray<FString>)InValues;
    ProcessEvent(func, &params);
    InValues = params.InValues;
}
void UMastermindJsonObject::SetObjectListField(FString InKey, TArray<UMastermindJsonObject*>& InValues) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindJsonObject.SetObjectListField"));
    struct Params_SetObjectListField {
        FString InKey; // 0x0
        TArray<UMastermindJsonObject*> InValues; // 0x10
    }; // Size: 0x20
    Params_SetObjectListField params{};
    params.InKey = (FString)InKey;
    params.InValues = (TArray<UMastermindJsonObject*>)InValues;
    ProcessEvent(func, &params);
    InValues = params.InValues;
}
void UMastermindJsonObject::SetNumberListField(FString InKey, TArray<float>& InValues) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindJsonObject.SetNumberListField"));
    struct Params_SetNumberListField {
        FString InKey; // 0x0
        TArray<float> InValues; // 0x10
    }; // Size: 0x20
    Params_SetNumberListField params{};
    params.InKey = (FString)InKey;
    params.InValues = (TArray<float>)InValues;
    ProcessEvent(func, &params);
    InValues = params.InValues;
}
void UMastermindJsonObject::SetObjectField(FString InKey, UMastermindJsonObject* InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindJsonObject.SetObjectField"));
    struct Params_SetObjectField {
        FString InKey; // 0x0
        UMastermindJsonObject* InValue; // 0x10
    }; // Size: 0x18
    Params_SetObjectField params{};
    params.InKey = (FString)InKey;
    params.InValue = (UMastermindJsonObject*)InValue;
    ProcessEvent(func, &params);
}
void UMastermindJsonObject::SetNullField(FString InKey) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindJsonObject.SetNullField"));
    struct Params_SetNullField {
        FString InKey; // 0x0
    }; // Size: 0x10
    Params_SetNullField params{};
    params.InKey = (FString)InKey;
    ProcessEvent(func, &params);
}
void UMastermindJsonObject::SetBooleanListField(FString InKey, TArray<bool>& InValues) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindJsonObject.SetBooleanListField"));
    struct Params_SetBooleanListField {
        FString InKey; // 0x0
        TArray<bool> InValues; // 0x10
    }; // Size: 0x20
    Params_SetBooleanListField params{};
    params.InKey = (FString)InKey;
    params.InValues = (TArray<bool>)InValues;
    ProcessEvent(func, &params);
    InValues = params.InValues;
}
void UMastermindJsonObject::SetBooleanField(FString InKey, bool InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindJsonObject.SetBooleanField"));
    struct Params_SetBooleanField {
        FString InKey; // 0x0
        bool InValue; // 0x10
    }; // Size: 0x11
    Params_SetBooleanField params{};
    params.InKey = (FString)InKey;
    params.InValue = (bool)InValue;
    ProcessEvent(func, &params);
}
bool UMastermindJsonObject::HasAnyFields() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindJsonObject.HasAnyFields"));
    struct Params_HasAnyFields {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasAnyFields params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
TArray<FString> UMastermindJsonObject::GetStringListFieldOrDefault(FString InKey, bool& bOutHasField) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindJsonObject.GetStringListFieldOrDefault"));
    struct Params_GetStringListFieldOrDefault {
        FString InKey; // 0x0
        bool bOutHasField; // 0x10
        char pad_11[0x7];
        TArray<FString> ReturnValue; // 0x18
    }; // Size: 0x28
    Params_GetStringListFieldOrDefault params{};
    params.InKey = (FString)InKey;
    params.bOutHasField = (bool)bOutHasField;
    ProcessEvent(func, &params);
    bOutHasField = params.bOutHasField;
    return (TArray<FString>)params.ReturnValue;
}
FString UMastermindJsonObject::GetStringFieldOrDefault(FString InKey, bool& bOutHasField) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindJsonObject.GetStringFieldOrDefault"));
    struct Params_GetStringFieldOrDefault {
        FString InKey; // 0x0
        bool bOutHasField; // 0x10
        char pad_11[0x7];
        FString ReturnValue; // 0x18
    }; // Size: 0x28
    Params_GetStringFieldOrDefault params{};
    params.InKey = (FString)InKey;
    params.bOutHasField = (bool)bOutHasField;
    ProcessEvent(func, &params);
    bOutHasField = params.bOutHasField;
    return (FString)params.ReturnValue;
}
TArray<UMastermindJsonObject*> UMastermindJsonObject::GetObjectListFieldOrDefault(FString InKey, bool& bOutHasField) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindJsonObject.GetObjectListFieldOrDefault"));
    struct Params_GetObjectListFieldOrDefault {
        FString InKey; // 0x0
        bool bOutHasField; // 0x10
        char pad_11[0x7];
        TArray<UMastermindJsonObject*> ReturnValue; // 0x18
    }; // Size: 0x28
    Params_GetObjectListFieldOrDefault params{};
    params.InKey = (FString)InKey;
    params.bOutHasField = (bool)bOutHasField;
    ProcessEvent(func, &params);
    bOutHasField = params.bOutHasField;
    return (TArray<UMastermindJsonObject*>)params.ReturnValue;
}
UMastermindJsonObject* UMastermindJsonObject::GetObjectFieldOrDefault(FString InKey, bool& bOutHasField) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindJsonObject.GetObjectFieldOrDefault"));
    struct Params_GetObjectFieldOrDefault {
        FString InKey; // 0x0
        bool bOutHasField; // 0x10
        char pad_11[0x7];
        UMastermindJsonObject* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_GetObjectFieldOrDefault params{};
    params.InKey = (FString)InKey;
    params.bOutHasField = (bool)bOutHasField;
    ProcessEvent(func, &params);
    bOutHasField = params.bOutHasField;
    return (UMastermindJsonObject*)params.ReturnValue;
}
TArray<float> UMastermindJsonObject::GetNumberListFieldOrDefault(FString InKey, bool& bOutHasField) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindJsonObject.GetNumberListFieldOrDefault"));
    struct Params_GetNumberListFieldOrDefault {
        FString InKey; // 0x0
        bool bOutHasField; // 0x10
        char pad_11[0x7];
        TArray<float> ReturnValue; // 0x18
    }; // Size: 0x28
    Params_GetNumberListFieldOrDefault params{};
    params.InKey = (FString)InKey;
    params.bOutHasField = (bool)bOutHasField;
    ProcessEvent(func, &params);
    bOutHasField = params.bOutHasField;
    return (TArray<float>)params.ReturnValue;
}
float UMastermindJsonObject::GetNumberFieldOrDefault(FString InKey, bool& bOutHasField) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindJsonObject.GetNumberFieldOrDefault"));
    struct Params_GetNumberFieldOrDefault {
        FString InKey; // 0x0
        bool bOutHasField; // 0x10
        char pad_11[0x3];
        float ReturnValue; // 0x14
    }; // Size: 0x18
    Params_GetNumberFieldOrDefault params{};
    params.InKey = (FString)InKey;
    params.bOutHasField = (bool)bOutHasField;
    ProcessEvent(func, &params);
    bOutHasField = params.bOutHasField;
    return (float)params.ReturnValue;
}
TArray<bool> UMastermindJsonObject::GetBooleanListFieldOrDefault(FString InKey, bool& bOutHasField) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindJsonObject.GetBooleanListFieldOrDefault"));
    struct Params_GetBooleanListFieldOrDefault {
        FString InKey; // 0x0
        bool bOutHasField; // 0x10
        char pad_11[0x7];
        TArray<bool> ReturnValue; // 0x18
    }; // Size: 0x28
    Params_GetBooleanListFieldOrDefault params{};
    params.InKey = (FString)InKey;
    params.bOutHasField = (bool)bOutHasField;
    ProcessEvent(func, &params);
    bOutHasField = params.bOutHasField;
    return (TArray<bool>)params.ReturnValue;
}
bool UMastermindJsonObject::GetBooleanFieldOrDefault(FString InKey, bool& bOutHasField) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindJsonObject.GetBooleanFieldOrDefault"));
    struct Params_GetBooleanFieldOrDefault {
        FString InKey; // 0x0
        bool bOutHasField; // 0x10
        bool ReturnValue; // 0x11
    }; // Size: 0x12
    Params_GetBooleanFieldOrDefault params{};
    params.InKey = (FString)InKey;
    params.bOutHasField = (bool)bOutHasField;
    ProcessEvent(func, &params);
    bOutHasField = params.bOutHasField;
    return (bool)params.ReturnValue;
}
