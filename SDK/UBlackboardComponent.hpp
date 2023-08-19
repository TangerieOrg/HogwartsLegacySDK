#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
class UBrainComponent;
class UBlackboardData;
class UBlackboardKeyType;
class UObject;
class UClass;
#pragma pack(push, 1)
class UBlackboardComponent : public UActorComponent {
public:
    char pad_c8[0x10];
    UBrainComponent* BrainComp; // 0xd8
    UBlackboardData* DefaultBlackboardAsset; // 0xe0
    UBlackboardData* BlackboardAsset; // 0xe8
    char pad_f0[0x20];
    TArray<UBlackboardKeyType*> KeyInstances; // 0x110
    char pad_120[0xc0];
    static UBlackboardComponent* StaticClass();
    void SetValueAsVector(FName& KeyName, FVector VectorValue);
    void SetValueAsString(FName& KeyName, FString StringValue);
    void SetValueAsRotator(FName& KeyName, FRotator VectorValue);
    void SetValueAsObject(FName& KeyName, UObject* ObjectValue);
    void SetValueAsName(FName& KeyName, FName NameValue);
    void SetValueAsInt(FName& KeyName, int32_t IntValue);
    void SetValueAsFloat(FName& KeyName, float FloatValue);
    void SetValueAsEnum(FName& KeyName, uint8_t EnumValue);
    void SetValueAsClass(FName& KeyName, UClass* ClassValue);
    void SetValueAsBool(FName& KeyName, bool BoolValue);
    bool IsVectorValueSet(FName& KeyName);
    FVector GetValueAsVector(FName& KeyName);
    FString GetValueAsString(FName& KeyName);
    FRotator GetValueAsRotator(FName& KeyName);
    UObject* GetValueAsObject(FName& KeyName);
    FName GetValueAsName(FName& KeyName);
    int32_t GetValueAsInt(FName& KeyName);
    float GetValueAsFloat(FName& KeyName);
    uint8_t GetValueAsEnum(FName& KeyName);
    UClass* GetValueAsClass(FName& KeyName);
    bool GetValueAsBool(FName& KeyName);
    bool GetRotationFromEntry(FName& KeyName, FRotator& ResultRotation);
    bool GetLocationFromEntry(FName& KeyName, FVector& ResultLocation);
    void ClearValue(FName& KeyName);
}; // Size: 0x1e0
#pragma pack(pop)
