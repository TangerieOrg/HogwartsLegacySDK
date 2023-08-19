#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UVariantMap : public UObject {
public:
    char pad_28[0x58];
    static UVariantMap* StaticClass();
    static bool VariantExists_FromHandle(FVariantMapHandle VarMapHandle, FName Name);
    bool VariantExists(FName Name);
    static UVariantMap* RetrieveVariantMap(FVariantMapHandle VarMapHandle);
    static FName GetVariantName_FromHandle(FVariantMapHandle VarMapHandle, FName Name, FName DefaultValue, bool& bFound);
    FName GetVariantName(FName Name, FName DefaultValue, bool& bFound);
    static int32_t GetVariantInt32_FromHandle(FVariantMapHandle VarMapHandle, FName Name, int32_t DefaultValue, bool& bFound);
    int32_t GetVariantInt32(FName Name, int32_t DefaultValue, bool& bFound);
    static FVector GetVariantFVector_FromHandle(FVariantMapHandle VarMapHandle, FName Name, FVector DefaultValue, bool& bFound);
    static FVector2D GetVariantFVector2D_FromHandle(FVariantMapHandle VarMapHandle, FName Name, FVector2D DefaultValue, bool& bFound);
    FVector2D GetVariantFVector2D(FName Name, FVector2D DefaultValue, bool& bFound);
    FVector GetVariantFVector(FName Name, FVector DefaultValue, bool& bFound);
    static FTransform GetVariantFTransform_FromHandle(FVariantMapHandle VarMapHandle, FName Name, FTransform DefaultValue, bool& bFound);
    FTransform GetVariantFTransform(FName Name, FTransform DefaultValue, bool& bFound);
    static FString GetVariantFString_FromHandle(FVariantMapHandle VarMapHandle, FName Name, FString DefaultValue, bool& bFound);
    FString GetVariantFString(FName Name, FString DefaultValue, bool& bFound);
    static FRotator GetVariantFRotator_FromHandle(FVariantMapHandle VarMapHandle, FName Name, FRotator DefaultValue, bool& bFound);
    FRotator GetVariantFRotator(FName Name, FRotator DefaultValue, bool& bFound);
    static float GetVariantFloat_FromHandle(FVariantMapHandle VarMapHandle, FName Name, float DefaultValue, bool& bFound);
    float GetVariantFloat(FName Name, float DefaultValue, bool& bFound);
    static bool GetVariantBool_FromHandle(FVariantMapHandle VarMapHandle, FName Name, bool DefaultValue, bool& bFound);
    bool GetVariantBool(FName Name, bool DefaultValue, bool& bFound);
    static FVariantMapHandle GetHandle_FromObject(UObject* InObject);
    FVariantMapHandle GetHandle();
    static FVariantMapHandle DuplicateVariantMap(FVariantMapHandle VarMapHandle, bool bDestroy);
    static FVariantMapHandle DestroyVariantMap(FVariantMapHandle VarMapHandle);
    static FVariantMapHandle CreateVariantMap();
    static void AddVariantName_FromHandle(FVariantMapHandle VarMapHandle, FName Name, FName Value);
    void AddVariantName(FName Name, FName Value);
    static void AddVariantInt32_FromHandle(FVariantMapHandle VarMapHandle, FName Name, int32_t Value);
    void AddVariantInt32(FName Name, int32_t Value);
    static void AddVariantFVector_FromHandle(FVariantMapHandle VarMapHandle, FName Name, FVector Value);
    static void AddVariantFVector2D_FromHandle(FVariantMapHandle VarMapHandle, FName Name, FVector2D Value);
    void AddVariantFVector2D(FName Name, FVector2D Value);
    void AddVariantFVector(FName Name, FVector Value);
    static void AddVariantFTransform_FromHandle(FVariantMapHandle VarMapHandle, FName Name, FTransform Value);
    void AddVariantFTransform(FName Name, FTransform Value);
    static void AddVariantFString_FromHandle(FVariantMapHandle VarMapHandle, FName Name, FString Value);
    void AddVariantFString(FName Name, FString Value);
    static void AddVariantFRotator_FromHandle(FVariantMapHandle VarMapHandle, FName Name, FRotator Value);
    void AddVariantFRotator(FName Name, FRotator Value);
    static void AddVariantFloat_FromHandle(FVariantMapHandle VarMapHandle, FName Name, float Value);
    void AddVariantFloat(FName Name, float Value);
    static void AddVariantBool_FromHandle(FVariantMapHandle VarMapHandle, FName Name, bool Value);
    void AddVariantBool(FName Name, bool Value);
    static void AbsorbVariantMap_FromHandle(FVariantMapHandle MasterVarMapHandle, FVariantMapHandle VarMapHandleToAbsorb);
    void AbsorbVariantMap(UVariantMap* VarMapHandleToAbsorb);
}; // Size: 0x80
#pragma pack(pop)
