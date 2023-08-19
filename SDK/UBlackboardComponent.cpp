#include "FRotator.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
#include "UBlackboardComponent.hpp"
#include "UBlackboardData.hpp"
#include "UBlackboardKeyType.hpp"
#include "UBrainComponent.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
void UBlackboardComponent::SetValueAsClass(FName& KeyName, UClass* ClassValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BlackboardComponent.SetValueAsClass"));
    struct Params_SetValueAsClass {
        FName KeyName; // 0x0
        UClass* ClassValue; // 0x8
    }; // Size: 0x10
    Params_SetValueAsClass params{};
    params.KeyName = (FName)KeyName;
    params.ClassValue = (UClass*)ClassValue;
    ProcessEvent(func, &params);
    KeyName = params.KeyName;
}
UBlackboardComponent* UBlackboardComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BlackboardComponent");
    return (UBlackboardComponent*)res;
}
void UBlackboardComponent::SetValueAsVector(FName& KeyName, FVector VectorValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BlackboardComponent.SetValueAsVector"));
    struct Params_SetValueAsVector {
        FName KeyName; // 0x0
        FVector VectorValue; // 0x8
    }; // Size: 0x14
    Params_SetValueAsVector params{};
    params.KeyName = (FName)KeyName;
    params.VectorValue = (FVector)VectorValue;
    ProcessEvent(func, &params);
    KeyName = params.KeyName;
}
void UBlackboardComponent::SetValueAsString(FName& KeyName, FString StringValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BlackboardComponent.SetValueAsString"));
    struct Params_SetValueAsString {
        FName KeyName; // 0x0
        FString StringValue; // 0x8
    }; // Size: 0x18
    Params_SetValueAsString params{};
    params.KeyName = (FName)KeyName;
    params.StringValue = (FString)StringValue;
    ProcessEvent(func, &params);
    KeyName = params.KeyName;
}
void UBlackboardComponent::SetValueAsFloat(FName& KeyName, float FloatValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BlackboardComponent.SetValueAsFloat"));
    struct Params_SetValueAsFloat {
        FName KeyName; // 0x0
        float FloatValue; // 0x8
    }; // Size: 0xc
    Params_SetValueAsFloat params{};
    params.KeyName = (FName)KeyName;
    params.FloatValue = (float)FloatValue;
    ProcessEvent(func, &params);
    KeyName = params.KeyName;
}
void UBlackboardComponent::SetValueAsRotator(FName& KeyName, FRotator VectorValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BlackboardComponent.SetValueAsRotator"));
    struct Params_SetValueAsRotator {
        FName KeyName; // 0x0
        FRotator VectorValue; // 0x8
    }; // Size: 0x14
    Params_SetValueAsRotator params{};
    params.KeyName = (FName)KeyName;
    params.VectorValue = (FRotator)VectorValue;
    ProcessEvent(func, &params);
    KeyName = params.KeyName;
}
void UBlackboardComponent::SetValueAsObject(FName& KeyName, UObject* ObjectValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BlackboardComponent.SetValueAsObject"));
    struct Params_SetValueAsObject {
        FName KeyName; // 0x0
        UObject* ObjectValue; // 0x8
    }; // Size: 0x10
    Params_SetValueAsObject params{};
    params.KeyName = (FName)KeyName;
    params.ObjectValue = (UObject*)ObjectValue;
    ProcessEvent(func, &params);
    KeyName = params.KeyName;
}
void UBlackboardComponent::SetValueAsName(FName& KeyName, FName NameValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BlackboardComponent.SetValueAsName"));
    struct Params_SetValueAsName {
        FName KeyName; // 0x0
        FName NameValue; // 0x8
    }; // Size: 0x10
    Params_SetValueAsName params{};
    params.KeyName = (FName)KeyName;
    params.NameValue = (FName)NameValue;
    ProcessEvent(func, &params);
    KeyName = params.KeyName;
}
void UBlackboardComponent::SetValueAsInt(FName& KeyName, int32_t IntValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BlackboardComponent.SetValueAsInt"));
    struct Params_SetValueAsInt {
        FName KeyName; // 0x0
        int32_t IntValue; // 0x8
    }; // Size: 0xc
    Params_SetValueAsInt params{};
    params.KeyName = (FName)KeyName;
    params.IntValue = (int32_t)IntValue;
    ProcessEvent(func, &params);
    KeyName = params.KeyName;
}
bool UBlackboardComponent::GetLocationFromEntry(FName& KeyName, FVector& ResultLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BlackboardComponent.GetLocationFromEntry"));
    struct Params_GetLocationFromEntry {
        FName KeyName; // 0x0
        FVector ResultLocation; // 0x8
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_GetLocationFromEntry params{};
    params.KeyName = (FName)KeyName;
    params.ResultLocation = (FVector)ResultLocation;
    ProcessEvent(func, &params);
    KeyName = params.KeyName;
    ResultLocation = params.ResultLocation;
    return (bool)params.ReturnValue;
}
void UBlackboardComponent::SetValueAsEnum(FName& KeyName, uint8_t EnumValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BlackboardComponent.SetValueAsEnum"));
    struct Params_SetValueAsEnum {
        FName KeyName; // 0x0
        uint8_t EnumValue; // 0x8
    }; // Size: 0x9
    Params_SetValueAsEnum params{};
    params.KeyName = (FName)KeyName;
    params.EnumValue = (uint8_t)EnumValue;
    ProcessEvent(func, &params);
    KeyName = params.KeyName;
}
void UBlackboardComponent::ClearValue(FName& KeyName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BlackboardComponent.ClearValue"));
    struct Params_ClearValue {
        FName KeyName; // 0x0
    }; // Size: 0x8
    Params_ClearValue params{};
    params.KeyName = (FName)KeyName;
    ProcessEvent(func, &params);
    KeyName = params.KeyName;
}
void UBlackboardComponent::SetValueAsBool(FName& KeyName, bool BoolValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BlackboardComponent.SetValueAsBool"));
    struct Params_SetValueAsBool {
        FName KeyName; // 0x0
        bool BoolValue; // 0x8
    }; // Size: 0x9
    Params_SetValueAsBool params{};
    params.KeyName = (FName)KeyName;
    params.BoolValue = (bool)BoolValue;
    ProcessEvent(func, &params);
    KeyName = params.KeyName;
}
float UBlackboardComponent::GetValueAsFloat(FName& KeyName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BlackboardComponent.GetValueAsFloat"));
    struct Params_GetValueAsFloat {
        FName KeyName; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetValueAsFloat params{};
    params.KeyName = (FName)KeyName;
    ProcessEvent(func, &params);
    KeyName = params.KeyName;
    return (float)params.ReturnValue;
}
bool UBlackboardComponent::IsVectorValueSet(FName& KeyName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BlackboardComponent.IsVectorValueSet"));
    struct Params_IsVectorValueSet {
        FName KeyName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsVectorValueSet params{};
    params.KeyName = (FName)KeyName;
    ProcessEvent(func, &params);
    KeyName = params.KeyName;
    return (bool)params.ReturnValue;
}
FVector UBlackboardComponent::GetValueAsVector(FName& KeyName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BlackboardComponent.GetValueAsVector"));
    struct Params_GetValueAsVector {
        FName KeyName; // 0x0
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetValueAsVector params{};
    params.KeyName = (FName)KeyName;
    ProcessEvent(func, &params);
    KeyName = params.KeyName;
    return (FVector)params.ReturnValue;
}
FString UBlackboardComponent::GetValueAsString(FName& KeyName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BlackboardComponent.GetValueAsString"));
    struct Params_GetValueAsString {
        FName KeyName; // 0x0
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetValueAsString params{};
    params.KeyName = (FName)KeyName;
    ProcessEvent(func, &params);
    KeyName = params.KeyName;
    return (FString)params.ReturnValue;
}
FRotator UBlackboardComponent::GetValueAsRotator(FName& KeyName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BlackboardComponent.GetValueAsRotator"));
    struct Params_GetValueAsRotator {
        FName KeyName; // 0x0
        FRotator ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetValueAsRotator params{};
    params.KeyName = (FName)KeyName;
    ProcessEvent(func, &params);
    KeyName = params.KeyName;
    return (FRotator)params.ReturnValue;
}
UObject* UBlackboardComponent::GetValueAsObject(FName& KeyName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BlackboardComponent.GetValueAsObject"));
    struct Params_GetValueAsObject {
        FName KeyName; // 0x0
        UObject* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetValueAsObject params{};
    params.KeyName = (FName)KeyName;
    ProcessEvent(func, &params);
    KeyName = params.KeyName;
    return (UObject*)params.ReturnValue;
}
FName UBlackboardComponent::GetValueAsName(FName& KeyName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BlackboardComponent.GetValueAsName"));
    struct Params_GetValueAsName {
        FName KeyName; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetValueAsName params{};
    params.KeyName = (FName)KeyName;
    ProcessEvent(func, &params);
    KeyName = params.KeyName;
    return (FName)params.ReturnValue;
}
int32_t UBlackboardComponent::GetValueAsInt(FName& KeyName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BlackboardComponent.GetValueAsInt"));
    struct Params_GetValueAsInt {
        FName KeyName; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetValueAsInt params{};
    params.KeyName = (FName)KeyName;
    ProcessEvent(func, &params);
    KeyName = params.KeyName;
    return (int32_t)params.ReturnValue;
}
uint8_t UBlackboardComponent::GetValueAsEnum(FName& KeyName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BlackboardComponent.GetValueAsEnum"));
    struct Params_GetValueAsEnum {
        FName KeyName; // 0x0
        uint8_t ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetValueAsEnum params{};
    params.KeyName = (FName)KeyName;
    ProcessEvent(func, &params);
    KeyName = params.KeyName;
    return (uint8_t)params.ReturnValue;
}
UClass* UBlackboardComponent::GetValueAsClass(FName& KeyName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BlackboardComponent.GetValueAsClass"));
    struct Params_GetValueAsClass {
        FName KeyName; // 0x0
        UClass* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetValueAsClass params{};
    params.KeyName = (FName)KeyName;
    ProcessEvent(func, &params);
    KeyName = params.KeyName;
    return (UClass*)params.ReturnValue;
}
bool UBlackboardComponent::GetValueAsBool(FName& KeyName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BlackboardComponent.GetValueAsBool"));
    struct Params_GetValueAsBool {
        FName KeyName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetValueAsBool params{};
    params.KeyName = (FName)KeyName;
    ProcessEvent(func, &params);
    KeyName = params.KeyName;
    return (bool)params.ReturnValue;
}
bool UBlackboardComponent::GetRotationFromEntry(FName& KeyName, FRotator& ResultRotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BlackboardComponent.GetRotationFromEntry"));
    struct Params_GetRotationFromEntry {
        FName KeyName; // 0x0
        FRotator ResultRotation; // 0x8
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_GetRotationFromEntry params{};
    params.KeyName = (FName)KeyName;
    params.ResultRotation = (FRotator)ResultRotation;
    ProcessEvent(func, &params);
    KeyName = params.KeyName;
    ResultRotation = params.ResultRotation;
    return (bool)params.ReturnValue;
}
