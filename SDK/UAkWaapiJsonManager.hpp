#pragma once
#include <cstdint>
#include "FAKWaapiJsonObject.hpp"
#include "UBlueprintFunctionLibrary.hpp"
struct FAkWaapiFieldNames;
#pragma pack(push, 1)
class UAkWaapiJsonManager : public UBlueprintFunctionLibrary {
public:
    static UAkWaapiJsonManager* StaticClass();
    static FAKWaapiJsonObject SetStringField(FAkWaapiFieldNames& FieldName, FString FieldValue, FAKWaapiJsonObject Target);
    static FAKWaapiJsonObject SetObjectField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject FieldValue, FAKWaapiJsonObject Target);
    static FAKWaapiJsonObject SetNumberField(FAkWaapiFieldNames& FieldName, float FieldValue, FAKWaapiJsonObject Target);
    static FAKWaapiJsonObject SetBoolField(FAkWaapiFieldNames& FieldName, bool FieldValue, FAKWaapiJsonObject Target);
    static FAKWaapiJsonObject SetArrayStringFields(FAkWaapiFieldNames& FieldName, TArray<FString>& FieldStringValues, FAKWaapiJsonObject Target);
    static FAKWaapiJsonObject SetArrayObjectFields(FAkWaapiFieldNames& FieldName, TArray<FAKWaapiJsonObject>& FieldObjectValues, FAKWaapiJsonObject Target);
    static FString GetStringField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);
    static FAKWaapiJsonObject GetObjectField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);
    static float GetNumberField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);
    static int32_t GetIntegerField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);
    static bool GetBoolField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);
    static TArray<FAKWaapiJsonObject> GetArrayField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);
    static void Conv_FAKWaapiJsonObjectToText(FAKWaapiJsonObject INAKWaapiJsonObject);
    static FString Conv_FAKWaapiJsonObjectToString(FAKWaapiJsonObject INAKWaapiJsonObject);
}; // Size: 0x28
#pragma pack(pop)
