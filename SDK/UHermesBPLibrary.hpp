#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class UObject;
struct FVector;
struct FHermesBPDelegateHandle;
struct FHitResult;
struct FGuid;
class AActor;
#pragma pack(push, 1)
class UHermesBPLibrary : public UBlueprintFunctionLibrary {
public:
    static UHermesBPLibrary* StaticClass();
    void HermesVectorDelegate__DelegateSignature(UObject* Caller, FVector& Vector);
    static void HermesUnbind(FHermesBPDelegateHandle& Handle);
    void HermesIntDelegate__DelegateSignature(UObject* Caller, int32_t int);
    void HermesHitResultDelegate__DelegateSignature(UObject* Caller, FHitResult& HitResult);
    void HermesGuidDelegate__DelegateSignature(UObject* Caller, FGuid& Guid);
    void HermesFTextDelegate__DelegateSignature(UObject* Caller);
    void HermesFStringDelegate__DelegateSignature(UObject* Caller, FString String);
    void HermesFNameDelegate__DelegateSignature(UObject* Caller, FName& String);
    void HermesFloatDelegate__DelegateSignature(UObject* Caller, float float);
    static void HermesExecuteOwnedVector(FString Name, UObject* Owner, UObject* Caller, FVector& Vector);
    static void HermesExecuteOwnedInt(FString Name, UObject* Owner, UObject* Caller, int32_t int);
    static void HermesExecuteOwnedHitResult(FString Name, UObject* Owner, UObject* Caller, FHitResult& HitResult);
    static void HermesExecuteOwnedGuid(FString Name, UObject* Owner, UObject* Caller, FGuid& Guid);
    static void HermesExecuteOwnedFText(FString Name, UObject* Owner, UObject* Caller);
    static void HermesExecuteOwnedFString(FString Name, UObject* Owner, UObject* Caller, FString String);
    static void HermesExecuteOwnedFName(FString Name, UObject* Owner, UObject* Caller, FName& String);
    static void HermesExecuteOwnedFloat(FString Name, UObject* Owner, UObject* Caller, float float);
    static void HermesExecuteOwnedEvent(FString Name, UObject* Owner, UObject* Caller);
    static void HermesExecuteOwnedDoubleInt(FString Name, UObject* Owner, UObject* Caller, int32_t int, int32_t Int2);
    static void HermesExecuteOwnedDoubleFString(FString Name, UObject* Owner, UObject* Caller, FString String1, FString String2);
    static void HermesExecuteOwnedAActor(FString Name, UObject* Owner, UObject* Caller, AActor* Actor);
    static void HermesExecuteAllVector(FString Name, UObject* Caller, FVector& Vector);
    static void HermesExecuteAllInt(FString Name, UObject* Caller, int32_t int);
    static void HermesExecuteAllHitResult(FString Name, UObject* Caller, FHitResult& HitResult);
    static void HermesExecuteAllGuid(FString Name, UObject* Caller, FGuid& Guid);
    static void HermesExecuteAllFText(FString Name, UObject* Caller);
    static void HermesExecuteAllFString(FString Name, UObject* Caller, FString String);
    static void HermesExecuteAllFName(FString Name, UObject* Caller, FName& String);
    static void HermesExecuteAllFloat(FString Name, UObject* Caller, float float);
    static void HermesExecuteAllEvent(FString Name, UObject* Caller);
    static void HermesExecuteAllDoubleInt(FString Name, UObject* Caller, int32_t Int1, int32_t Int2);
    static void HermesExecuteAllDoubleFString(FString Name, UObject* Caller, FString String1, FString String2);
    static void HermesExecuteAllAActor(FString Name, UObject* Caller, AActor* Actor);
    void HermesEventDelegate__DelegateSignature(UObject* Caller);
    void HermesDoubleIntDelegate__DelegateSignature(UObject* Caller, int32_t Int1, int32_t Int2);
    void HermesDoubleFStringDelegate__DelegateSignature(UObject* Caller, FString String1, FString String2);
    static void HermesBindVector();
    static void HermesBindInt();
    static void HermesBindHitResult();
    static void HermesBindGuid();
    static void HermesBindFText();
    static void HermesBindFString();
    static void HermesBindFName();
    static void HermesBindFloat();
    static void HermesBindEvent();
    static void HermesBindDoubleInt();
    static void HermesBindDoubleFString();
    static void HermesBindAActor();
    void HermesAActorDelegate__DelegateSignature(UObject* Caller, AActor* Actor);
}; // Size: 0x28
#pragma pack(pop)
