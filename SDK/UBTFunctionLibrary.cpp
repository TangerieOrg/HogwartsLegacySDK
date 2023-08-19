#include "AActor.hpp"
#include "FBlackboardKeySelector.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UBTFunctionLibrary.hpp"
#include "UBTNode.hpp"
#include "UBehaviorTreeComponent.hpp"
#include "UBlackboardComponent.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UBTFunctionLibrary* UBTFunctionLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BTFunctionLibrary");
    return (UBTFunctionLibrary*)res;
}
void UBTFunctionLibrary::SetBlackboardValueAsString(UBTNode* NodeOwner, FBlackboardKeySelector& Key, FString Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsString"));
    struct Params_SetBlackboardValueAsString {
        UBTNode* NodeOwner; // 0x0
        FBlackboardKeySelector Key; // 0x8
        FString Value; // 0x30
    }; // Size: 0x40
    Params_SetBlackboardValueAsString params{};
    params.NodeOwner = (UBTNode*)NodeOwner;
    params.Key = (FBlackboardKeySelector)Key;
    params.Value = (FString)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Key = params.Key;
}
void UBTFunctionLibrary::SetBlackboardValueAsVector(UBTNode* NodeOwner, FBlackboardKeySelector& Key, FVector Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsVector"));
    struct Params_SetBlackboardValueAsVector {
        UBTNode* NodeOwner; // 0x0
        FBlackboardKeySelector Key; // 0x8
        FVector Value; // 0x30
    }; // Size: 0x3c
    Params_SetBlackboardValueAsVector params{};
    params.NodeOwner = (UBTNode*)NodeOwner;
    params.Key = (FBlackboardKeySelector)Key;
    params.Value = (FVector)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Key = params.Key;
}
void UBTFunctionLibrary::StartUsingExternalEvent(UBTNode* NodeOwner, AActor* OwningActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTFunctionLibrary.StartUsingExternalEvent"));
    struct Params_StartUsingExternalEvent {
        UBTNode* NodeOwner; // 0x0
        AActor* OwningActor; // 0x8
    }; // Size: 0x10
    Params_StartUsingExternalEvent params{};
    params.NodeOwner = (UBTNode*)NodeOwner;
    params.OwningActor = (AActor*)OwningActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FName UBTFunctionLibrary::GetBlackboardValueAsName(UBTNode* NodeOwner, FBlackboardKeySelector& Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsName"));
    struct Params_GetBlackboardValueAsName {
        UBTNode* NodeOwner; // 0x0
        FBlackboardKeySelector Key; // 0x8
        FName ReturnValue; // 0x30
    }; // Size: 0x38
    Params_GetBlackboardValueAsName params{};
    params.NodeOwner = (UBTNode*)NodeOwner;
    params.Key = (FBlackboardKeySelector)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Key = params.Key;
    return (FName)params.ReturnValue;
}
void UBTFunctionLibrary::StopUsingExternalEvent(UBTNode* NodeOwner) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTFunctionLibrary.StopUsingExternalEvent"));
    struct Params_StopUsingExternalEvent {
        UBTNode* NodeOwner; // 0x0
    }; // Size: 0x8
    Params_StopUsingExternalEvent params{};
    params.NodeOwner = (UBTNode*)NodeOwner;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FVector UBTFunctionLibrary::GetBlackboardValueAsVector(UBTNode* NodeOwner, FBlackboardKeySelector& Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsVector"));
    struct Params_GetBlackboardValueAsVector {
        UBTNode* NodeOwner; // 0x0
        FBlackboardKeySelector Key; // 0x8
        FVector ReturnValue; // 0x30
    }; // Size: 0x3c
    Params_GetBlackboardValueAsVector params{};
    params.NodeOwner = (UBTNode*)NodeOwner;
    params.Key = (FBlackboardKeySelector)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Key = params.Key;
    return (FVector)params.ReturnValue;
}
void UBTFunctionLibrary::SetBlackboardValueAsRotator(UBTNode* NodeOwner, FBlackboardKeySelector& Key, FRotator Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator"));
    struct Params_SetBlackboardValueAsRotator {
        UBTNode* NodeOwner; // 0x0
        FBlackboardKeySelector Key; // 0x8
        FRotator Value; // 0x30
    }; // Size: 0x3c
    Params_SetBlackboardValueAsRotator params{};
    params.NodeOwner = (UBTNode*)NodeOwner;
    params.Key = (FBlackboardKeySelector)Key;
    params.Value = (FRotator)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Key = params.Key;
}
void UBTFunctionLibrary::SetBlackboardValueAsObject(UBTNode* NodeOwner, FBlackboardKeySelector& Key, UObject* Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsObject"));
    struct Params_SetBlackboardValueAsObject {
        UBTNode* NodeOwner; // 0x0
        FBlackboardKeySelector Key; // 0x8
        UObject* Value; // 0x30
    }; // Size: 0x38
    Params_SetBlackboardValueAsObject params{};
    params.NodeOwner = (UBTNode*)NodeOwner;
    params.Key = (FBlackboardKeySelector)Key;
    params.Value = (UObject*)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Key = params.Key;
}
void UBTFunctionLibrary::SetBlackboardValueAsName(UBTNode* NodeOwner, FBlackboardKeySelector& Key, FName Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsName"));
    struct Params_SetBlackboardValueAsName {
        UBTNode* NodeOwner; // 0x0
        FBlackboardKeySelector Key; // 0x8
        FName Value; // 0x30
    }; // Size: 0x38
    Params_SetBlackboardValueAsName params{};
    params.NodeOwner = (UBTNode*)NodeOwner;
    params.Key = (FBlackboardKeySelector)Key;
    params.Value = (FName)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Key = params.Key;
}
void UBTFunctionLibrary::SetBlackboardValueAsInt(UBTNode* NodeOwner, FBlackboardKeySelector& Key, int32_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsInt"));
    struct Params_SetBlackboardValueAsInt {
        UBTNode* NodeOwner; // 0x0
        FBlackboardKeySelector Key; // 0x8
        int32_t Value; // 0x30
    }; // Size: 0x34
    Params_SetBlackboardValueAsInt params{};
    params.NodeOwner = (UBTNode*)NodeOwner;
    params.Key = (FBlackboardKeySelector)Key;
    params.Value = (int32_t)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Key = params.Key;
}
void UBTFunctionLibrary::SetBlackboardValueAsFloat(UBTNode* NodeOwner, FBlackboardKeySelector& Key, float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat"));
    struct Params_SetBlackboardValueAsFloat {
        UBTNode* NodeOwner; // 0x0
        FBlackboardKeySelector Key; // 0x8
        float Value; // 0x30
    }; // Size: 0x34
    Params_SetBlackboardValueAsFloat params{};
    params.NodeOwner = (UBTNode*)NodeOwner;
    params.Key = (FBlackboardKeySelector)Key;
    params.Value = (float)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Key = params.Key;
}
void UBTFunctionLibrary::SetBlackboardValueAsEnum(UBTNode* NodeOwner, FBlackboardKeySelector& Key, uint8_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum"));
    struct Params_SetBlackboardValueAsEnum {
        UBTNode* NodeOwner; // 0x0
        FBlackboardKeySelector Key; // 0x8
        uint8_t Value; // 0x30
    }; // Size: 0x31
    Params_SetBlackboardValueAsEnum params{};
    params.NodeOwner = (UBTNode*)NodeOwner;
    params.Key = (FBlackboardKeySelector)Key;
    params.Value = (uint8_t)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Key = params.Key;
}
void UBTFunctionLibrary::SetBlackboardValueAsClass(UBTNode* NodeOwner, FBlackboardKeySelector& Key, UClass* Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsClass"));
    struct Params_SetBlackboardValueAsClass {
        UBTNode* NodeOwner; // 0x0
        FBlackboardKeySelector Key; // 0x8
        UClass* Value; // 0x30
    }; // Size: 0x38
    Params_SetBlackboardValueAsClass params{};
    params.NodeOwner = (UBTNode*)NodeOwner;
    params.Key = (FBlackboardKeySelector)Key;
    params.Value = (UClass*)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Key = params.Key;
}
bool UBTFunctionLibrary::GetBlackboardValueAsBool(UBTNode* NodeOwner, FBlackboardKeySelector& Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsBool"));
    struct Params_GetBlackboardValueAsBool {
        UBTNode* NodeOwner; // 0x0
        FBlackboardKeySelector Key; // 0x8
        bool ReturnValue; // 0x30
    }; // Size: 0x31
    Params_GetBlackboardValueAsBool params{};
    params.NodeOwner = (UBTNode*)NodeOwner;
    params.Key = (FBlackboardKeySelector)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Key = params.Key;
    return (bool)params.ReturnValue;
}
void UBTFunctionLibrary::SetBlackboardValueAsBool(UBTNode* NodeOwner, FBlackboardKeySelector& Key, bool Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsBool"));
    struct Params_SetBlackboardValueAsBool {
        UBTNode* NodeOwner; // 0x0
        FBlackboardKeySelector Key; // 0x8
        bool Value; // 0x30
    }; // Size: 0x31
    Params_SetBlackboardValueAsBool params{};
    params.NodeOwner = (UBTNode*)NodeOwner;
    params.Key = (FBlackboardKeySelector)Key;
    params.Value = (bool)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Key = params.Key;
}
UBlackboardComponent* UBTFunctionLibrary::GetOwnersBlackboard(UBTNode* NodeOwner) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTFunctionLibrary.GetOwnersBlackboard"));
    struct Params_GetOwnersBlackboard {
        UBTNode* NodeOwner; // 0x0
        UBlackboardComponent* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetOwnersBlackboard params{};
    params.NodeOwner = (UBTNode*)NodeOwner;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UBlackboardComponent*)params.ReturnValue;
}
void UBTFunctionLibrary::ClearBlackboardValueAsVector(UBTNode* NodeOwner, FBlackboardKeySelector& Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector"));
    struct Params_ClearBlackboardValueAsVector {
        UBTNode* NodeOwner; // 0x0
        FBlackboardKeySelector Key; // 0x8
    }; // Size: 0x30
    Params_ClearBlackboardValueAsVector params{};
    params.NodeOwner = (UBTNode*)NodeOwner;
    params.Key = (FBlackboardKeySelector)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Key = params.Key;
}
UBehaviorTreeComponent* UBTFunctionLibrary::GetOwnerComponent(UBTNode* NodeOwner) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTFunctionLibrary.GetOwnerComponent"));
    struct Params_GetOwnerComponent {
        UBTNode* NodeOwner; // 0x0
        UBehaviorTreeComponent* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetOwnerComponent params{};
    params.NodeOwner = (UBTNode*)NodeOwner;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UBehaviorTreeComponent*)params.ReturnValue;
}
FString UBTFunctionLibrary::GetBlackboardValueAsString(UBTNode* NodeOwner, FBlackboardKeySelector& Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsString"));
    struct Params_GetBlackboardValueAsString {
        UBTNode* NodeOwner; // 0x0
        FBlackboardKeySelector Key; // 0x8
        FString ReturnValue; // 0x30
    }; // Size: 0x40
    Params_GetBlackboardValueAsString params{};
    params.NodeOwner = (UBTNode*)NodeOwner;
    params.Key = (FBlackboardKeySelector)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Key = params.Key;
    return (FString)params.ReturnValue;
}
FRotator UBTFunctionLibrary::GetBlackboardValueAsRotator(UBTNode* NodeOwner, FBlackboardKeySelector& Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator"));
    struct Params_GetBlackboardValueAsRotator {
        UBTNode* NodeOwner; // 0x0
        FBlackboardKeySelector Key; // 0x8
        FRotator ReturnValue; // 0x30
    }; // Size: 0x3c
    Params_GetBlackboardValueAsRotator params{};
    params.NodeOwner = (UBTNode*)NodeOwner;
    params.Key = (FBlackboardKeySelector)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Key = params.Key;
    return (FRotator)params.ReturnValue;
}
UObject* UBTFunctionLibrary::GetBlackboardValueAsObject(UBTNode* NodeOwner, FBlackboardKeySelector& Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsObject"));
    struct Params_GetBlackboardValueAsObject {
        UBTNode* NodeOwner; // 0x0
        FBlackboardKeySelector Key; // 0x8
        UObject* ReturnValue; // 0x30
    }; // Size: 0x38
    Params_GetBlackboardValueAsObject params{};
    params.NodeOwner = (UBTNode*)NodeOwner;
    params.Key = (FBlackboardKeySelector)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Key = params.Key;
    return (UObject*)params.ReturnValue;
}
float UBTFunctionLibrary::GetBlackboardValueAsFloat(UBTNode* NodeOwner, FBlackboardKeySelector& Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat"));
    struct Params_GetBlackboardValueAsFloat {
        UBTNode* NodeOwner; // 0x0
        FBlackboardKeySelector Key; // 0x8
        float ReturnValue; // 0x30
    }; // Size: 0x34
    Params_GetBlackboardValueAsFloat params{};
    params.NodeOwner = (UBTNode*)NodeOwner;
    params.Key = (FBlackboardKeySelector)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Key = params.Key;
    return (float)params.ReturnValue;
}
int32_t UBTFunctionLibrary::GetBlackboardValueAsInt(UBTNode* NodeOwner, FBlackboardKeySelector& Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsInt"));
    struct Params_GetBlackboardValueAsInt {
        UBTNode* NodeOwner; // 0x0
        FBlackboardKeySelector Key; // 0x8
        int32_t ReturnValue; // 0x30
    }; // Size: 0x34
    Params_GetBlackboardValueAsInt params{};
    params.NodeOwner = (UBTNode*)NodeOwner;
    params.Key = (FBlackboardKeySelector)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Key = params.Key;
    return (int32_t)params.ReturnValue;
}
uint8_t UBTFunctionLibrary::GetBlackboardValueAsEnum(UBTNode* NodeOwner, FBlackboardKeySelector& Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum"));
    struct Params_GetBlackboardValueAsEnum {
        UBTNode* NodeOwner; // 0x0
        FBlackboardKeySelector Key; // 0x8
        uint8_t ReturnValue; // 0x30
    }; // Size: 0x31
    Params_GetBlackboardValueAsEnum params{};
    params.NodeOwner = (UBTNode*)NodeOwner;
    params.Key = (FBlackboardKeySelector)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Key = params.Key;
    return (uint8_t)params.ReturnValue;
}
UClass* UBTFunctionLibrary::GetBlackboardValueAsClass(UBTNode* NodeOwner, FBlackboardKeySelector& Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsClass"));
    struct Params_GetBlackboardValueAsClass {
        UBTNode* NodeOwner; // 0x0
        FBlackboardKeySelector Key; // 0x8
        UClass* ReturnValue; // 0x30
    }; // Size: 0x38
    Params_GetBlackboardValueAsClass params{};
    params.NodeOwner = (UBTNode*)NodeOwner;
    params.Key = (FBlackboardKeySelector)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Key = params.Key;
    return (UClass*)params.ReturnValue;
}
AActor* UBTFunctionLibrary::GetBlackboardValueAsActor(UBTNode* NodeOwner, FBlackboardKeySelector& Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsActor"));
    struct Params_GetBlackboardValueAsActor {
        UBTNode* NodeOwner; // 0x0
        FBlackboardKeySelector Key; // 0x8
        AActor* ReturnValue; // 0x30
    }; // Size: 0x38
    Params_GetBlackboardValueAsActor params{};
    params.NodeOwner = (UBTNode*)NodeOwner;
    params.Key = (FBlackboardKeySelector)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Key = params.Key;
    return (AActor*)params.ReturnValue;
}
void UBTFunctionLibrary::ClearBlackboardValue(UBTNode* NodeOwner, FBlackboardKeySelector& Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTFunctionLibrary.ClearBlackboardValue"));
    struct Params_ClearBlackboardValue {
        UBTNode* NodeOwner; // 0x0
        FBlackboardKeySelector Key; // 0x8
    }; // Size: 0x30
    Params_ClearBlackboardValue params{};
    params.NodeOwner = (UBTNode*)NodeOwner;
    params.Key = (FBlackboardKeySelector)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Key = params.Key;
}
