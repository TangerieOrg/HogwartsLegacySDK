#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UBTNode;
class AActor;
struct FBlackboardKeySelector;
class UClass;
class UObject;
class UBlackboardComponent;
class UBehaviorTreeComponent;
#pragma pack(push, 1)
class UBTFunctionLibrary : public UBlueprintFunctionLibrary {
public:
    static UBTFunctionLibrary* StaticClass();
    static void StopUsingExternalEvent(UBTNode* NodeOwner);
    static void StartUsingExternalEvent(UBTNode* NodeOwner, AActor* OwningActor);
    static void SetBlackboardValueAsVector(UBTNode* NodeOwner, FBlackboardKeySelector& Key, FVector Value);
    static void SetBlackboardValueAsString(UBTNode* NodeOwner, FBlackboardKeySelector& Key, FString Value);
    static void SetBlackboardValueAsRotator(UBTNode* NodeOwner, FBlackboardKeySelector& Key, FRotator Value);
    static void SetBlackboardValueAsObject(UBTNode* NodeOwner, FBlackboardKeySelector& Key, UObject* Value);
    static void SetBlackboardValueAsName(UBTNode* NodeOwner, FBlackboardKeySelector& Key, FName Value);
    static void SetBlackboardValueAsInt(UBTNode* NodeOwner, FBlackboardKeySelector& Key, int32_t Value);
    static void SetBlackboardValueAsFloat(UBTNode* NodeOwner, FBlackboardKeySelector& Key, float Value);
    static void SetBlackboardValueAsEnum(UBTNode* NodeOwner, FBlackboardKeySelector& Key, uint8_t Value);
    static void SetBlackboardValueAsClass(UBTNode* NodeOwner, FBlackboardKeySelector& Key, UClass* Value);
    static void SetBlackboardValueAsBool(UBTNode* NodeOwner, FBlackboardKeySelector& Key, bool Value);
    static UBlackboardComponent* GetOwnersBlackboard(UBTNode* NodeOwner);
    static UBehaviorTreeComponent* GetOwnerComponent(UBTNode* NodeOwner);
    static FVector GetBlackboardValueAsVector(UBTNode* NodeOwner, FBlackboardKeySelector& Key);
    static FString GetBlackboardValueAsString(UBTNode* NodeOwner, FBlackboardKeySelector& Key);
    static FRotator GetBlackboardValueAsRotator(UBTNode* NodeOwner, FBlackboardKeySelector& Key);
    static UObject* GetBlackboardValueAsObject(UBTNode* NodeOwner, FBlackboardKeySelector& Key);
    static FName GetBlackboardValueAsName(UBTNode* NodeOwner, FBlackboardKeySelector& Key);
    static int32_t GetBlackboardValueAsInt(UBTNode* NodeOwner, FBlackboardKeySelector& Key);
    static float GetBlackboardValueAsFloat(UBTNode* NodeOwner, FBlackboardKeySelector& Key);
    static uint8_t GetBlackboardValueAsEnum(UBTNode* NodeOwner, FBlackboardKeySelector& Key);
    static UClass* GetBlackboardValueAsClass(UBTNode* NodeOwner, FBlackboardKeySelector& Key);
    static bool GetBlackboardValueAsBool(UBTNode* NodeOwner, FBlackboardKeySelector& Key);
    static AActor* GetBlackboardValueAsActor(UBTNode* NodeOwner, FBlackboardKeySelector& Key);
    static void ClearBlackboardValueAsVector(UBTNode* NodeOwner, FBlackboardKeySelector& Key);
    static void ClearBlackboardValue(UBTNode* NodeOwner, FBlackboardKeySelector& Key);
}; // Size: 0x28
#pragma pack(pop)
