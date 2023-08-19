#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UMastermindJsonObject : public UObject {
public:
    char pad_28[0x50];
    static UMastermindJsonObject* StaticClass();
    FString ToJsonString();
    void SetStringListField(FString InKey, TArray<FString>& InValues);
    void SetStringField(FString InKey, FString InValue);
    void SetObjectListField(FString InKey, TArray<UMastermindJsonObject*>& InValues);
    void SetObjectField(FString InKey, UMastermindJsonObject* InValue);
    void SetNumberListField(FString InKey, TArray<float>& InValues);
    void SetNumberField(FString InKey, float InValue);
    void SetNullField(FString InKey);
    void SetBooleanListField(FString InKey, TArray<bool>& InValues);
    void SetBooleanField(FString InKey, bool InValue);
    bool HasAnyFields();
    TArray<FString> GetStringListFieldOrDefault(FString InKey, bool& bOutHasField);
    FString GetStringFieldOrDefault(FString InKey, bool& bOutHasField);
    TArray<UMastermindJsonObject*> GetObjectListFieldOrDefault(FString InKey, bool& bOutHasField);
    UMastermindJsonObject* GetObjectFieldOrDefault(FString InKey, bool& bOutHasField);
    TArray<float> GetNumberListFieldOrDefault(FString InKey, bool& bOutHasField);
    float GetNumberFieldOrDefault(FString InKey, bool& bOutHasField);
    TArray<bool> GetBooleanListFieldOrDefault(FString InKey, bool& bOutHasField);
    bool GetBooleanFieldOrDefault(FString InKey, bool& bOutHasField);
}; // Size: 0x78
#pragma pack(pop)
