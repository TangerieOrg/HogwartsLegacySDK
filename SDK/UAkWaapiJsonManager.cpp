#include "FAKWaapiJsonObject.hpp"
#include "FAkWaapiFieldNames.hpp"
#include "UAkWaapiJsonManager.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
FAKWaapiJsonObject UAkWaapiJsonManager::SetNumberField(FAkWaapiFieldNames& FieldName, float FieldValue, FAKWaapiJsonObject Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkWaapiJsonManager.SetNumberField"));
    struct Params_SetNumberField {
        FAkWaapiFieldNames FieldName; // 0x0
        float FieldValue; // 0x10
        char pad_14[0x4];
        FAKWaapiJsonObject Target; // 0x18
        FAKWaapiJsonObject ReturnValue; // 0x28
    }; // Size: 0x38
    Params_SetNumberField params{};
    params.FieldName = (FAkWaapiFieldNames)FieldName;
    params.FieldValue = (float)FieldValue;
    params.Target = (FAKWaapiJsonObject)Target;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FieldName = params.FieldName;
    return (FAKWaapiJsonObject)params.ReturnValue;
}
UAkWaapiJsonManager* UAkWaapiJsonManager::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkWaapiJsonManager");
    return (UAkWaapiJsonManager*)res;
}
FAKWaapiJsonObject UAkWaapiJsonManager::SetStringField(FAkWaapiFieldNames& FieldName, FString FieldValue, FAKWaapiJsonObject Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkWaapiJsonManager.SetStringField"));
    struct Params_SetStringField {
        FAkWaapiFieldNames FieldName; // 0x0
        FString FieldValue; // 0x10
        FAKWaapiJsonObject Target; // 0x20
        FAKWaapiJsonObject ReturnValue; // 0x30
    }; // Size: 0x40
    Params_SetStringField params{};
    params.FieldName = (FAkWaapiFieldNames)FieldName;
    params.FieldValue = (FString)FieldValue;
    params.Target = (FAKWaapiJsonObject)Target;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FieldName = params.FieldName;
    return (FAKWaapiJsonObject)params.ReturnValue;
}
FAKWaapiJsonObject UAkWaapiJsonManager::SetObjectField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject FieldValue, FAKWaapiJsonObject Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkWaapiJsonManager.SetObjectField"));
    struct Params_SetObjectField {
        FAkWaapiFieldNames FieldName; // 0x0
        FAKWaapiJsonObject FieldValue; // 0x10
        FAKWaapiJsonObject Target; // 0x20
        FAKWaapiJsonObject ReturnValue; // 0x30
    }; // Size: 0x40
    Params_SetObjectField params{};
    params.FieldName = (FAkWaapiFieldNames)FieldName;
    params.FieldValue = (FAKWaapiJsonObject)FieldValue;
    params.Target = (FAKWaapiJsonObject)Target;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FieldName = params.FieldName;
    return (FAKWaapiJsonObject)params.ReturnValue;
}
FAKWaapiJsonObject UAkWaapiJsonManager::SetArrayObjectFields(FAkWaapiFieldNames& FieldName, TArray<FAKWaapiJsonObject>& FieldObjectValues, FAKWaapiJsonObject Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkWaapiJsonManager.SetArrayObjectFields"));
    struct Params_SetArrayObjectFields {
        FAkWaapiFieldNames FieldName; // 0x0
        TArray<FAKWaapiJsonObject> FieldObjectValues; // 0x10
        FAKWaapiJsonObject Target; // 0x20
        FAKWaapiJsonObject ReturnValue; // 0x30
    }; // Size: 0x40
    Params_SetArrayObjectFields params{};
    params.FieldName = (FAkWaapiFieldNames)FieldName;
    params.FieldObjectValues = (TArray<FAKWaapiJsonObject>)FieldObjectValues;
    params.Target = (FAKWaapiJsonObject)Target;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FieldObjectValues = params.FieldObjectValues;
    FieldName = params.FieldName;
    return (FAKWaapiJsonObject)params.ReturnValue;
}
FAKWaapiJsonObject UAkWaapiJsonManager::SetBoolField(FAkWaapiFieldNames& FieldName, bool FieldValue, FAKWaapiJsonObject Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkWaapiJsonManager.SetBoolField"));
    struct Params_SetBoolField {
        FAkWaapiFieldNames FieldName; // 0x0
        bool FieldValue; // 0x10
        char pad_11[0x7];
        FAKWaapiJsonObject Target; // 0x18
        FAKWaapiJsonObject ReturnValue; // 0x28
    }; // Size: 0x38
    Params_SetBoolField params{};
    params.FieldName = (FAkWaapiFieldNames)FieldName;
    params.FieldValue = (bool)FieldValue;
    params.Target = (FAKWaapiJsonObject)Target;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FieldName = params.FieldName;
    return (FAKWaapiJsonObject)params.ReturnValue;
}
FAKWaapiJsonObject UAkWaapiJsonManager::SetArrayStringFields(FAkWaapiFieldNames& FieldName, TArray<FString>& FieldStringValues, FAKWaapiJsonObject Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkWaapiJsonManager.SetArrayStringFields"));
    struct Params_SetArrayStringFields {
        FAkWaapiFieldNames FieldName; // 0x0
        TArray<FString> FieldStringValues; // 0x10
        FAKWaapiJsonObject Target; // 0x20
        FAKWaapiJsonObject ReturnValue; // 0x30
    }; // Size: 0x40
    Params_SetArrayStringFields params{};
    params.FieldName = (FAkWaapiFieldNames)FieldName;
    params.FieldStringValues = (TArray<FString>)FieldStringValues;
    params.Target = (FAKWaapiJsonObject)Target;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FieldName = params.FieldName;
    FieldStringValues = params.FieldStringValues;
    return (FAKWaapiJsonObject)params.ReturnValue;
}
FString UAkWaapiJsonManager::GetStringField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkWaapiJsonManager.GetStringField"));
    struct Params_GetStringField {
        FAkWaapiFieldNames FieldName; // 0x0
        FAKWaapiJsonObject Target; // 0x10
        FString ReturnValue; // 0x20
    }; // Size: 0x30
    Params_GetStringField params{};
    params.FieldName = (FAkWaapiFieldNames)FieldName;
    params.Target = (FAKWaapiJsonObject)Target;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FieldName = params.FieldName;
    return (FString)params.ReturnValue;
}
FAKWaapiJsonObject UAkWaapiJsonManager::GetObjectField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkWaapiJsonManager.GetObjectField"));
    struct Params_GetObjectField {
        FAkWaapiFieldNames FieldName; // 0x0
        FAKWaapiJsonObject Target; // 0x10
        FAKWaapiJsonObject ReturnValue; // 0x20
    }; // Size: 0x30
    Params_GetObjectField params{};
    params.FieldName = (FAkWaapiFieldNames)FieldName;
    params.Target = (FAKWaapiJsonObject)Target;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FieldName = params.FieldName;
    return (FAKWaapiJsonObject)params.ReturnValue;
}
float UAkWaapiJsonManager::GetNumberField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkWaapiJsonManager.GetNumberField"));
    struct Params_GetNumberField {
        FAkWaapiFieldNames FieldName; // 0x0
        FAKWaapiJsonObject Target; // 0x10
        float ReturnValue; // 0x20
    }; // Size: 0x24
    Params_GetNumberField params{};
    params.FieldName = (FAkWaapiFieldNames)FieldName;
    params.Target = (FAKWaapiJsonObject)Target;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FieldName = params.FieldName;
    return (float)params.ReturnValue;
}
int32_t UAkWaapiJsonManager::GetIntegerField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkWaapiJsonManager.GetIntegerField"));
    struct Params_GetIntegerField {
        FAkWaapiFieldNames FieldName; // 0x0
        FAKWaapiJsonObject Target; // 0x10
        int32_t ReturnValue; // 0x20
    }; // Size: 0x24
    Params_GetIntegerField params{};
    params.FieldName = (FAkWaapiFieldNames)FieldName;
    params.Target = (FAKWaapiJsonObject)Target;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FieldName = params.FieldName;
    return (int32_t)params.ReturnValue;
}
bool UAkWaapiJsonManager::GetBoolField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkWaapiJsonManager.GetBoolField"));
    struct Params_GetBoolField {
        FAkWaapiFieldNames FieldName; // 0x0
        FAKWaapiJsonObject Target; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_GetBoolField params{};
    params.FieldName = (FAkWaapiFieldNames)FieldName;
    params.Target = (FAKWaapiJsonObject)Target;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FieldName = params.FieldName;
    return (bool)params.ReturnValue;
}
TArray<FAKWaapiJsonObject> UAkWaapiJsonManager::GetArrayField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkWaapiJsonManager.GetArrayField"));
    struct Params_GetArrayField {
        FAkWaapiFieldNames FieldName; // 0x0
        FAKWaapiJsonObject Target; // 0x10
        TArray<FAKWaapiJsonObject> ReturnValue; // 0x20
    }; // Size: 0x30
    Params_GetArrayField params{};
    params.FieldName = (FAkWaapiFieldNames)FieldName;
    params.Target = (FAKWaapiJsonObject)Target;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FieldName = params.FieldName;
    return (TArray<FAKWaapiJsonObject>)params.ReturnValue;
}
void UAkWaapiJsonManager::Conv_FAKWaapiJsonObjectToText(FAKWaapiJsonObject INAKWaapiJsonObject) {}
FString UAkWaapiJsonManager::Conv_FAKWaapiJsonObjectToString(FAKWaapiJsonObject INAKWaapiJsonObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString"));
    struct Params_Conv_FAKWaapiJsonObjectToString {
        FAKWaapiJsonObject INAKWaapiJsonObject; // 0x0
        FString ReturnValue; // 0x10
    }; // Size: 0x20
    Params_Conv_FAKWaapiJsonObjectToString params{};
    params.INAKWaapiJsonObject = (FAKWaapiJsonObject)INAKWaapiJsonObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
