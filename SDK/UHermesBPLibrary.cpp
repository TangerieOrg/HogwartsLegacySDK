#include "AActor.hpp"
#include "FGuid.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FHitResult.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UHermesBPLibrary.hpp"
#include "UObject.hpp"
void UHermesBPLibrary::HermesEventDelegate__DelegateSignature(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Hermes.HermesBPLibrary.HermesEventDelegate__DelegateSignature"));
    struct Params_HermesEventDelegate__DelegateSignature {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_HermesEventDelegate__DelegateSignature params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
UHermesBPLibrary* UHermesBPLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Hermes.HermesBPLibrary");
    return (UHermesBPLibrary*)res;
}
void UHermesBPLibrary::HermesFStringDelegate__DelegateSignature(UObject* Caller, FString String) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Hermes.HermesBPLibrary.HermesFStringDelegate__DelegateSignature"));
    struct Params_HermesFStringDelegate__DelegateSignature {
        UObject* Caller; // 0x0
        FString String; // 0x8
    }; // Size: 0x18
    Params_HermesFStringDelegate__DelegateSignature params{};
    params.Caller = (UObject*)Caller;
    params.String = (FString)String;
    ProcessEvent(func, &params);
}
void UHermesBPLibrary::HermesUnbind(FHermesBPDelegateHandle& Handle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Hermes.HermesBPLibrary.HermesUnbind"));
    struct Params_HermesUnbind {
        FHermesBPDelegateHandle Handle; // 0x0
    }; // Size: 0x10
    Params_HermesUnbind params{};
    params.Handle = (FHermesBPDelegateHandle)Handle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Handle = params.Handle;
}
void UHermesBPLibrary::HermesExecuteOwnedInt(FString Name, UObject* Owner, UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Hermes.HermesBPLibrary.HermesExecuteOwnedInt"));
    struct Params_HermesExecuteOwnedInt {
        FString Name; // 0x0
        UObject* Owner; // 0x10
        UObject* Caller; // 0x18
        int32_t int; // 0x20
    }; // Size: 0x24
    Params_HermesExecuteOwnedInt params{};
    params.Name = (FString)Name;
    params.Owner = (UObject*)Owner;
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UHermesBPLibrary::HermesFTextDelegate__DelegateSignature(UObject* Caller) {}
void UHermesBPLibrary::HermesBindEvent() {}
void UHermesBPLibrary::HermesVectorDelegate__DelegateSignature(UObject* Caller, FVector& Vector) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Hermes.HermesBPLibrary.HermesVectorDelegate__DelegateSignature"));
    struct Params_HermesVectorDelegate__DelegateSignature {
        UObject* Caller; // 0x0
        FVector Vector; // 0x8
    }; // Size: 0x14
    Params_HermesVectorDelegate__DelegateSignature params{};
    params.Caller = (UObject*)Caller;
    params.Vector = (FVector)Vector;
    ProcessEvent(func, &params);
    Vector = params.Vector;
}
void UHermesBPLibrary::HermesBindFName() {}
void UHermesBPLibrary::HermesExecuteAllFloat(FString Name, UObject* Caller, float float) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Hermes.HermesBPLibrary.HermesExecuteAllFloat"));
    struct Params_HermesExecuteAllFloat {
        FString Name; // 0x0
        UObject* Caller; // 0x10
        float float; // 0x18
    }; // Size: 0x1c
    Params_HermesExecuteAllFloat params{};
    params.Name = (FString)Name;
    params.Caller = (UObject*)Caller;
    params.float = (float)float;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UHermesBPLibrary::HermesGuidDelegate__DelegateSignature(UObject* Caller, FGuid& Guid) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Hermes.HermesBPLibrary.HermesGuidDelegate__DelegateSignature"));
    struct Params_HermesGuidDelegate__DelegateSignature {
        UObject* Caller; // 0x0
        FGuid Guid; // 0x8
    }; // Size: 0x18
    Params_HermesGuidDelegate__DelegateSignature params{};
    params.Caller = (UObject*)Caller;
    params.Guid = (FGuid)Guid;
    ProcessEvent(func, &params);
    Guid = params.Guid;
}
void UHermesBPLibrary::HermesExecuteOwnedEvent(FString Name, UObject* Owner, UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Hermes.HermesBPLibrary.HermesExecuteOwnedEvent"));
    struct Params_HermesExecuteOwnedEvent {
        FString Name; // 0x0
        UObject* Owner; // 0x10
        UObject* Caller; // 0x18
    }; // Size: 0x20
    Params_HermesExecuteOwnedEvent params{};
    params.Name = (FString)Name;
    params.Owner = (UObject*)Owner;
    params.Caller = (UObject*)Caller;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UHermesBPLibrary::HermesIntDelegate__DelegateSignature(UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Hermes.HermesBPLibrary.HermesIntDelegate__DelegateSignature"));
    struct Params_HermesIntDelegate__DelegateSignature {
        UObject* Caller; // 0x0
        int32_t int; // 0x8
    }; // Size: 0xc
    Params_HermesIntDelegate__DelegateSignature params{};
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ProcessEvent(func, &params);
}
void UHermesBPLibrary::HermesHitResultDelegate__DelegateSignature(UObject* Caller, FHitResult& HitResult) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Hermes.HermesBPLibrary.HermesHitResultDelegate__DelegateSignature"));
    struct Params_HermesHitResultDelegate__DelegateSignature {
        UObject* Caller; // 0x0
        FHitResult HitResult; // 0x8
    }; // Size: 0x90
    Params_HermesHitResultDelegate__DelegateSignature params{};
    params.Caller = (UObject*)Caller;
    params.HitResult = (FHitResult)HitResult;
    ProcessEvent(func, &params);
    HitResult = params.HitResult;
}
void UHermesBPLibrary::HermesBindVector() {}
void UHermesBPLibrary::HermesFNameDelegate__DelegateSignature(UObject* Caller, FName& String) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Hermes.HermesBPLibrary.HermesFNameDelegate__DelegateSignature"));
    struct Params_HermesFNameDelegate__DelegateSignature {
        UObject* Caller; // 0x0
        FName String; // 0x8
    }; // Size: 0x10
    Params_HermesFNameDelegate__DelegateSignature params{};
    params.Caller = (UObject*)Caller;
    params.String = (FName)String;
    ProcessEvent(func, &params);
    String = params.String;
}
void UHermesBPLibrary::HermesFloatDelegate__DelegateSignature(UObject* Caller, float float) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Hermes.HermesBPLibrary.HermesFloatDelegate__DelegateSignature"));
    struct Params_HermesFloatDelegate__DelegateSignature {
        UObject* Caller; // 0x0
        float float; // 0x8
    }; // Size: 0xc
    Params_HermesFloatDelegate__DelegateSignature params{};
    params.Caller = (UObject*)Caller;
    params.float = (float)float;
    ProcessEvent(func, &params);
}
void UHermesBPLibrary::HermesExecuteOwnedVector(FString Name, UObject* Owner, UObject* Caller, FVector& Vector) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Hermes.HermesBPLibrary.HermesExecuteOwnedVector"));
    struct Params_HermesExecuteOwnedVector {
        FString Name; // 0x0
        UObject* Owner; // 0x10
        UObject* Caller; // 0x18
        FVector Vector; // 0x20
    }; // Size: 0x2c
    Params_HermesExecuteOwnedVector params{};
    params.Name = (FString)Name;
    params.Owner = (UObject*)Owner;
    params.Caller = (UObject*)Caller;
    params.Vector = (FVector)Vector;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Vector = params.Vector;
}
void UHermesBPLibrary::HermesExecuteOwnedFText(FString Name, UObject* Owner, UObject* Caller) {}
void UHermesBPLibrary::HermesExecuteOwnedHitResult(FString Name, UObject* Owner, UObject* Caller, FHitResult& HitResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Hermes.HermesBPLibrary.HermesExecuteOwnedHitResult"));
    struct Params_HermesExecuteOwnedHitResult {
        FString Name; // 0x0
        UObject* Owner; // 0x10
        UObject* Caller; // 0x18
        FHitResult HitResult; // 0x20
    }; // Size: 0xa8
    Params_HermesExecuteOwnedHitResult params{};
    params.Name = (FString)Name;
    params.Owner = (UObject*)Owner;
    params.Caller = (UObject*)Caller;
    params.HitResult = (FHitResult)HitResult;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    HitResult = params.HitResult;
}
void UHermesBPLibrary::HermesBindHitResult() {}
void UHermesBPLibrary::HermesExecuteOwnedFName(FString Name, UObject* Owner, UObject* Caller, FName& String) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Hermes.HermesBPLibrary.HermesExecuteOwnedFName"));
    struct Params_HermesExecuteOwnedFName {
        FString Name; // 0x0
        UObject* Owner; // 0x10
        UObject* Caller; // 0x18
        FName String; // 0x20
    }; // Size: 0x28
    Params_HermesExecuteOwnedFName params{};
    params.Name = (FString)Name;
    params.Owner = (UObject*)Owner;
    params.Caller = (UObject*)Caller;
    params.String = (FName)String;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    String = params.String;
}
void UHermesBPLibrary::HermesExecuteOwnedGuid(FString Name, UObject* Owner, UObject* Caller, FGuid& Guid) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Hermes.HermesBPLibrary.HermesExecuteOwnedGuid"));
    struct Params_HermesExecuteOwnedGuid {
        FString Name; // 0x0
        UObject* Owner; // 0x10
        UObject* Caller; // 0x18
        FGuid Guid; // 0x20
    }; // Size: 0x30
    Params_HermesExecuteOwnedGuid params{};
    params.Name = (FString)Name;
    params.Owner = (UObject*)Owner;
    params.Caller = (UObject*)Caller;
    params.Guid = (FGuid)Guid;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Guid = params.Guid;
}
void UHermesBPLibrary::HermesExecuteOwnedDoubleInt(FString Name, UObject* Owner, UObject* Caller, int32_t int, int32_t Int2) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Hermes.HermesBPLibrary.HermesExecuteOwnedDoubleInt"));
    struct Params_HermesExecuteOwnedDoubleInt {
        FString Name; // 0x0
        UObject* Owner; // 0x10
        UObject* Caller; // 0x18
        int32_t int; // 0x20
        int32_t Int2; // 0x24
    }; // Size: 0x28
    Params_HermesExecuteOwnedDoubleInt params{};
    params.Name = (FString)Name;
    params.Owner = (UObject*)Owner;
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    params.Int2 = (int32_t)Int2;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UHermesBPLibrary::HermesExecuteOwnedFString(FString Name, UObject* Owner, UObject* Caller, FString String) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Hermes.HermesBPLibrary.HermesExecuteOwnedFString"));
    struct Params_HermesExecuteOwnedFString {
        FString Name; // 0x0
        UObject* Owner; // 0x10
        UObject* Caller; // 0x18
        FString String; // 0x20
    }; // Size: 0x30
    Params_HermesExecuteOwnedFString params{};
    params.Name = (FString)Name;
    params.Owner = (UObject*)Owner;
    params.Caller = (UObject*)Caller;
    params.String = (FString)String;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UHermesBPLibrary::HermesExecuteOwnedFloat(FString Name, UObject* Owner, UObject* Caller, float float) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Hermes.HermesBPLibrary.HermesExecuteOwnedFloat"));
    struct Params_HermesExecuteOwnedFloat {
        FString Name; // 0x0
        UObject* Owner; // 0x10
        UObject* Caller; // 0x18
        float float; // 0x20
    }; // Size: 0x24
    Params_HermesExecuteOwnedFloat params{};
    params.Name = (FString)Name;
    params.Owner = (UObject*)Owner;
    params.Caller = (UObject*)Caller;
    params.float = (float)float;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UHermesBPLibrary::HermesExecuteOwnedDoubleFString(FString Name, UObject* Owner, UObject* Caller, FString String1, FString String2) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Hermes.HermesBPLibrary.HermesExecuteOwnedDoubleFString"));
    struct Params_HermesExecuteOwnedDoubleFString {
        FString Name; // 0x0
        UObject* Owner; // 0x10
        UObject* Caller; // 0x18
        FString String1; // 0x20
        FString String2; // 0x30
    }; // Size: 0x40
    Params_HermesExecuteOwnedDoubleFString params{};
    params.Name = (FString)Name;
    params.Owner = (UObject*)Owner;
    params.Caller = (UObject*)Caller;
    params.String1 = (FString)String1;
    params.String2 = (FString)String2;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UHermesBPLibrary::HermesExecuteOwnedAActor(FString Name, UObject* Owner, UObject* Caller, AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Hermes.HermesBPLibrary.HermesExecuteOwnedAActor"));
    struct Params_HermesExecuteOwnedAActor {
        FString Name; // 0x0
        UObject* Owner; // 0x10
        UObject* Caller; // 0x18
        AActor* Actor; // 0x20
    }; // Size: 0x28
    Params_HermesExecuteOwnedAActor params{};
    params.Name = (FString)Name;
    params.Owner = (UObject*)Owner;
    params.Caller = (UObject*)Caller;
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UHermesBPLibrary::HermesExecuteAllVector(FString Name, UObject* Caller, FVector& Vector) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Hermes.HermesBPLibrary.HermesExecuteAllVector"));
    struct Params_HermesExecuteAllVector {
        FString Name; // 0x0
        UObject* Caller; // 0x10
        FVector Vector; // 0x18
    }; // Size: 0x24
    Params_HermesExecuteAllVector params{};
    params.Name = (FString)Name;
    params.Caller = (UObject*)Caller;
    params.Vector = (FVector)Vector;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Vector = params.Vector;
}
void UHermesBPLibrary::HermesBindFloat() {}
void UHermesBPLibrary::HermesExecuteAllInt(FString Name, UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Hermes.HermesBPLibrary.HermesExecuteAllInt"));
    struct Params_HermesExecuteAllInt {
        FString Name; // 0x0
        UObject* Caller; // 0x10
        int32_t int; // 0x18
    }; // Size: 0x1c
    Params_HermesExecuteAllInt params{};
    params.Name = (FString)Name;
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UHermesBPLibrary::HermesAActorDelegate__DelegateSignature(UObject* Caller, AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Hermes.HermesBPLibrary.HermesAActorDelegate__DelegateSignature"));
    struct Params_HermesAActorDelegate__DelegateSignature {
        UObject* Caller; // 0x0
        AActor* Actor; // 0x8
    }; // Size: 0x10
    Params_HermesAActorDelegate__DelegateSignature params{};
    params.Caller = (UObject*)Caller;
    params.Actor = (AActor*)Actor;
    ProcessEvent(func, &params);
}
void UHermesBPLibrary::HermesExecuteAllHitResult(FString Name, UObject* Caller, FHitResult& HitResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Hermes.HermesBPLibrary.HermesExecuteAllHitResult"));
    struct Params_HermesExecuteAllHitResult {
        FString Name; // 0x0
        UObject* Caller; // 0x10
        FHitResult HitResult; // 0x18
    }; // Size: 0xa0
    Params_HermesExecuteAllHitResult params{};
    params.Name = (FString)Name;
    params.Caller = (UObject*)Caller;
    params.HitResult = (FHitResult)HitResult;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    HitResult = params.HitResult;
}
void UHermesBPLibrary::HermesExecuteAllGuid(FString Name, UObject* Caller, FGuid& Guid) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Hermes.HermesBPLibrary.HermesExecuteAllGuid"));
    struct Params_HermesExecuteAllGuid {
        FString Name; // 0x0
        UObject* Caller; // 0x10
        FGuid Guid; // 0x18
    }; // Size: 0x28
    Params_HermesExecuteAllGuid params{};
    params.Name = (FString)Name;
    params.Caller = (UObject*)Caller;
    params.Guid = (FGuid)Guid;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Guid = params.Guid;
}
void UHermesBPLibrary::HermesExecuteAllFText(FString Name, UObject* Caller) {}
void UHermesBPLibrary::HermesExecuteAllFString(FString Name, UObject* Caller, FString String) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Hermes.HermesBPLibrary.HermesExecuteAllFString"));
    struct Params_HermesExecuteAllFString {
        FString Name; // 0x0
        UObject* Caller; // 0x10
        FString String; // 0x18
    }; // Size: 0x28
    Params_HermesExecuteAllFString params{};
    params.Name = (FString)Name;
    params.Caller = (UObject*)Caller;
    params.String = (FString)String;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UHermesBPLibrary::HermesExecuteAllFName(FString Name, UObject* Caller, FName& String) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Hermes.HermesBPLibrary.HermesExecuteAllFName"));
    struct Params_HermesExecuteAllFName {
        FString Name; // 0x0
        UObject* Caller; // 0x10
        FName String; // 0x18
    }; // Size: 0x20
    Params_HermesExecuteAllFName params{};
    params.Name = (FString)Name;
    params.Caller = (UObject*)Caller;
    params.String = (FName)String;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    String = params.String;
}
void UHermesBPLibrary::HermesExecuteAllEvent(FString Name, UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Hermes.HermesBPLibrary.HermesExecuteAllEvent"));
    struct Params_HermesExecuteAllEvent {
        FString Name; // 0x0
        UObject* Caller; // 0x10
    }; // Size: 0x18
    Params_HermesExecuteAllEvent params{};
    params.Name = (FString)Name;
    params.Caller = (UObject*)Caller;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UHermesBPLibrary::HermesExecuteAllDoubleInt(FString Name, UObject* Caller, int32_t Int1, int32_t Int2) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Hermes.HermesBPLibrary.HermesExecuteAllDoubleInt"));
    struct Params_HermesExecuteAllDoubleInt {
        FString Name; // 0x0
        UObject* Caller; // 0x10
        int32_t Int1; // 0x18
        int32_t Int2; // 0x1c
    }; // Size: 0x20
    Params_HermesExecuteAllDoubleInt params{};
    params.Name = (FString)Name;
    params.Caller = (UObject*)Caller;
    params.Int1 = (int32_t)Int1;
    params.Int2 = (int32_t)Int2;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UHermesBPLibrary::HermesExecuteAllDoubleFString(FString Name, UObject* Caller, FString String1, FString String2) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Hermes.HermesBPLibrary.HermesExecuteAllDoubleFString"));
    struct Params_HermesExecuteAllDoubleFString {
        FString Name; // 0x0
        UObject* Caller; // 0x10
        FString String1; // 0x18
        FString String2; // 0x28
    }; // Size: 0x38
    Params_HermesExecuteAllDoubleFString params{};
    params.Name = (FString)Name;
    params.Caller = (UObject*)Caller;
    params.String1 = (FString)String1;
    params.String2 = (FString)String2;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UHermesBPLibrary::HermesExecuteAllAActor(FString Name, UObject* Caller, AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Hermes.HermesBPLibrary.HermesExecuteAllAActor"));
    struct Params_HermesExecuteAllAActor {
        FString Name; // 0x0
        UObject* Caller; // 0x10
        AActor* Actor; // 0x18
    }; // Size: 0x20
    Params_HermesExecuteAllAActor params{};
    params.Name = (FString)Name;
    params.Caller = (UObject*)Caller;
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UHermesBPLibrary::HermesDoubleIntDelegate__DelegateSignature(UObject* Caller, int32_t Int1, int32_t Int2) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Hermes.HermesBPLibrary.HermesDoubleIntDelegate__DelegateSignature"));
    struct Params_HermesDoubleIntDelegate__DelegateSignature {
        UObject* Caller; // 0x0
        int32_t Int1; // 0x8
        int32_t Int2; // 0xc
    }; // Size: 0x10
    Params_HermesDoubleIntDelegate__DelegateSignature params{};
    params.Caller = (UObject*)Caller;
    params.Int1 = (int32_t)Int1;
    params.Int2 = (int32_t)Int2;
    ProcessEvent(func, &params);
}
void UHermesBPLibrary::HermesDoubleFStringDelegate__DelegateSignature(UObject* Caller, FString String1, FString String2) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Hermes.HermesBPLibrary.HermesDoubleFStringDelegate__DelegateSignature"));
    struct Params_HermesDoubleFStringDelegate__DelegateSignature {
        UObject* Caller; // 0x0
        FString String1; // 0x8
        FString String2; // 0x18
    }; // Size: 0x28
    Params_HermesDoubleFStringDelegate__DelegateSignature params{};
    params.Caller = (UObject*)Caller;
    params.String1 = (FString)String1;
    params.String2 = (FString)String2;
    ProcessEvent(func, &params);
}
void UHermesBPLibrary::HermesBindInt() {}
void UHermesBPLibrary::HermesBindGuid() {}
void UHermesBPLibrary::HermesBindFText() {}
void UHermesBPLibrary::HermesBindFString() {}
void UHermesBPLibrary::HermesBindDoubleInt() {}
void UHermesBPLibrary::HermesBindDoubleFString() {}
void UHermesBPLibrary::HermesBindAActor() {}
