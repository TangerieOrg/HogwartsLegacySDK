#include "AActor.hpp"
#include "ACameraActor.hpp"
#include "APlayerController.hpp"
#include "EDrawDebugTrace\Type.hpp"
#include "EMoveComponentAction\Type.hpp"
#include "EObjectTypeQuery.hpp"
#include "EQuitPreference\Type.hpp"
#include "ETraceTypeQuery.hpp"
#include "FCollisionProfileName.hpp"
#include "FColor.hpp"
#include "FDebugFloatHistory.hpp"
#include "FGenericStruct.hpp"
#include "FHitResult.hpp"
#include "FIntPoint.hpp"
#include "FLatentActionInfo.hpp"
#include "FLinearColor.hpp"
#include "FPlane.hpp"
#include "FPrimaryAssetId.hpp"
#include "FPrimaryAssetType.hpp"
#include "FRotator.hpp"
#include "FSoftClassPath.hpp"
#include "FSoftObjectPath.hpp"
#include "FTimerHandle.hpp"
#include "FTransform.hpp"
#include "FUserActivity.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UKismetSystemLibrary.hpp"
#include "UObject.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
#include "UTexture2D.hpp"
#include "UWorld.hpp"
bool UKismetSystemLibrary::SphereTraceSingleForObjects(UObject* WorldContextObject, FVector Start, FVector End, float Radius, TArray<EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, TArray<AActor*>& ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.SphereTraceSingleForObjects"));
    struct Params_SphereTraceSingleForObjects {
        UObject* WorldContextObject; // 0x0
        FVector Start; // 0x8
        FVector End; // 0x14
        float Radius; // 0x20
        char pad_24[0x4];
        TArray<EObjectTypeQuery> ObjectTypes; // 0x28
        bool bTraceComplex; // 0x38
        char pad_39[0x7];
        TArray<AActor*> ActorsToIgnore; // 0x40
        EDrawDebugTrace::Type DrawDebugType; // 0x50
        char pad_51[0x3];
        FHitResult OutHit; // 0x54
        bool bIgnoreSelf; // 0xdc
        char pad_dd[0x3];
        FLinearColor TraceColor; // 0xe0
        FLinearColor TraceHitColor; // 0xf0
        float DrawTime; // 0x100
        bool ReturnValue; // 0x104
    }; // Size: 0x105
    Params_SphereTraceSingleForObjects params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Start = (FVector)Start;
    params.End = (FVector)End;
    params.Radius = (float)Radius;
    params.ObjectTypes = (TArray<EObjectTypeQuery>)ObjectTypes;
    params.bTraceComplex = (bool)bTraceComplex;
    params.ActorsToIgnore = (TArray<AActor*>)ActorsToIgnore;
    params.DrawDebugType = (EDrawDebugTrace::Type)DrawDebugType;
    params.OutHit = (FHitResult)OutHit;
    params.bIgnoreSelf = (bool)bIgnoreSelf;
    params.TraceColor = (FLinearColor)TraceColor;
    params.TraceHitColor = (FLinearColor)TraceHitColor;
    params.DrawTime = (float)DrawTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutHit = params.OutHit;
    ObjectTypes = params.ObjectTypes;
    ActorsToIgnore = params.ActorsToIgnore;
    return (bool)params.ReturnValue;
}
void UKismetSystemLibrary::QuitGame(UObject* WorldContextObject, APlayerController* SpecificPlayer, EQuitPreference::Type QuitPreference, bool bIgnorePlatformRestrictions) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.QuitGame"));
    struct Params_QuitGame {
        UObject* WorldContextObject; // 0x0
        APlayerController* SpecificPlayer; // 0x8
        EQuitPreference::Type QuitPreference; // 0x10
        bool bIgnorePlatformRestrictions; // 0x11
    }; // Size: 0x12
    Params_QuitGame params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.SpecificPlayer = (APlayerController*)SpecificPlayer;
    params.QuitPreference = (EQuitPreference::Type)QuitPreference;
    params.bIgnorePlatformRestrictions = (bool)bIgnorePlatformRestrictions;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UKismetSystemLibrary::BreakSoftObjectPath(FSoftObjectPath InSoftObjectPath, FString& PathString) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.BreakSoftObjectPath"));
    struct Params_BreakSoftObjectPath {
        FSoftObjectPath InSoftObjectPath; // 0x0
        FString PathString; // 0x18
    }; // Size: 0x28
    Params_BreakSoftObjectPath params{};
    params.InSoftObjectPath = (FSoftObjectPath)InSoftObjectPath;
    params.PathString = (FString)PathString;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    PathString = params.PathString;
}
bool UKismetSystemLibrary::K2_IsTimerPausedHandle(UObject* WorldContextObject, FTimerHandle Handle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.K2_IsTimerPausedHandle"));
    struct Params_K2_IsTimerPausedHandle {
        UObject* WorldContextObject; // 0x0
        FTimerHandle Handle; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_K2_IsTimerPausedHandle params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Handle = (FTimerHandle)Handle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UKismetSystemLibrary::StackTrace() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.StackTrace"));
    struct Params_StackTrace {
    }; // Size: 0x0
    Params_StackTrace params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UKismetSystemLibrary::TransactObject(UObject* Object) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.TransactObject"));
    struct Params_TransactObject {
        UObject* Object; // 0x0
    }; // Size: 0x8
    Params_TransactObject params{};
    params.Object = (UObject*)Object;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UKismetSystemLibrary::SetBytePropertyByName(UObject* Object, FName PropertyName, uint8_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.SetBytePropertyByName"));
    struct Params_SetBytePropertyByName {
        UObject* Object; // 0x0
        FName PropertyName; // 0x8
        uint8_t Value; // 0x10
    }; // Size: 0x11
    Params_SetBytePropertyByName params{};
    params.Object = (UObject*)Object;
    params.PropertyName = (FName)PropertyName;
    params.Value = (uint8_t)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UKismetSystemLibrary* UKismetSystemLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.KismetSystemLibrary");
    return (UKismetSystemLibrary*)res;
}
void UKismetSystemLibrary::SetObjectPropertyByName(UObject* Object, FName PropertyName, UObject* Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.SetObjectPropertyByName"));
    struct Params_SetObjectPropertyByName {
        UObject* Object; // 0x0
        FName PropertyName; // 0x8
        UObject* Value; // 0x10
    }; // Size: 0x18
    Params_SetObjectPropertyByName params{};
    params.Object = (UObject*)Object;
    params.PropertyName = (FName)PropertyName;
    params.Value = (UObject*)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UKismetSystemLibrary::SetRotatorPropertyByName(UObject* Object, FName PropertyName, FRotator& Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.SetRotatorPropertyByName"));
    struct Params_SetRotatorPropertyByName {
        UObject* Object; // 0x0
        FName PropertyName; // 0x8
        FRotator Value; // 0x10
    }; // Size: 0x1c
    Params_SetRotatorPropertyByName params{};
    params.Object = (UObject*)Object;
    params.PropertyName = (FName)PropertyName;
    params.Value = (FRotator)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Value = params.Value;
}
void UKismetSystemLibrary::UnregisterForRemoteNotifications() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.UnregisterForRemoteNotifications"));
    struct Params_UnregisterForRemoteNotifications {
    }; // Size: 0x0
    Params_UnregisterForRemoteNotifications params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FString UKismetSystemLibrary::MakeLiteralString(FString Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.MakeLiteralString"));
    struct Params_MakeLiteralString {
        FString Value; // 0x0
        FString ReturnValue; // 0x10
    }; // Size: 0x20
    Params_MakeLiteralString params{};
    params.Value = (FString)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UKismetSystemLibrary::UnloadPrimaryAssetList(TArray<FPrimaryAssetId>& PrimaryAssetIdList) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.UnloadPrimaryAssetList"));
    struct Params_UnloadPrimaryAssetList {
        TArray<FPrimaryAssetId> PrimaryAssetIdList; // 0x0
    }; // Size: 0x10
    Params_UnloadPrimaryAssetList params{};
    params.PrimaryAssetIdList = (TArray<FPrimaryAssetId>)PrimaryAssetIdList;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    PrimaryAssetIdList = params.PrimaryAssetIdList;
}
void UKismetSystemLibrary::UnloadPrimaryAsset(FPrimaryAssetId PrimaryAssetId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.UnloadPrimaryAsset"));
    struct Params_UnloadPrimaryAsset {
        FPrimaryAssetId PrimaryAssetId; // 0x0
    }; // Size: 0x10
    Params_UnloadPrimaryAsset params{};
    params.PrimaryAssetId = (FPrimaryAssetId)PrimaryAssetId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UKismetSystemLibrary::SetVectorPropertyByName(UObject* Object, FName PropertyName, FVector& Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.SetVectorPropertyByName"));
    struct Params_SetVectorPropertyByName {
        UObject* Object; // 0x0
        FName PropertyName; // 0x8
        FVector Value; // 0x10
    }; // Size: 0x1c
    Params_SetVectorPropertyByName params{};
    params.Object = (UObject*)Object;
    params.PropertyName = (FName)PropertyName;
    params.Value = (FVector)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Value = params.Value;
}
bool UKismetSystemLibrary::SphereTraceSingleByProfile(UObject* WorldContextObject, FVector Start, FVector End, float Radius, FName ProfileName, bool bTraceComplex, TArray<AActor*>& ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.SphereTraceSingleByProfile"));
    struct Params_SphereTraceSingleByProfile {
        UObject* WorldContextObject; // 0x0
        FVector Start; // 0x8
        FVector End; // 0x14
        float Radius; // 0x20
        FName ProfileName; // 0x24
        bool bTraceComplex; // 0x2c
        char pad_2d[0x3];
        TArray<AActor*> ActorsToIgnore; // 0x30
        EDrawDebugTrace::Type DrawDebugType; // 0x40
        char pad_41[0x3];
        FHitResult OutHit; // 0x44
        bool bIgnoreSelf; // 0xcc
        char pad_cd[0x3];
        FLinearColor TraceColor; // 0xd0
        FLinearColor TraceHitColor; // 0xe0
        float DrawTime; // 0xf0
        bool ReturnValue; // 0xf4
    }; // Size: 0xf5
    Params_SphereTraceSingleByProfile params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Start = (FVector)Start;
    params.End = (FVector)End;
    params.Radius = (float)Radius;
    params.ProfileName = (FName)ProfileName;
    params.bTraceComplex = (bool)bTraceComplex;
    params.ActorsToIgnore = (TArray<AActor*>)ActorsToIgnore;
    params.DrawDebugType = (EDrawDebugTrace::Type)DrawDebugType;
    params.OutHit = (FHitResult)OutHit;
    params.bIgnoreSelf = (bool)bIgnoreSelf;
    params.TraceColor = (FLinearColor)TraceColor;
    params.TraceHitColor = (FLinearColor)TraceHitColor;
    params.DrawTime = (float)DrawTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ActorsToIgnore = params.ActorsToIgnore;
    OutHit = params.OutHit;
    return (bool)params.ReturnValue;
}
void UKismetSystemLibrary::CancelTransaction(int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.CancelTransaction"));
    struct Params_CancelTransaction {
        int32_t Index; // 0x0
    }; // Size: 0x4
    Params_CancelTransaction params{};
    params.Index = (int32_t)Index;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UKismetSystemLibrary::RegisterForRemoteNotifications() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.RegisterForRemoteNotifications"));
    struct Params_RegisterForRemoteNotifications {
    }; // Size: 0x0
    Params_RegisterForRemoteNotifications params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UKismetSystemLibrary::SphereTraceSingle(UObject* WorldContextObject, FVector Start, FVector End, float Radius, ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<AActor*>& ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.SphereTraceSingle"));
    struct Params_SphereTraceSingle {
        UObject* WorldContextObject; // 0x0
        FVector Start; // 0x8
        FVector End; // 0x14
        float Radius; // 0x20
        ETraceTypeQuery TraceChannel; // 0x24
        bool bTraceComplex; // 0x25
        char pad_26[0x2];
        TArray<AActor*> ActorsToIgnore; // 0x28
        EDrawDebugTrace::Type DrawDebugType; // 0x38
        char pad_39[0x3];
        FHitResult OutHit; // 0x3c
        bool bIgnoreSelf; // 0xc4
        char pad_c5[0x3];
        FLinearColor TraceColor; // 0xc8
        FLinearColor TraceHitColor; // 0xd8
        float DrawTime; // 0xe8
        bool ReturnValue; // 0xec
    }; // Size: 0xed
    Params_SphereTraceSingle params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Start = (FVector)Start;
    params.End = (FVector)End;
    params.Radius = (float)Radius;
    params.TraceChannel = (ETraceTypeQuery)TraceChannel;
    params.bTraceComplex = (bool)bTraceComplex;
    params.ActorsToIgnore = (TArray<AActor*>)ActorsToIgnore;
    params.DrawDebugType = (EDrawDebugTrace::Type)DrawDebugType;
    params.OutHit = (FHitResult)OutHit;
    params.bIgnoreSelf = (bool)bIgnoreSelf;
    params.TraceColor = (FLinearColor)TraceColor;
    params.TraceHitColor = (FLinearColor)TraceHitColor;
    params.DrawTime = (float)DrawTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ActorsToIgnore = params.ActorsToIgnore;
    OutHit = params.OutHit;
    return (bool)params.ReturnValue;
}
void UKismetSystemLibrary::DrawDebugCylinder(UObject* WorldContextObject, FVector Start, FVector End, float Radius, int32_t Segments, FLinearColor LineColor, float Duration, float Thickness) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.DrawDebugCylinder"));
    struct Params_DrawDebugCylinder {
        UObject* WorldContextObject; // 0x0
        FVector Start; // 0x8
        FVector End; // 0x14
        float Radius; // 0x20
        int32_t Segments; // 0x24
        FLinearColor LineColor; // 0x28
        float Duration; // 0x38
        float Thickness; // 0x3c
    }; // Size: 0x40
    Params_DrawDebugCylinder params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Start = (FVector)Start;
    params.End = (FVector)End;
    params.Radius = (float)Radius;
    params.Segments = (int32_t)Segments;
    params.LineColor = (FLinearColor)LineColor;
    params.Duration = (float)Duration;
    params.Thickness = (float)Thickness;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UKismetSystemLibrary::ShowPlatformSpecificAchievementsScreen(APlayerController* SpecificPlayer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.ShowPlatformSpecificAchievementsScreen"));
    struct Params_ShowPlatformSpecificAchievementsScreen {
        APlayerController* SpecificPlayer; // 0x0
    }; // Size: 0x8
    Params_ShowPlatformSpecificAchievementsScreen params{};
    params.SpecificPlayer = (APlayerController*)SpecificPlayer;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FString UKismetSystemLibrary::Conv_PrimaryAssetTypeToString(FPrimaryAssetType PrimaryAssetType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.Conv_PrimaryAssetTypeToString"));
    struct Params_Conv_PrimaryAssetTypeToString {
        FPrimaryAssetType PrimaryAssetType; // 0x0
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_Conv_PrimaryAssetTypeToString params{};
    params.PrimaryAssetType = (FPrimaryAssetType)PrimaryAssetType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
bool UKismetSystemLibrary::SphereTraceMultiForObjects(UObject* WorldContextObject, FVector Start, FVector End, float Radius, TArray<EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, TArray<AActor*>& ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.SphereTraceMultiForObjects"));
    struct Params_SphereTraceMultiForObjects {
        UObject* WorldContextObject; // 0x0
        FVector Start; // 0x8
        FVector End; // 0x14
        float Radius; // 0x20
        char pad_24[0x4];
        TArray<EObjectTypeQuery> ObjectTypes; // 0x28
        bool bTraceComplex; // 0x38
        char pad_39[0x7];
        TArray<AActor*> ActorsToIgnore; // 0x40
        EDrawDebugTrace::Type DrawDebugType; // 0x50
        char pad_51[0x7];
        TArray<FHitResult> OutHits; // 0x58
        bool bIgnoreSelf; // 0x68
        char pad_69[0x3];
        FLinearColor TraceColor; // 0x6c
        FLinearColor TraceHitColor; // 0x7c
        float DrawTime; // 0x8c
        bool ReturnValue; // 0x90
    }; // Size: 0x91
    Params_SphereTraceMultiForObjects params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Start = (FVector)Start;
    params.End = (FVector)End;
    params.Radius = (float)Radius;
    params.ObjectTypes = (TArray<EObjectTypeQuery>)ObjectTypes;
    params.bTraceComplex = (bool)bTraceComplex;
    params.ActorsToIgnore = (TArray<AActor*>)ActorsToIgnore;
    params.DrawDebugType = (EDrawDebugTrace::Type)DrawDebugType;
    params.OutHits = (TArray<FHitResult>)OutHits;
    params.bIgnoreSelf = (bool)bIgnoreSelf;
    params.TraceColor = (FLinearColor)TraceColor;
    params.TraceHitColor = (FLinearColor)TraceHitColor;
    params.DrawTime = (float)DrawTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ObjectTypes = params.ObjectTypes;
    OutHits = params.OutHits;
    ActorsToIgnore = params.ActorsToIgnore;
    return (bool)params.ReturnValue;
}
void UKismetSystemLibrary::SetBoolPropertyByName(UObject* Object, FName PropertyName, bool Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.SetBoolPropertyByName"));
    struct Params_SetBoolPropertyByName {
        UObject* Object; // 0x0
        FName PropertyName; // 0x8
        bool Value; // 0x10
    }; // Size: 0x11
    Params_SetBoolPropertyByName params{};
    params.Object = (UObject*)Object;
    params.PropertyName = (FName)PropertyName;
    params.Value = (bool)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UKismetSystemLibrary::ExecuteConsoleCommand(UObject* WorldContextObject, FString Command, APlayerController* SpecificPlayer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.ExecuteConsoleCommand"));
    struct Params_ExecuteConsoleCommand {
        UObject* WorldContextObject; // 0x0
        FString Command; // 0x8
        APlayerController* SpecificPlayer; // 0x18
    }; // Size: 0x20
    Params_ExecuteConsoleCommand params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Command = (FString)Command;
    params.SpecificPlayer = (APlayerController*)SpecificPlayer;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UKismetSystemLibrary::SphereTraceMultiByProfile(UObject* WorldContextObject, FVector Start, FVector End, float Radius, FName ProfileName, bool bTraceComplex, TArray<AActor*>& ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.SphereTraceMultiByProfile"));
    struct Params_SphereTraceMultiByProfile {
        UObject* WorldContextObject; // 0x0
        FVector Start; // 0x8
        FVector End; // 0x14
        float Radius; // 0x20
        FName ProfileName; // 0x24
        bool bTraceComplex; // 0x2c
        char pad_2d[0x3];
        TArray<AActor*> ActorsToIgnore; // 0x30
        EDrawDebugTrace::Type DrawDebugType; // 0x40
        char pad_41[0x7];
        TArray<FHitResult> OutHits; // 0x48
        bool bIgnoreSelf; // 0x58
        char pad_59[0x3];
        FLinearColor TraceColor; // 0x5c
        FLinearColor TraceHitColor; // 0x6c
        float DrawTime; // 0x7c
        bool ReturnValue; // 0x80
    }; // Size: 0x81
    Params_SphereTraceMultiByProfile params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Start = (FVector)Start;
    params.End = (FVector)End;
    params.Radius = (float)Radius;
    params.ProfileName = (FName)ProfileName;
    params.bTraceComplex = (bool)bTraceComplex;
    params.ActorsToIgnore = (TArray<AActor*>)ActorsToIgnore;
    params.DrawDebugType = (EDrawDebugTrace::Type)DrawDebugType;
    params.OutHits = (TArray<FHitResult>)OutHits;
    params.bIgnoreSelf = (bool)bIgnoreSelf;
    params.TraceColor = (FLinearColor)TraceColor;
    params.TraceHitColor = (FLinearColor)TraceHitColor;
    params.DrawTime = (float)DrawTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ActorsToIgnore = params.ActorsToIgnore;
    OutHits = params.OutHits;
    return (bool)params.ReturnValue;
}
int32_t UKismetSystemLibrary::GetMinYResolutionFor3DView() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetMinYResolutionFor3DView"));
    struct Params_GetMinYResolutionFor3DView {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMinYResolutionFor3DView params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UKismetSystemLibrary::ShowInterstitialAd() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.ShowInterstitialAd"));
    struct Params_ShowInterstitialAd {
    }; // Size: 0x0
    Params_ShowInterstitialAd params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UKismetSystemLibrary::IsValidPrimaryAssetType(FPrimaryAssetType PrimaryAssetType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.IsValidPrimaryAssetType"));
    struct Params_IsValidPrimaryAssetType {
        FPrimaryAssetType PrimaryAssetType; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsValidPrimaryAssetType params{};
    params.PrimaryAssetType = (FPrimaryAssetType)PrimaryAssetType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetSystemLibrary::SphereTraceMulti(UObject* WorldContextObject, FVector Start, FVector End, float Radius, ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<AActor*>& ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.SphereTraceMulti"));
    struct Params_SphereTraceMulti {
        UObject* WorldContextObject; // 0x0
        FVector Start; // 0x8
        FVector End; // 0x14
        float Radius; // 0x20
        ETraceTypeQuery TraceChannel; // 0x24
        bool bTraceComplex; // 0x25
        char pad_26[0x2];
        TArray<AActor*> ActorsToIgnore; // 0x28
        EDrawDebugTrace::Type DrawDebugType; // 0x38
        char pad_39[0x7];
        TArray<FHitResult> OutHits; // 0x40
        bool bIgnoreSelf; // 0x50
        char pad_51[0x3];
        FLinearColor TraceColor; // 0x54
        FLinearColor TraceHitColor; // 0x64
        float DrawTime; // 0x74
        bool ReturnValue; // 0x78
    }; // Size: 0x79
    Params_SphereTraceMulti params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Start = (FVector)Start;
    params.End = (FVector)End;
    params.Radius = (float)Radius;
    params.TraceChannel = (ETraceTypeQuery)TraceChannel;
    params.bTraceComplex = (bool)bTraceComplex;
    params.ActorsToIgnore = (TArray<AActor*>)ActorsToIgnore;
    params.DrawDebugType = (EDrawDebugTrace::Type)DrawDebugType;
    params.OutHits = (TArray<FHitResult>)OutHits;
    params.bIgnoreSelf = (bool)bIgnoreSelf;
    params.TraceColor = (FLinearColor)TraceColor;
    params.TraceHitColor = (FLinearColor)TraceHitColor;
    params.DrawTime = (float)DrawTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ActorsToIgnore = params.ActorsToIgnore;
    OutHits = params.OutHits;
    return (bool)params.ReturnValue;
}
void UKismetSystemLibrary::SetGamepadsBlockDeviceFeedback(bool bBlock) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.SetGamepadsBlockDeviceFeedback"));
    struct Params_SetGamepadsBlockDeviceFeedback {
        bool bBlock; // 0x0
    }; // Size: 0x1
    Params_SetGamepadsBlockDeviceFeedback params{};
    params.bBlock = (bool)bBlock;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UKismetSystemLibrary::GetSoftObjectReferenceFromPrimaryAssetId(FPrimaryAssetId PrimaryAssetId) {}
void UKismetSystemLibrary::IsValidSoftClassReference() {}
bool UKismetSystemLibrary::SphereOverlapComponents(UObject* WorldContextObject, FVector SpherePos, float SphereRadius, TArray<EObjectTypeQuery>& ObjectTypes, UClass* ComponentClassFilter, TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.SphereOverlapComponents"));
    struct Params_SphereOverlapComponents {
        UObject* WorldContextObject; // 0x0
        FVector SpherePos; // 0x8
        float SphereRadius; // 0x14
        TArray<EObjectTypeQuery> ObjectTypes; // 0x18
        UClass* ComponentClassFilter; // 0x28
        TArray<AActor*> ActorsToIgnore; // 0x30
        TArray<UPrimitiveComponent*> OutComponents; // 0x40
        bool ReturnValue; // 0x50
    }; // Size: 0x51
    Params_SphereOverlapComponents params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.SpherePos = (FVector)SpherePos;
    params.SphereRadius = (float)SphereRadius;
    params.ObjectTypes = (TArray<EObjectTypeQuery>)ObjectTypes;
    params.ComponentClassFilter = (UClass*)ComponentClassFilter;
    params.ActorsToIgnore = (TArray<AActor*>)ActorsToIgnore;
    params.OutComponents = (TArray<UPrimitiveComponent*>)OutComponents;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ActorsToIgnore = params.ActorsToIgnore;
    ObjectTypes = params.ObjectTypes;
    OutComponents = params.OutComponents;
    return (bool)params.ReturnValue;
}
void UKismetSystemLibrary::BreakSoftClassPath(FSoftClassPath InSoftClassPath, FString& PathString) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.BreakSoftClassPath"));
    struct Params_BreakSoftClassPath {
        FSoftClassPath InSoftClassPath; // 0x0
        FString PathString; // 0x18
    }; // Size: 0x28
    Params_BreakSoftClassPath params{};
    params.InSoftClassPath = (FSoftClassPath)InSoftClassPath;
    params.PathString = (FString)PathString;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    PathString = params.PathString;
}
bool UKismetSystemLibrary::SphereOverlapActors(UObject* WorldContextObject, FVector SpherePos, float SphereRadius, TArray<EObjectTypeQuery>& ObjectTypes, UClass* ActorClassFilter, TArray<AActor*>& ActorsToIgnore, TArray<AActor*>& OutActors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.SphereOverlapActors"));
    struct Params_SphereOverlapActors {
        UObject* WorldContextObject; // 0x0
        FVector SpherePos; // 0x8
        float SphereRadius; // 0x14
        TArray<EObjectTypeQuery> ObjectTypes; // 0x18
        UClass* ActorClassFilter; // 0x28
        TArray<AActor*> ActorsToIgnore; // 0x30
        TArray<AActor*> OutActors; // 0x40
        bool ReturnValue; // 0x50
    }; // Size: 0x51
    Params_SphereOverlapActors params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.SpherePos = (FVector)SpherePos;
    params.SphereRadius = (float)SphereRadius;
    params.ObjectTypes = (TArray<EObjectTypeQuery>)ObjectTypes;
    params.ActorClassFilter = (UClass*)ActorClassFilter;
    params.ActorsToIgnore = (TArray<AActor*>)ActorsToIgnore;
    params.OutActors = (TArray<AActor*>)OutActors;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ObjectTypes = params.ObjectTypes;
    ActorsToIgnore = params.ActorsToIgnore;
    OutActors = params.OutActors;
    return (bool)params.ReturnValue;
}
void UKismetSystemLibrary::SetWindowTitle() {}
void UKismetSystemLibrary::SnapshotObject(UObject* Object) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.SnapshotObject"));
    struct Params_SnapshotObject {
        UObject* Object; // 0x0
    }; // Size: 0x8
    Params_SnapshotObject params{};
    params.Object = (UObject*)Object;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UKismetSystemLibrary::ShowPlatformSpecificLeaderboardScreen(FString CategoryName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.ShowPlatformSpecificLeaderboardScreen"));
    struct Params_ShowPlatformSpecificLeaderboardScreen {
        FString CategoryName; // 0x0
    }; // Size: 0x10
    Params_ShowPlatformSpecificLeaderboardScreen params{};
    params.CategoryName = (FString)CategoryName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UKismetSystemLibrary::SetTextPropertyByName(UObject* Object, FName PropertyName) {}
void UKismetSystemLibrary::SetClassPropertyByName(UObject* Object, FName PropertyName, UClass* Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.SetClassPropertyByName"));
    struct Params_SetClassPropertyByName {
        UObject* Object; // 0x0
        FName PropertyName; // 0x8
        UClass* Value; // 0x10
    }; // Size: 0x18
    Params_SetClassPropertyByName params{};
    params.Object = (UObject*)Object;
    params.PropertyName = (FName)PropertyName;
    params.Value = (UClass*)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UKismetSystemLibrary::ShowAdBanner(int32_t AdIdIndex, bool bShowOnBottomOfScreen) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.ShowAdBanner"));
    struct Params_ShowAdBanner {
        int32_t AdIdIndex; // 0x0
        bool bShowOnBottomOfScreen; // 0x4
    }; // Size: 0x5
    Params_ShowAdBanner params{};
    params.AdIdIndex = (int32_t)AdIdIndex;
    params.bShowOnBottomOfScreen = (bool)bShowOnBottomOfScreen;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UKismetSystemLibrary::NotEqual_SoftClassReference() {}
FTimerHandle UKismetSystemLibrary::K2_SetTimer(UObject* Object, FString FunctionName, float Time, bool bLooping, float InitialStartDelay, float InitialStartDelayVariance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.K2_SetTimer"));
    struct Params_K2_SetTimer {
        UObject* Object; // 0x0
        FString FunctionName; // 0x8
        float Time; // 0x18
        bool bLooping; // 0x1c
        char pad_1d[0x3];
        float InitialStartDelay; // 0x20
        float InitialStartDelayVariance; // 0x24
        FTimerHandle ReturnValue; // 0x28
    }; // Size: 0x30
    Params_K2_SetTimer params{};
    params.Object = (UObject*)Object;
    params.FunctionName = (FString)FunctionName;
    params.Time = (float)Time;
    params.bLooping = (bool)bLooping;
    params.InitialStartDelay = (float)InitialStartDelay;
    params.InitialStartDelayVariance = (float)InitialStartDelayVariance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FTimerHandle)params.ReturnValue;
}
void UKismetSystemLibrary::SetVolumeButtonsHandledBySystem(bool bEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.SetVolumeButtonsHandledBySystem"));
    struct Params_SetVolumeButtonsHandledBySystem {
        bool bEnabled; // 0x0
    }; // Size: 0x1
    Params_SetVolumeButtonsHandledBySystem params{};
    params.bEnabled = (bool)bEnabled;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UKismetSystemLibrary::ParseCommandLine(FString InCmdLine, TArray<FString>& OutTokens, TArray<FString>& OutSwitches) {}
void UKismetSystemLibrary::DrawDebugFloatHistoryTransform(UObject* WorldContextObject, FDebugFloatHistory& FloatHistory, FTransform& DrawTransform, FVector2D DrawSize, FLinearColor DrawColor, float Duration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.DrawDebugFloatHistoryTransform"));
    struct Params_DrawDebugFloatHistoryTransform {
        UObject* WorldContextObject; // 0x0
        FDebugFloatHistory FloatHistory; // 0x8
        char pad_28[0x8];
        FTransform DrawTransform; // 0x30
        FVector2D DrawSize; // 0x60
        FLinearColor DrawColor; // 0x68
        float Duration; // 0x78
    }; // Size: 0x7c
    Params_DrawDebugFloatHistoryTransform params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.FloatHistory = (FDebugFloatHistory)FloatHistory;
    params.DrawTransform = (FTransform)DrawTransform;
    params.DrawSize = (FVector2D)DrawSize;
    params.DrawColor = (FLinearColor)DrawColor;
    params.Duration = (float)Duration;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    DrawTransform = params.DrawTransform;
    FloatHistory = params.FloatHistory;
}
void UKismetSystemLibrary::SetUserActivity(FUserActivity& UserActivity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.SetUserActivity"));
    struct Params_SetUserActivity {
        FUserActivity UserActivity; // 0x0
    }; // Size: 0x18
    Params_SetUserActivity params{};
    params.UserActivity = (FUserActivity)UserActivity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    UserActivity = params.UserActivity;
}
bool UKismetSystemLibrary::NotEqual_PrimaryAssetType(FPrimaryAssetType A, FPrimaryAssetType B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.NotEqual_PrimaryAssetType"));
    struct Params_NotEqual_PrimaryAssetType {
        FPrimaryAssetType A; // 0x0
        FPrimaryAssetType B; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_NotEqual_PrimaryAssetType params{};
    params.A = (FPrimaryAssetType)A;
    params.B = (FPrimaryAssetType)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UKismetSystemLibrary::SetTransformPropertyByName(UObject* Object, FName PropertyName, FTransform& Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.SetTransformPropertyByName"));
    struct Params_SetTransformPropertyByName {
        UObject* Object; // 0x0
        FName PropertyName; // 0x8
        FTransform Value; // 0x10
    }; // Size: 0x40
    Params_SetTransformPropertyByName params{};
    params.Object = (UObject*)Object;
    params.PropertyName = (FName)PropertyName;
    params.Value = (FTransform)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Value = params.Value;
}
void UKismetSystemLibrary::SetSuppressViewportTransitionMessage(UObject* WorldContextObject, bool bState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.SetSuppressViewportTransitionMessage"));
    struct Params_SetSuppressViewportTransitionMessage {
        UObject* WorldContextObject; // 0x0
        bool bState; // 0x8
    }; // Size: 0x9
    Params_SetSuppressViewportTransitionMessage params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.bState = (bool)bState;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UKismetSystemLibrary::LineTraceSingleByProfile(UObject* WorldContextObject, FVector Start, FVector End, FName ProfileName, bool bTraceComplex, TArray<AActor*>& ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.LineTraceSingleByProfile"));
    struct Params_LineTraceSingleByProfile {
        UObject* WorldContextObject; // 0x0
        FVector Start; // 0x8
        FVector End; // 0x14
        FName ProfileName; // 0x20
        bool bTraceComplex; // 0x28
        char pad_29[0x7];
        TArray<AActor*> ActorsToIgnore; // 0x30
        EDrawDebugTrace::Type DrawDebugType; // 0x40
        char pad_41[0x3];
        FHitResult OutHit; // 0x44
        bool bIgnoreSelf; // 0xcc
        char pad_cd[0x3];
        FLinearColor TraceColor; // 0xd0
        FLinearColor TraceHitColor; // 0xe0
        float DrawTime; // 0xf0
        bool ReturnValue; // 0xf4
    }; // Size: 0xf5
    Params_LineTraceSingleByProfile params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Start = (FVector)Start;
    params.End = (FVector)End;
    params.ProfileName = (FName)ProfileName;
    params.bTraceComplex = (bool)bTraceComplex;
    params.ActorsToIgnore = (TArray<AActor*>)ActorsToIgnore;
    params.DrawDebugType = (EDrawDebugTrace::Type)DrawDebugType;
    params.OutHit = (FHitResult)OutHit;
    params.bIgnoreSelf = (bool)bIgnoreSelf;
    params.TraceColor = (FLinearColor)TraceColor;
    params.TraceHitColor = (FLinearColor)TraceHitColor;
    params.DrawTime = (float)DrawTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ActorsToIgnore = params.ActorsToIgnore;
    OutHit = params.OutHit;
    return (bool)params.ReturnValue;
}
void UKismetSystemLibrary::SetStringPropertyByName(UObject* Object, FName PropertyName, FString Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.SetStringPropertyByName"));
    struct Params_SetStringPropertyByName {
        UObject* Object; // 0x0
        FName PropertyName; // 0x8
        FString Value; // 0x10
    }; // Size: 0x20
    Params_SetStringPropertyByName params{};
    params.Object = (UObject*)Object;
    params.PropertyName = (FName)PropertyName;
    params.Value = (FString)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UKismetSystemLibrary::SetStructurePropertyByName(UObject* Object, FName PropertyName, FGenericStruct& Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.SetStructurePropertyByName"));
    struct Params_SetStructurePropertyByName {
        UObject* Object; // 0x0
        FName PropertyName; // 0x8
        FGenericStruct Value; // 0x10
    }; // Size: 0x14
    Params_SetStructurePropertyByName params{};
    params.Object = (UObject*)Object;
    params.PropertyName = (FName)PropertyName;
    params.Value = (FGenericStruct)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Value = params.Value;
}
void UKismetSystemLibrary::SetColorPropertyByName(UObject* Object, FName PropertyName, FColor& Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.SetColorPropertyByName"));
    struct Params_SetColorPropertyByName {
        UObject* Object; // 0x0
        FName PropertyName; // 0x8
        FColor Value; // 0x10
    }; // Size: 0x14
    Params_SetColorPropertyByName params{};
    params.Object = (UObject*)Object;
    params.PropertyName = (FName)PropertyName;
    params.Value = (FColor)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Value = params.Value;
}
void UKismetSystemLibrary::SetSoftObjectPropertyByName(UObject* Object, FName PropertyName) {}
void UKismetSystemLibrary::SetSoftClassPropertyByName(UObject* Object, FName PropertyName) {}
void UKismetSystemLibrary::MoveComponentTo(USceneComponent* Component, FVector TargetRelativeLocation, FRotator TargetRelativeRotation, bool bEaseOut, bool bEaseIn, float OverTime, bool bForceShortestRotationPath, EMoveComponentAction::Type MoveAction, FLatentActionInfo LatentInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.MoveComponentTo"));
    struct Params_MoveComponentTo {
        USceneComponent* Component; // 0x0
        FVector TargetRelativeLocation; // 0x8
        FRotator TargetRelativeRotation; // 0x14
        bool bEaseOut; // 0x20
        bool bEaseIn; // 0x21
        char pad_22[0x2];
        float OverTime; // 0x24
        bool bForceShortestRotationPath; // 0x28
        EMoveComponentAction::Type MoveAction; // 0x29
        char pad_2a[0x6];
        FLatentActionInfo LatentInfo; // 0x30
    }; // Size: 0x48
    Params_MoveComponentTo params{};
    params.Component = (USceneComponent*)Component;
    params.TargetRelativeLocation = (FVector)TargetRelativeLocation;
    params.TargetRelativeRotation = (FRotator)TargetRelativeRotation;
    params.bEaseOut = (bool)bEaseOut;
    params.bEaseIn = (bool)bEaseIn;
    params.OverTime = (float)OverTime;
    params.bForceShortestRotationPath = (bool)bForceShortestRotationPath;
    params.MoveAction = (EMoveComponentAction::Type)MoveAction;
    params.LatentInfo = (FLatentActionInfo)LatentInfo;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FString UKismetSystemLibrary::GetDeviceId() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetDeviceId"));
    struct Params_GetDeviceId {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetDeviceId params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
bool UKismetSystemLibrary::ParseParam(FString inString, FString InParam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.ParseParam"));
    struct Params_ParseParam {
        FString inString; // 0x0
        FString InParam; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_ParseParam params{};
    params.inString = (FString)inString;
    params.InParam = (FString)InParam;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UKismetSystemLibrary::SetNamePropertyByName(UObject* Object, FName PropertyName, FName& Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.SetNamePropertyByName"));
    struct Params_SetNamePropertyByName {
        UObject* Object; // 0x0
        FName PropertyName; // 0x8
        FName Value; // 0x10
    }; // Size: 0x18
    Params_SetNamePropertyByName params{};
    params.Object = (UObject*)Object;
    params.PropertyName = (FName)PropertyName;
    params.Value = (FName)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Value = params.Value;
}
bool UKismetSystemLibrary::IsValidClass(UClass* Class) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.IsValidClass"));
    struct Params_IsValidClass {
        UClass* Class; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsValidClass params{};
    params.Class = (UClass*)Class;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UKismetSystemLibrary::SetLinearColorPropertyByName(UObject* Object, FName PropertyName, FLinearColor& Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.SetLinearColorPropertyByName"));
    struct Params_SetLinearColorPropertyByName {
        UObject* Object; // 0x0
        FName PropertyName; // 0x8
        FLinearColor Value; // 0x10
    }; // Size: 0x20
    Params_SetLinearColorPropertyByName params{};
    params.Object = (UObject*)Object;
    params.PropertyName = (FName)PropertyName;
    params.Value = (FLinearColor)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Value = params.Value;
}
void UKismetSystemLibrary::SetIntPropertyByName(UObject* Object, FName PropertyName, int32_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.SetIntPropertyByName"));
    struct Params_SetIntPropertyByName {
        UObject* Object; // 0x0
        FName PropertyName; // 0x8
        int32_t Value; // 0x10
    }; // Size: 0x14
    Params_SetIntPropertyByName params{};
    params.Object = (UObject*)Object;
    params.PropertyName = (FName)PropertyName;
    params.Value = (int32_t)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UKismetSystemLibrary::ResetGamepadAssignments() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.ResetGamepadAssignments"));
    struct Params_ResetGamepadAssignments {
    }; // Size: 0x0
    Params_ResetGamepadAssignments params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UKismetSystemLibrary::SetInterfacePropertyByName(UObject* Object, FName PropertyName) {}
void UKismetSystemLibrary::SetInt64PropertyByName(UObject* Object, FName PropertyName, int64_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.SetInt64PropertyByName"));
    struct Params_SetInt64PropertyByName {
        UObject* Object; // 0x0
        FName PropertyName; // 0x8
        int64_t Value; // 0x10
    }; // Size: 0x18
    Params_SetInt64PropertyByName params{};
    params.Object = (UObject*)Object;
    params.PropertyName = (FName)PropertyName;
    params.Value = (int64_t)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UKismetSystemLibrary::SetFloatPropertyByName(UObject* Object, FName PropertyName, float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.SetFloatPropertyByName"));
    struct Params_SetFloatPropertyByName {
        UObject* Object; // 0x0
        FName PropertyName; // 0x8
        float Value; // 0x10
    }; // Size: 0x14
    Params_SetFloatPropertyByName params{};
    params.Object = (UObject*)Object;
    params.PropertyName = (FName)PropertyName;
    params.Value = (float)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UKismetSystemLibrary::NotEqual_PrimaryAssetId(FPrimaryAssetId A, FPrimaryAssetId B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.NotEqual_PrimaryAssetId"));
    struct Params_NotEqual_PrimaryAssetId {
        FPrimaryAssetId A; // 0x0
        FPrimaryAssetId B; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_NotEqual_PrimaryAssetId params{};
    params.A = (FPrimaryAssetId)A;
    params.B = (FPrimaryAssetId)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetSystemLibrary::EqualEqual_PrimaryAssetId(FPrimaryAssetId A, FPrimaryAssetId B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.EqualEqual_PrimaryAssetId"));
    struct Params_EqualEqual_PrimaryAssetId {
        FPrimaryAssetId A; // 0x0
        FPrimaryAssetId B; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_EqualEqual_PrimaryAssetId params{};
    params.A = (FPrimaryAssetId)A;
    params.B = (FPrimaryAssetId)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UKismetSystemLibrary::SetFieldPathPropertyByName(UObject* Object, FName PropertyName) {}
void UKismetSystemLibrary::GetActorListFromComponentList(TArray<UPrimitiveComponent*>& ComponentList, UClass* ActorClassFilter, TArray<AActor*>& OutActorList) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetActorListFromComponentList"));
    struct Params_GetActorListFromComponentList {
        TArray<UPrimitiveComponent*> ComponentList; // 0x0
        UClass* ActorClassFilter; // 0x10
        TArray<AActor*> OutActorList; // 0x18
    }; // Size: 0x28
    Params_GetActorListFromComponentList params{};
    params.ComponentList = (TArray<UPrimitiveComponent*>)ComponentList;
    params.ActorClassFilter = (UClass*)ActorClassFilter;
    params.OutActorList = (TArray<AActor*>)OutActorList;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ComponentList = params.ComponentList;
    OutActorList = params.OutActorList;
}
void UKismetSystemLibrary::SetCollisionProfileNameProperty(UObject* Object, FName PropertyName, FCollisionProfileName& Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.SetCollisionProfileNameProperty"));
    struct Params_SetCollisionProfileNameProperty {
        UObject* Object; // 0x0
        FName PropertyName; // 0x8
        FCollisionProfileName Value; // 0x10
    }; // Size: 0x18
    Params_SetCollisionProfileNameProperty params{};
    params.Object = (UObject*)Object;
    params.PropertyName = (FName)PropertyName;
    params.Value = (FCollisionProfileName)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Value = params.Value;
}
FString UKismetSystemLibrary::GetProjectDirectory() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetProjectDirectory"));
    struct Params_GetProjectDirectory {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetProjectDirectory params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UKismetSystemLibrary::RetriggerableDelay(UObject* WorldContextObject, float Duration, FLatentActionInfo LatentInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.RetriggerableDelay"));
    struct Params_RetriggerableDelay {
        UObject* WorldContextObject; // 0x0
        float Duration; // 0x8
        char pad_c[0x4];
        FLatentActionInfo LatentInfo; // 0x10
    }; // Size: 0x28
    Params_RetriggerableDelay params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Duration = (float)Duration;
    params.LatentInfo = (FLatentActionInfo)LatentInfo;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UKismetSystemLibrary::ResetGamepadAssignmentToController(int32_t ControllerId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.ResetGamepadAssignmentToController"));
    struct Params_ResetGamepadAssignmentToController {
        int32_t ControllerId; // 0x0
    }; // Size: 0x4
    Params_ResetGamepadAssignmentToController params{};
    params.ControllerId = (int32_t)ControllerId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UKismetSystemLibrary::PrintWarning(FString inString) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.PrintWarning"));
    struct Params_PrintWarning {
        FString inString; // 0x0
    }; // Size: 0x10
    Params_PrintWarning params{};
    params.inString = (FString)inString;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UKismetSystemLibrary::PrintText(UObject* WorldContextObject) {}
void UKismetSystemLibrary::PrintString(UObject* WorldContextObject, FString inString, bool bPrintToScreen, bool bPrintToLog, FLinearColor TextColor, float Duration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.PrintString"));
    struct Params_PrintString {
        UObject* WorldContextObject; // 0x0
        FString inString; // 0x8
        bool bPrintToScreen; // 0x18
        bool bPrintToLog; // 0x19
        char pad_1a[0x2];
        FLinearColor TextColor; // 0x1c
        float Duration; // 0x2c
    }; // Size: 0x30
    Params_PrintString params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.inString = (FString)inString;
    params.bPrintToScreen = (bool)bPrintToScreen;
    params.bPrintToLog = (bool)bPrintToLog;
    params.TextColor = (FLinearColor)TextColor;
    params.Duration = (float)Duration;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UObject* UKismetSystemLibrary::GetOuterObject(UObject* Object) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetOuterObject"));
    struct Params_GetOuterObject {
        UObject* Object; // 0x0
        UObject* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetOuterObject params{};
    params.Object = (UObject*)Object;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UObject*)params.ReturnValue;
}
bool UKismetSystemLibrary::ParseParamValue(FString inString, FString InParam, FString& OutValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.ParseParamValue"));
    struct Params_ParseParamValue {
        FString inString; // 0x0
        FString InParam; // 0x10
        FString OutValue; // 0x20
        bool ReturnValue; // 0x30
    }; // Size: 0x31
    Params_ParseParamValue params{};
    params.inString = (FString)inString;
    params.InParam = (FString)InParam;
    params.OutValue = (FString)OutValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutValue = params.OutValue;
    return (bool)params.ReturnValue;
}
void UKismetSystemLibrary::OnAssetLoaded__DelegateSignature(UObject* Loaded) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Engine.KismetSystemLibrary.OnAssetLoaded__DelegateSignature"));
    struct Params_OnAssetLoaded__DelegateSignature {
        UObject* Loaded; // 0x0
    }; // Size: 0x8
    Params_OnAssetLoaded__DelegateSignature params{};
    params.Loaded = (UObject*)Loaded;
    ProcessEvent(func, &params);
}
void UKismetSystemLibrary::GetPrimaryAssetIdFromSoftClassReference() {}
void UKismetSystemLibrary::OnAssetClassLoaded__DelegateSignature(UClass* Loaded) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Engine.KismetSystemLibrary.OnAssetClassLoaded__DelegateSignature"));
    struct Params_OnAssetClassLoaded__DelegateSignature {
        UClass* Loaded; // 0x0
    }; // Size: 0x8
    Params_OnAssetClassLoaded__DelegateSignature params{};
    params.Loaded = (UClass*)Loaded;
    ProcessEvent(func, &params);
}
FSoftObjectPath UKismetSystemLibrary::MakeSoftObjectPath(FString PathString) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.MakeSoftObjectPath"));
    struct Params_MakeSoftObjectPath {
        FString PathString; // 0x0
        FSoftObjectPath ReturnValue; // 0x10
    }; // Size: 0x28
    Params_MakeSoftObjectPath params{};
    params.PathString = (FString)PathString;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FSoftObjectPath)params.ReturnValue;
}
void UKismetSystemLibrary::NotEqual_SoftObjectReference() {}
FString UKismetSystemLibrary::NormalizeFilename(FString InFilename) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.NormalizeFilename"));
    struct Params_NormalizeFilename {
        FString InFilename; // 0x0
        FString ReturnValue; // 0x10
    }; // Size: 0x20
    Params_NormalizeFilename params{};
    params.InFilename = (FString)InFilename;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
int32_t UKismetSystemLibrary::GetMinYResolutionForUI() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetMinYResolutionForUI"));
    struct Params_GetMinYResolutionForUI {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMinYResolutionForUI params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UKismetSystemLibrary::IsInterstitialAdAvailable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.IsInterstitialAdAvailable"));
    struct Params_IsInterstitialAdAvailable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInterstitialAdAvailable params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FSoftClassPath UKismetSystemLibrary::MakeSoftClassPath(FString PathString) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.MakeSoftClassPath"));
    struct Params_MakeSoftClassPath {
        FString PathString; // 0x0
        FSoftClassPath ReturnValue; // 0x10
    }; // Size: 0x28
    Params_MakeSoftClassPath params{};
    params.PathString = (FString)PathString;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FSoftClassPath)params.ReturnValue;
}
bool UKismetSystemLibrary::K2_TimerExistsHandle(UObject* WorldContextObject, FTimerHandle Handle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.K2_TimerExistsHandle"));
    struct Params_K2_TimerExistsHandle {
        UObject* WorldContextObject; // 0x0
        FTimerHandle Handle; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_K2_TimerExistsHandle params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Handle = (FTimerHandle)Handle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UKismetSystemLibrary::MakeLiteralText() {}
bool UKismetSystemLibrary::LineTraceMulti(UObject* WorldContextObject, FVector Start, FVector End, ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<AActor*>& ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.LineTraceMulti"));
    struct Params_LineTraceMulti {
        UObject* WorldContextObject; // 0x0
        FVector Start; // 0x8
        FVector End; // 0x14
        ETraceTypeQuery TraceChannel; // 0x20
        bool bTraceComplex; // 0x21
        char pad_22[0x6];
        TArray<AActor*> ActorsToIgnore; // 0x28
        EDrawDebugTrace::Type DrawDebugType; // 0x38
        char pad_39[0x7];
        TArray<FHitResult> OutHits; // 0x40
        bool bIgnoreSelf; // 0x50
        char pad_51[0x3];
        FLinearColor TraceColor; // 0x54
        FLinearColor TraceHitColor; // 0x64
        float DrawTime; // 0x74
        bool ReturnValue; // 0x78
    }; // Size: 0x79
    Params_LineTraceMulti params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Start = (FVector)Start;
    params.End = (FVector)End;
    params.TraceChannel = (ETraceTypeQuery)TraceChannel;
    params.bTraceComplex = (bool)bTraceComplex;
    params.ActorsToIgnore = (TArray<AActor*>)ActorsToIgnore;
    params.DrawDebugType = (EDrawDebugTrace::Type)DrawDebugType;
    params.OutHits = (TArray<FHitResult>)OutHits;
    params.bIgnoreSelf = (bool)bIgnoreSelf;
    params.TraceColor = (FLinearColor)TraceColor;
    params.TraceHitColor = (FLinearColor)TraceHitColor;
    params.DrawTime = (float)DrawTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ActorsToIgnore = params.ActorsToIgnore;
    OutHits = params.OutHits;
    return (bool)params.ReturnValue;
}
FName UKismetSystemLibrary::MakeLiteralName(FName Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.MakeLiteralName"));
    struct Params_MakeLiteralName {
        FName Value; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_MakeLiteralName params{};
    params.Value = (FName)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
int32_t UKismetSystemLibrary::MakeLiteralInt(int32_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.MakeLiteralInt"));
    struct Params_MakeLiteralInt {
        int32_t Value; // 0x0
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_MakeLiteralInt params{};
    params.Value = (int32_t)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UKismetSystemLibrary::K2_PauseTimerHandle(UObject* WorldContextObject, FTimerHandle Handle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.K2_PauseTimerHandle"));
    struct Params_K2_PauseTimerHandle {
        UObject* WorldContextObject; // 0x0
        FTimerHandle Handle; // 0x8
    }; // Size: 0x10
    Params_K2_PauseTimerHandle params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Handle = (FTimerHandle)Handle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
float UKismetSystemLibrary::MakeLiteralFloat(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.MakeLiteralFloat"));
    struct Params_MakeLiteralFloat {
        float Value; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_MakeLiteralFloat params{};
    params.Value = (float)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
uint8_t UKismetSystemLibrary::MakeLiteralByte(uint8_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.MakeLiteralByte"));
    struct Params_MakeLiteralByte {
        uint8_t Value; // 0x0
        uint8_t ReturnValue; // 0x1
    }; // Size: 0x2
    Params_MakeLiteralByte params{};
    params.Value = (uint8_t)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (uint8_t)params.ReturnValue;
}
bool UKismetSystemLibrary::IsSplitScreen(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.IsSplitScreen"));
    struct Params_IsSplitScreen {
        UObject* WorldContextObject; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsSplitScreen params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetSystemLibrary::MakeLiteralBool(bool Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.MakeLiteralBool"));
    struct Params_MakeLiteralBool {
        bool Value; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_MakeLiteralBool params{};
    params.Value = (bool)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UKismetSystemLibrary::LoadInterstitialAd(int32_t AdIdIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.LoadInterstitialAd"));
    struct Params_LoadInterstitialAd {
        int32_t AdIdIndex; // 0x0
    }; // Size: 0x4
    Params_LoadInterstitialAd params{};
    params.AdIdIndex = (int32_t)AdIdIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UKismetSystemLibrary::LoadClassAsset_Blocking() {}
FTimerHandle UKismetSystemLibrary::K2_InvalidateTimerHandle(FTimerHandle& Handle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.K2_InvalidateTimerHandle"));
    struct Params_K2_InvalidateTimerHandle {
        FTimerHandle Handle; // 0x0
        FTimerHandle ReturnValue; // 0x8
    }; // Size: 0x10
    Params_K2_InvalidateTimerHandle params{};
    params.Handle = (FTimerHandle)Handle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Handle = params.Handle;
    return (FTimerHandle)params.ReturnValue;
}
void UKismetSystemLibrary::LoadAssetClass(UObject* WorldContextObject) {}
bool UKismetSystemLibrary::CanLaunchURL(FString URL) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.CanLaunchURL"));
    struct Params_CanLaunchURL {
        FString URL; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_CanLaunchURL params{};
    params.URL = (FString)URL;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UKismetSystemLibrary::LoadAsset_Blocking() {}
void UKismetSystemLibrary::LoadAsset(UObject* WorldContextObject) {}
bool UKismetSystemLibrary::LineTraceSingleForObjects(UObject* WorldContextObject, FVector Start, FVector End, TArray<EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, TArray<AActor*>& ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.LineTraceSingleForObjects"));
    struct Params_LineTraceSingleForObjects {
        UObject* WorldContextObject; // 0x0
        FVector Start; // 0x8
        FVector End; // 0x14
        TArray<EObjectTypeQuery> ObjectTypes; // 0x20
        bool bTraceComplex; // 0x30
        char pad_31[0x7];
        TArray<AActor*> ActorsToIgnore; // 0x38
        EDrawDebugTrace::Type DrawDebugType; // 0x48
        char pad_49[0x3];
        FHitResult OutHit; // 0x4c
        bool bIgnoreSelf; // 0xd4
        char pad_d5[0x3];
        FLinearColor TraceColor; // 0xd8
        FLinearColor TraceHitColor; // 0xe8
        float DrawTime; // 0xf8
        bool ReturnValue; // 0xfc
    }; // Size: 0xfd
    Params_LineTraceSingleForObjects params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Start = (FVector)Start;
    params.End = (FVector)End;
    params.ObjectTypes = (TArray<EObjectTypeQuery>)ObjectTypes;
    params.bTraceComplex = (bool)bTraceComplex;
    params.ActorsToIgnore = (TArray<AActor*>)ActorsToIgnore;
    params.DrawDebugType = (EDrawDebugTrace::Type)DrawDebugType;
    params.OutHit = (FHitResult)OutHit;
    params.bIgnoreSelf = (bool)bIgnoreSelf;
    params.TraceColor = (FLinearColor)TraceColor;
    params.TraceHitColor = (FLinearColor)TraceHitColor;
    params.DrawTime = (float)DrawTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ObjectTypes = params.ObjectTypes;
    ActorsToIgnore = params.ActorsToIgnore;
    OutHit = params.OutHit;
    return (bool)params.ReturnValue;
}
bool UKismetSystemLibrary::LineTraceSingle(UObject* WorldContextObject, FVector Start, FVector End, ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<AActor*>& ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.LineTraceSingle"));
    struct Params_LineTraceSingle {
        UObject* WorldContextObject; // 0x0
        FVector Start; // 0x8
        FVector End; // 0x14
        ETraceTypeQuery TraceChannel; // 0x20
        bool bTraceComplex; // 0x21
        char pad_22[0x6];
        TArray<AActor*> ActorsToIgnore; // 0x28
        EDrawDebugTrace::Type DrawDebugType; // 0x38
        char pad_39[0x3];
        FHitResult OutHit; // 0x3c
        bool bIgnoreSelf; // 0xc4
        char pad_c5[0x3];
        FLinearColor TraceColor; // 0xc8
        FLinearColor TraceHitColor; // 0xd8
        float DrawTime; // 0xe8
        bool ReturnValue; // 0xec
    }; // Size: 0xed
    Params_LineTraceSingle params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Start = (FVector)Start;
    params.End = (FVector)End;
    params.TraceChannel = (ETraceTypeQuery)TraceChannel;
    params.bTraceComplex = (bool)bTraceComplex;
    params.ActorsToIgnore = (TArray<AActor*>)ActorsToIgnore;
    params.DrawDebugType = (EDrawDebugTrace::Type)DrawDebugType;
    params.OutHit = (FHitResult)OutHit;
    params.bIgnoreSelf = (bool)bIgnoreSelf;
    params.TraceColor = (FLinearColor)TraceColor;
    params.TraceHitColor = (FLinearColor)TraceHitColor;
    params.DrawTime = (float)DrawTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ActorsToIgnore = params.ActorsToIgnore;
    OutHit = params.OutHit;
    return (bool)params.ReturnValue;
}
bool UKismetSystemLibrary::LineTraceMultiForObjects(UObject* WorldContextObject, FVector Start, FVector End, TArray<EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, TArray<AActor*>& ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.LineTraceMultiForObjects"));
    struct Params_LineTraceMultiForObjects {
        UObject* WorldContextObject; // 0x0
        FVector Start; // 0x8
        FVector End; // 0x14
        TArray<EObjectTypeQuery> ObjectTypes; // 0x20
        bool bTraceComplex; // 0x30
        char pad_31[0x7];
        TArray<AActor*> ActorsToIgnore; // 0x38
        EDrawDebugTrace::Type DrawDebugType; // 0x48
        char pad_49[0x7];
        TArray<FHitResult> OutHits; // 0x50
        bool bIgnoreSelf; // 0x60
        char pad_61[0x3];
        FLinearColor TraceColor; // 0x64
        FLinearColor TraceHitColor; // 0x74
        float DrawTime; // 0x84
        bool ReturnValue; // 0x88
    }; // Size: 0x89
    Params_LineTraceMultiForObjects params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Start = (FVector)Start;
    params.End = (FVector)End;
    params.ObjectTypes = (TArray<EObjectTypeQuery>)ObjectTypes;
    params.bTraceComplex = (bool)bTraceComplex;
    params.ActorsToIgnore = (TArray<AActor*>)ActorsToIgnore;
    params.DrawDebugType = (EDrawDebugTrace::Type)DrawDebugType;
    params.OutHits = (TArray<FHitResult>)OutHits;
    params.bIgnoreSelf = (bool)bIgnoreSelf;
    params.TraceColor = (FLinearColor)TraceColor;
    params.TraceHitColor = (FLinearColor)TraceHitColor;
    params.DrawTime = (float)DrawTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ObjectTypes = params.ObjectTypes;
    OutHits = params.OutHits;
    ActorsToIgnore = params.ActorsToIgnore;
    return (bool)params.ReturnValue;
}
void UKismetSystemLibrary::EqualEqual_SoftObjectReference() {}
bool UKismetSystemLibrary::LineTraceMultiByProfile(UObject* WorldContextObject, FVector Start, FVector End, FName ProfileName, bool bTraceComplex, TArray<AActor*>& ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.LineTraceMultiByProfile"));
    struct Params_LineTraceMultiByProfile {
        UObject* WorldContextObject; // 0x0
        FVector Start; // 0x8
        FVector End; // 0x14
        FName ProfileName; // 0x20
        bool bTraceComplex; // 0x28
        char pad_29[0x7];
        TArray<AActor*> ActorsToIgnore; // 0x30
        EDrawDebugTrace::Type DrawDebugType; // 0x40
        char pad_41[0x7];
        TArray<FHitResult> OutHits; // 0x48
        bool bIgnoreSelf; // 0x58
        char pad_59[0x3];
        FLinearColor TraceColor; // 0x5c
        FLinearColor TraceHitColor; // 0x6c
        float DrawTime; // 0x7c
        bool ReturnValue; // 0x80
    }; // Size: 0x81
    Params_LineTraceMultiByProfile params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Start = (FVector)Start;
    params.End = (FVector)End;
    params.ProfileName = (FName)ProfileName;
    params.bTraceComplex = (bool)bTraceComplex;
    params.ActorsToIgnore = (TArray<AActor*>)ActorsToIgnore;
    params.DrawDebugType = (EDrawDebugTrace::Type)DrawDebugType;
    params.OutHits = (TArray<FHitResult>)OutHits;
    params.bIgnoreSelf = (bool)bIgnoreSelf;
    params.TraceColor = (FLinearColor)TraceColor;
    params.TraceHitColor = (FLinearColor)TraceHitColor;
    params.DrawTime = (float)DrawTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ActorsToIgnore = params.ActorsToIgnore;
    OutHits = params.OutHits;
    return (bool)params.ReturnValue;
}
void UKismetSystemLibrary::LaunchURLForPredeterminedContent(FString URL, FString domain) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.LaunchURLForPredeterminedContent"));
    struct Params_LaunchURLForPredeterminedContent {
        FString URL; // 0x0
        FString domain; // 0x10
    }; // Size: 0x20
    Params_LaunchURLForPredeterminedContent params{};
    params.URL = (FString)URL;
    params.domain = (FString)domain;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UKismetSystemLibrary::LaunchURL(FString URL) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.LaunchURL"));
    struct Params_LaunchURL {
        FString URL; // 0x0
    }; // Size: 0x10
    Params_LaunchURL params{};
    params.URL = (FString)URL;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UKismetSystemLibrary::K2_UnPauseTimerHandle(UObject* WorldContextObject, FTimerHandle Handle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.K2_UnPauseTimerHandle"));
    struct Params_K2_UnPauseTimerHandle {
        UObject* WorldContextObject; // 0x0
        FTimerHandle Handle; // 0x8
    }; // Size: 0x10
    Params_K2_UnPauseTimerHandle params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Handle = (FTimerHandle)Handle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UKismetSystemLibrary::K2_UnPauseTimerDelegate() {}
void UKismetSystemLibrary::K2_UnPauseTimer(UObject* Object, FString FunctionName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.K2_UnPauseTimer"));
    struct Params_K2_UnPauseTimer {
        UObject* Object; // 0x0
        FString FunctionName; // 0x8
    }; // Size: 0x18
    Params_K2_UnPauseTimer params{};
    params.Object = (UObject*)Object;
    params.FunctionName = (FString)FunctionName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UKismetSystemLibrary::IsLoggedIn(APlayerController* SpecificPlayer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.IsLoggedIn"));
    struct Params_IsLoggedIn {
        APlayerController* SpecificPlayer; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsLoggedIn params{};
    params.SpecificPlayer = (APlayerController*)SpecificPlayer;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UKismetSystemLibrary::K2_TimerExistsDelegate() {}
bool UKismetSystemLibrary::K2_TimerExists(UObject* Object, FString FunctionName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.K2_TimerExists"));
    struct Params_K2_TimerExists {
        UObject* Object; // 0x0
        FString FunctionName; // 0x8
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_K2_TimerExists params{};
    params.Object = (UObject*)Object;
    params.FunctionName = (FString)FunctionName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UKismetSystemLibrary::AsyncLoadObject() {}
float UKismetSystemLibrary::K2_GetTimerRemainingTimeHandle(UObject* WorldContextObject, FTimerHandle Handle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.K2_GetTimerRemainingTimeHandle"));
    struct Params_K2_GetTimerRemainingTimeHandle {
        UObject* WorldContextObject; // 0x0
        FTimerHandle Handle; // 0x8
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_K2_GetTimerRemainingTimeHandle params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Handle = (FTimerHandle)Handle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UKismetSystemLibrary::K2_SetTimerDelegate() {}
void UKismetSystemLibrary::K2_PauseTimerDelegate() {}
void UKismetSystemLibrary::K2_PauseTimer(UObject* Object, FString FunctionName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.K2_PauseTimer"));
    struct Params_K2_PauseTimer {
        UObject* Object; // 0x0
        FString FunctionName; // 0x8
    }; // Size: 0x18
    Params_K2_PauseTimer params{};
    params.Object = (UObject*)Object;
    params.FunctionName = (FString)FunctionName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UKismetSystemLibrary::K2_IsValidTimerHandle(FTimerHandle Handle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.K2_IsValidTimerHandle"));
    struct Params_K2_IsValidTimerHandle {
        FTimerHandle Handle; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_K2_IsValidTimerHandle params{};
    params.Handle = (FTimerHandle)Handle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UKismetSystemLibrary::K2_IsTimerPausedDelegate() {}
bool UKismetSystemLibrary::IsServer(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.IsServer"));
    struct Params_IsServer {
        UObject* WorldContextObject; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsServer params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetSystemLibrary::K2_IsTimerPaused(UObject* Object, FString FunctionName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.K2_IsTimerPaused"));
    struct Params_K2_IsTimerPaused {
        UObject* Object; // 0x0
        FString FunctionName; // 0x8
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_K2_IsTimerPaused params{};
    params.Object = (UObject*)Object;
    params.FunctionName = (FString)FunctionName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetSystemLibrary::K2_IsTimerActiveHandle(UObject* WorldContextObject, FTimerHandle Handle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.K2_IsTimerActiveHandle"));
    struct Params_K2_IsTimerActiveHandle {
        UObject* WorldContextObject; // 0x0
        FTimerHandle Handle; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_K2_IsTimerActiveHandle params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Handle = (FTimerHandle)Handle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UKismetSystemLibrary::GetPlatformUserDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetPlatformUserDir"));
    struct Params_GetPlatformUserDir {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetPlatformUserDir params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UKismetSystemLibrary::K2_IsTimerActiveDelegate() {}
bool UKismetSystemLibrary::ComponentOverlapComponents(UPrimitiveComponent* Component, FTransform& ComponentTransform, TArray<EObjectTypeQuery>& ObjectTypes, UClass* ComponentClassFilter, TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.ComponentOverlapComponents"));
    struct Params_ComponentOverlapComponents {
        UPrimitiveComponent* Component; // 0x0
        char pad_8[0x8];
        FTransform ComponentTransform; // 0x10
        TArray<EObjectTypeQuery> ObjectTypes; // 0x40
        UClass* ComponentClassFilter; // 0x50
        TArray<AActor*> ActorsToIgnore; // 0x58
        TArray<UPrimitiveComponent*> OutComponents; // 0x68
        bool ReturnValue; // 0x78
    }; // Size: 0x79
    Params_ComponentOverlapComponents params{};
    params.Component = (UPrimitiveComponent*)Component;
    params.ComponentTransform = (FTransform)ComponentTransform;
    params.ObjectTypes = (TArray<EObjectTypeQuery>)ObjectTypes;
    params.ComponentClassFilter = (UClass*)ComponentClassFilter;
    params.ActorsToIgnore = (TArray<AActor*>)ActorsToIgnore;
    params.OutComponents = (TArray<UPrimitiveComponent*>)OutComponents;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ComponentTransform = params.ComponentTransform;
    ObjectTypes = params.ObjectTypes;
    ActorsToIgnore = params.ActorsToIgnore;
    OutComponents = params.OutComponents;
    return (bool)params.ReturnValue;
}
bool UKismetSystemLibrary::K2_IsTimerActive(UObject* Object, FString FunctionName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.K2_IsTimerActive"));
    struct Params_K2_IsTimerActive {
        UObject* Object; // 0x0
        FString FunctionName; // 0x8
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_K2_IsTimerActive params{};
    params.Object = (UObject*)Object;
    params.FunctionName = (FString)FunctionName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UKismetSystemLibrary::Conv_SoftClassPathToSoftClassRef(FSoftClassPath& SoftClassPath) {}
void UKismetSystemLibrary::Conv_SoftClassReferenceToClass() {}
void UKismetSystemLibrary::K2_GetTimerRemainingTimeDelegate() {}
int32_t UKismetSystemLibrary::GetRenderingDetailMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetRenderingDetailMode"));
    struct Params_GetRenderingDetailMode {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetRenderingDetailMode params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
float UKismetSystemLibrary::K2_GetTimerRemainingTime(UObject* Object, FString FunctionName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.K2_GetTimerRemainingTime"));
    struct Params_K2_GetTimerRemainingTime {
        UObject* Object; // 0x0
        FString FunctionName; // 0x8
        float ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_K2_GetTimerRemainingTime params{};
    params.Object = (UObject*)Object;
    params.FunctionName = (FString)FunctionName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UKismetSystemLibrary::K2_GetTimerElapsedTimeHandle(UObject* WorldContextObject, FTimerHandle Handle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.K2_GetTimerElapsedTimeHandle"));
    struct Params_K2_GetTimerElapsedTimeHandle {
        UObject* WorldContextObject; // 0x0
        FTimerHandle Handle; // 0x8
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_K2_GetTimerElapsedTimeHandle params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Handle = (FTimerHandle)Handle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UKismetSystemLibrary::K2_GetTimerElapsedTimeDelegate() {}
float UKismetSystemLibrary::K2_GetTimerElapsedTime(UObject* Object, FString FunctionName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.K2_GetTimerElapsedTime"));
    struct Params_K2_GetTimerElapsedTime {
        UObject* Object; // 0x0
        FString FunctionName; // 0x8
        float ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_K2_GetTimerElapsedTime params{};
    params.Object = (UObject*)Object;
    params.FunctionName = (FString)FunctionName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UKismetSystemLibrary::K2_ClearTimerHandle(UObject* WorldContextObject, FTimerHandle Handle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.K2_ClearTimerHandle"));
    struct Params_K2_ClearTimerHandle {
        UObject* WorldContextObject; // 0x0
        FTimerHandle Handle; // 0x8
    }; // Size: 0x10
    Params_K2_ClearTimerHandle params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Handle = (FTimerHandle)Handle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UKismetSystemLibrary::IsScreensaverEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.IsScreensaverEnabled"));
    struct Params_IsScreensaverEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsScreensaverEnabled params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UKismetSystemLibrary::K2_ClearTimerDelegate() {}
void UKismetSystemLibrary::K2_ClearTimer(UObject* Object, FString FunctionName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.K2_ClearTimer"));
    struct Params_K2_ClearTimer {
        UObject* Object; // 0x0
        FString FunctionName; // 0x8
    }; // Size: 0x18
    Params_K2_ClearTimer params{};
    params.Object = (UObject*)Object;
    params.FunctionName = (FString)FunctionName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FString UKismetSystemLibrary::GetGamepadControllerName(int32_t ControllerId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetGamepadControllerName"));
    struct Params_GetGamepadControllerName {
        int32_t ControllerId; // 0x0
        char pad_4[0x4];
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetGamepadControllerName params{};
    params.ControllerId = (int32_t)ControllerId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UKismetSystemLibrary::K2_ClearAndInvalidateTimerHandle(UObject* WorldContextObject, FTimerHandle& Handle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.K2_ClearAndInvalidateTimerHandle"));
    struct Params_K2_ClearAndInvalidateTimerHandle {
        UObject* WorldContextObject; // 0x0
        FTimerHandle Handle; // 0x8
    }; // Size: 0x10
    Params_K2_ClearAndInvalidateTimerHandle params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Handle = (FTimerHandle)Handle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Handle = params.Handle;
}
void UKismetSystemLibrary::IsValidSoftObjectReference() {}
bool UKismetSystemLibrary::IsValidPrimaryAssetId(FPrimaryAssetId PrimaryAssetId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.IsValidPrimaryAssetId"));
    struct Params_IsValidPrimaryAssetId {
        FPrimaryAssetId PrimaryAssetId; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsValidPrimaryAssetId params{};
    params.PrimaryAssetId = (FPrimaryAssetId)PrimaryAssetId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetSystemLibrary::IsValid(UObject* Object) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.IsValid"));
    struct Params_IsValid {
        UObject* Object; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsValid params{};
    params.Object = (UObject*)Object;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetSystemLibrary::IsUnattended() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.IsUnattended"));
    struct Params_IsUnattended {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsUnattended params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UKismetSystemLibrary::GetLocalCurrencySymbol() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetLocalCurrencySymbol"));
    struct Params_GetLocalCurrencySymbol {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetLocalCurrencySymbol params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
bool UKismetSystemLibrary::IsStandalone(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.IsStandalone"));
    struct Params_IsStandalone {
        UObject* WorldContextObject; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsStandalone params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetSystemLibrary::IsPackagedForDistribution() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.IsPackagedForDistribution"));
    struct Params_IsPackagedForDistribution {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPackagedForDistribution params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetSystemLibrary::IsInterstitialAdRequested() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.IsInterstitialAdRequested"));
    struct Params_IsInterstitialAdRequested {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInterstitialAdRequested params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetSystemLibrary::IsDedicatedServer(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.IsDedicatedServer"));
    struct Params_IsDedicatedServer {
        UObject* WorldContextObject; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsDedicatedServer params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetSystemLibrary::IsControllerAssignedToGamepad(int32_t ControllerId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.IsControllerAssignedToGamepad"));
    struct Params_IsControllerAssignedToGamepad {
        int32_t ControllerId; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_IsControllerAssignedToGamepad params{};
    params.ControllerId = (int32_t)ControllerId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UKismetSystemLibrary::HideAdBanner() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.HideAdBanner"));
    struct Params_HideAdBanner {
    }; // Size: 0x0
    Params_HideAdBanner params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UKismetSystemLibrary::GetWaterHeight(UObject* WorldContextObject, EDrawDebugTrace::Type DrawDebugType, FHitResult& OutHit, FVector QueryPosition, float SearchUp, float SearchDown, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetWaterHeight"));
    struct Params_GetWaterHeight {
        UObject* WorldContextObject; // 0x0
        EDrawDebugTrace::Type DrawDebugType; // 0x8
        char pad_9[0x3];
        FHitResult OutHit; // 0xc
        FVector QueryPosition; // 0x94
        float SearchUp; // 0xa0
        float SearchDown; // 0xa4
        bool bIgnoreSelf; // 0xa8
        char pad_a9[0x3];
        FLinearColor TraceColor; // 0xac
        FLinearColor TraceHitColor; // 0xbc
        float DrawTime; // 0xcc
        bool ReturnValue; // 0xd0
    }; // Size: 0xd1
    Params_GetWaterHeight params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.DrawDebugType = (EDrawDebugTrace::Type)DrawDebugType;
    params.OutHit = (FHitResult)OutHit;
    params.QueryPosition = (FVector)QueryPosition;
    params.SearchUp = (float)SearchUp;
    params.SearchDown = (float)SearchDown;
    params.bIgnoreSelf = (bool)bIgnoreSelf;
    params.TraceColor = (FLinearColor)TraceColor;
    params.TraceHitColor = (FLinearColor)TraceHitColor;
    params.DrawTime = (float)DrawTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutHit = params.OutHit;
    return (bool)params.ReturnValue;
}
void UKismetSystemLibrary::DrawDebugConeInDegrees(UObject* WorldContextObject, FVector Origin, FVector Direction, float Length, float AngleWidth, float AngleHeight, int32_t NumSides, FLinearColor LineColor, float Duration, float Thickness) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.DrawDebugConeInDegrees"));
    struct Params_DrawDebugConeInDegrees {
        UObject* WorldContextObject; // 0x0
        FVector Origin; // 0x8
        FVector Direction; // 0x14
        float Length; // 0x20
        float AngleWidth; // 0x24
        float AngleHeight; // 0x28
        int32_t NumSides; // 0x2c
        FLinearColor LineColor; // 0x30
        float Duration; // 0x40
        float Thickness; // 0x44
    }; // Size: 0x48
    Params_DrawDebugConeInDegrees params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Origin = (FVector)Origin;
    params.Direction = (FVector)Direction;
    params.Length = (float)Length;
    params.AngleWidth = (float)AngleWidth;
    params.AngleHeight = (float)AngleHeight;
    params.NumSides = (int32_t)NumSides;
    params.LineColor = (FLinearColor)LineColor;
    params.Duration = (float)Duration;
    params.Thickness = (float)Thickness;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UKismetSystemLibrary::FlushPersistentDebugLines(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.FlushPersistentDebugLines"));
    struct Params_FlushPersistentDebugLines {
        UObject* WorldContextObject; // 0x0
    }; // Size: 0x8
    Params_FlushPersistentDebugLines params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UKismetSystemLibrary::GetVolumeButtonsHandledBySystem() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetVolumeButtonsHandledBySystem"));
    struct Params_GetVolumeButtonsHandledBySystem {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetVolumeButtonsHandledBySystem params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UKismetSystemLibrary::GetUniqueDeviceId() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetUniqueDeviceId"));
    struct Params_GetUniqueDeviceId {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetUniqueDeviceId params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UKismetSystemLibrary::GetSystemPath(UObject* Object) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetSystemPath"));
    struct Params_GetSystemPath {
        UObject* Object; // 0x0
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetSystemPath params{};
    params.Object = (UObject*)Object;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
bool UKismetSystemLibrary::GetSupportedFullscreenResolutions(TArray<FIntPoint>& Resolutions) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetSupportedFullscreenResolutions"));
    struct Params_GetSupportedFullscreenResolutions {
        TArray<FIntPoint> Resolutions; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetSupportedFullscreenResolutions params{};
    params.Resolutions = (TArray<FIntPoint>)Resolutions;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Resolutions = params.Resolutions;
    return (bool)params.ReturnValue;
}
void UKismetSystemLibrary::GetSoftClassReferenceFromPrimaryAssetId(FPrimaryAssetId PrimaryAssetId) {}
int32_t UKismetSystemLibrary::GetRenderingMaterialQualityLevel() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetRenderingMaterialQualityLevel"));
    struct Params_GetRenderingMaterialQualityLevel {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetRenderingMaterialQualityLevel params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UKismetSystemLibrary::DelayWorld(UWorld* World, float Duration, FLatentActionInfo LatentInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.DelayWorld"));
    struct Params_DelayWorld {
        UWorld* World; // 0x0
        float Duration; // 0x8
        char pad_c[0x4];
        FLatentActionInfo LatentInfo; // 0x10
    }; // Size: 0x28
    Params_DelayWorld params{};
    params.World = (UWorld*)World;
    params.Duration = (float)Duration;
    params.LatentInfo = (FLatentActionInfo)LatentInfo;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UKismetSystemLibrary::DrawDebugCapsule(UObject* WorldContextObject, FVector Center, float HalfHeight, float Radius, FRotator Rotation, FLinearColor LineColor, float Duration, float Thickness) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.DrawDebugCapsule"));
    struct Params_DrawDebugCapsule {
        UObject* WorldContextObject; // 0x0
        FVector Center; // 0x8
        float HalfHeight; // 0x14
        float Radius; // 0x18
        FRotator Rotation; // 0x1c
        FLinearColor LineColor; // 0x28
        float Duration; // 0x38
        float Thickness; // 0x3c
    }; // Size: 0x40
    Params_DrawDebugCapsule params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Center = (FVector)Center;
    params.HalfHeight = (float)HalfHeight;
    params.Radius = (float)Radius;
    params.Rotation = (FRotator)Rotation;
    params.LineColor = (FLinearColor)LineColor;
    params.Duration = (float)Duration;
    params.Thickness = (float)Thickness;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FString UKismetSystemLibrary::GetProjectSavedDirectory() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetProjectSavedDirectory"));
    struct Params_GetProjectSavedDirectory {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetProjectSavedDirectory params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UKismetSystemLibrary::GetProjectContentDirectory() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetProjectContentDirectory"));
    struct Params_GetProjectContentDirectory {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetProjectContentDirectory params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UKismetSystemLibrary::GetPrimaryAssetsWithBundleState(TArray<FName>& RequiredBundles, TArray<FName>& ExcludedBundles, TArray<FPrimaryAssetType>& ValidTypes, bool bForceCurrentState, TArray<FPrimaryAssetId>& OutPrimaryAssetIdList) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetPrimaryAssetsWithBundleState"));
    struct Params_GetPrimaryAssetsWithBundleState {
        TArray<FName> RequiredBundles; // 0x0
        TArray<FName> ExcludedBundles; // 0x10
        TArray<FPrimaryAssetType> ValidTypes; // 0x20
        bool bForceCurrentState; // 0x30
        char pad_31[0x7];
        TArray<FPrimaryAssetId> OutPrimaryAssetIdList; // 0x38
    }; // Size: 0x48
    Params_GetPrimaryAssetsWithBundleState params{};
    params.RequiredBundles = (TArray<FName>)RequiredBundles;
    params.ExcludedBundles = (TArray<FName>)ExcludedBundles;
    params.ValidTypes = (TArray<FPrimaryAssetType>)ValidTypes;
    params.bForceCurrentState = (bool)bForceCurrentState;
    params.OutPrimaryAssetIdList = (TArray<FPrimaryAssetId>)OutPrimaryAssetIdList;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutPrimaryAssetIdList = params.OutPrimaryAssetIdList;
    RequiredBundles = params.RequiredBundles;
    ExcludedBundles = params.ExcludedBundles;
    ValidTypes = params.ValidTypes;
}
void UKismetSystemLibrary::GetPrimaryAssetIdList(FPrimaryAssetType PrimaryAssetType, TArray<FPrimaryAssetId>& OutPrimaryAssetIdList) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetPrimaryAssetIdList"));
    struct Params_GetPrimaryAssetIdList {
        FPrimaryAssetType PrimaryAssetType; // 0x0
        TArray<FPrimaryAssetId> OutPrimaryAssetIdList; // 0x8
    }; // Size: 0x18
    Params_GetPrimaryAssetIdList params{};
    params.PrimaryAssetType = (FPrimaryAssetType)PrimaryAssetType;
    params.OutPrimaryAssetIdList = (TArray<FPrimaryAssetId>)OutPrimaryAssetIdList;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutPrimaryAssetIdList = params.OutPrimaryAssetIdList;
}
void UKismetSystemLibrary::GetPrimaryAssetIdFromSoftObjectReference() {}
FPrimaryAssetId UKismetSystemLibrary::GetPrimaryAssetIdFromObject(UObject* Object) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetPrimaryAssetIdFromObject"));
    struct Params_GetPrimaryAssetIdFromObject {
        UObject* Object; // 0x0
        FPrimaryAssetId ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetPrimaryAssetIdFromObject params{};
    params.Object = (UObject*)Object;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FPrimaryAssetId)params.ReturnValue;
}
FPrimaryAssetId UKismetSystemLibrary::GetPrimaryAssetIdFromClass(UClass* Class) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetPrimaryAssetIdFromClass"));
    struct Params_GetPrimaryAssetIdFromClass {
        UClass* Class; // 0x0
        FPrimaryAssetId ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetPrimaryAssetIdFromClass params{};
    params.Class = (UClass*)Class;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FPrimaryAssetId)params.ReturnValue;
}
FString UKismetSystemLibrary::GetLocalCurrencyCode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetLocalCurrencyCode"));
    struct Params_GetLocalCurrencyCode {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetLocalCurrencyCode params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
TArray<FString> UKismetSystemLibrary::GetPreferredLanguages() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetPreferredLanguages"));
    struct Params_GetPreferredLanguages {
        TArray<FString> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetPreferredLanguages params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FString>)params.ReturnValue;
}
void UKismetSystemLibrary::DrawDebugArrow(UObject* WorldContextObject, FVector LineStart, FVector LineEnd, float ArrowSize, FLinearColor LineColor, float Duration, float Thickness) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.DrawDebugArrow"));
    struct Params_DrawDebugArrow {
        UObject* WorldContextObject; // 0x0
        FVector LineStart; // 0x8
        FVector LineEnd; // 0x14
        float ArrowSize; // 0x20
        FLinearColor LineColor; // 0x24
        float Duration; // 0x34
        float Thickness; // 0x38
    }; // Size: 0x3c
    Params_DrawDebugArrow params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.LineStart = (FVector)LineStart;
    params.LineEnd = (FVector)LineEnd;
    params.ArrowSize = (float)ArrowSize;
    params.LineColor = (FLinearColor)LineColor;
    params.Duration = (float)Duration;
    params.Thickness = (float)Thickness;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FString UKismetSystemLibrary::GetPlatformUserName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetPlatformUserName"));
    struct Params_GetPlatformUserName {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetPlatformUserName params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
int64_t UKismetSystemLibrary::GetFrameCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetFrameCount"));
    struct Params_GetFrameCount {
        int64_t ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetFrameCount params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int64_t)params.ReturnValue;
}
FString UKismetSystemLibrary::GetPathName(UObject* Object) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetPathName"));
    struct Params_GetPathName {
        UObject* Object; // 0x0
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetPathName params{};
    params.Object = (UObject*)Object;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UKismetSystemLibrary::GetObjectName(UObject* Object) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetObjectName"));
    struct Params_GetObjectName {
        UObject* Object; // 0x0
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetObjectName params{};
    params.Object = (UObject*)Object;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UKismetSystemLibrary::DrawDebugString(UObject* WorldContextObject, FVector TextLocation, FString Text, AActor* TestBaseActor, FLinearColor TextColor, float Duration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.DrawDebugString"));
    struct Params_DrawDebugString {
        UObject* WorldContextObject; // 0x0
        FVector TextLocation; // 0x8
        char pad_14[0x4];
        FString Text; // 0x18
        AActor* TestBaseActor; // 0x28
        FLinearColor TextColor; // 0x30
        float Duration; // 0x40
    }; // Size: 0x44
    Params_DrawDebugString params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.TextLocation = (FVector)TextLocation;
    params.Text = (FString)Text;
    params.TestBaseActor = (AActor*)TestBaseActor;
    params.TextColor = (FLinearColor)TextColor;
    params.Duration = (float)Duration;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UObject* UKismetSystemLibrary::GetObjectFromPrimaryAssetId(FPrimaryAssetId PrimaryAssetId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetObjectFromPrimaryAssetId"));
    struct Params_GetObjectFromPrimaryAssetId {
        FPrimaryAssetId PrimaryAssetId; // 0x0
        UObject* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetObjectFromPrimaryAssetId params{};
    params.PrimaryAssetId = (FPrimaryAssetId)PrimaryAssetId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UObject*)params.ReturnValue;
}
float UKismetSystemLibrary::GetGameTimeInSeconds(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetGameTimeInSeconds"));
    struct Params_GetGameTimeInSeconds {
        UObject* WorldContextObject; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetGameTimeInSeconds params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UTexture2D* UKismetSystemLibrary::GetGamepadButtonGlyph(FString ButtonKey, int32_t ControllerIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetGamepadButtonGlyph"));
    struct Params_GetGamepadButtonGlyph {
        FString ButtonKey; // 0x0
        int32_t ControllerIndex; // 0x10
        char pad_14[0x4];
        UTexture2D* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_GetGamepadButtonGlyph params{};
    params.ButtonKey = (FString)ButtonKey;
    params.ControllerIndex = (int32_t)ControllerIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UTexture2D*)params.ReturnValue;
}
bool UKismetSystemLibrary::GetConvenientWindowedResolutions(TArray<FIntPoint>& Resolutions) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetConvenientWindowedResolutions"));
    struct Params_GetConvenientWindowedResolutions {
        TArray<FIntPoint> Resolutions; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetConvenientWindowedResolutions params{};
    params.Resolutions = (TArray<FIntPoint>)Resolutions;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Resolutions = params.Resolutions;
    return (bool)params.ReturnValue;
}
FString UKismetSystemLibrary::GetGameName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetGameName"));
    struct Params_GetGameName {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetGameName params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UKismetSystemLibrary::GetGameBundleId() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetGameBundleId"));
    struct Params_GetGameBundleId {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetGameBundleId params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UKismetSystemLibrary::GetEngineVersion() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetEngineVersion"));
    struct Params_GetEngineVersion {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetEngineVersion params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UKismetSystemLibrary::GetDisplayName(UObject* Object) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetDisplayName"));
    struct Params_GetDisplayName {
        UObject* Object; // 0x0
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetDisplayName params{};
    params.Object = (UObject*)Object;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UKismetSystemLibrary::GetDefaultLocale() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetDefaultLocale"));
    struct Params_GetDefaultLocale {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetDefaultLocale params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UKismetSystemLibrary::GetDefaultLanguage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetDefaultLanguage"));
    struct Params_GetDefaultLanguage {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetDefaultLanguage params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
bool UKismetSystemLibrary::BoxTraceSingle(UObject* WorldContextObject, FVector Start, FVector End, FVector HalfSize, FRotator Orientation, ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<AActor*>& ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.BoxTraceSingle"));
    struct Params_BoxTraceSingle {
        UObject* WorldContextObject; // 0x0
        FVector Start; // 0x8
        FVector End; // 0x14
        FVector HalfSize; // 0x20
        FRotator Orientation; // 0x2c
        ETraceTypeQuery TraceChannel; // 0x38
        bool bTraceComplex; // 0x39
        char pad_3a[0x6];
        TArray<AActor*> ActorsToIgnore; // 0x40
        EDrawDebugTrace::Type DrawDebugType; // 0x50
        char pad_51[0x3];
        FHitResult OutHit; // 0x54
        bool bIgnoreSelf; // 0xdc
        char pad_dd[0x3];
        FLinearColor TraceColor; // 0xe0
        FLinearColor TraceHitColor; // 0xf0
        float DrawTime; // 0x100
        bool ReturnValue; // 0x104
    }; // Size: 0x105
    Params_BoxTraceSingle params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Start = (FVector)Start;
    params.End = (FVector)End;
    params.HalfSize = (FVector)HalfSize;
    params.Orientation = (FRotator)Orientation;
    params.TraceChannel = (ETraceTypeQuery)TraceChannel;
    params.bTraceComplex = (bool)bTraceComplex;
    params.ActorsToIgnore = (TArray<AActor*>)ActorsToIgnore;
    params.DrawDebugType = (EDrawDebugTrace::Type)DrawDebugType;
    params.OutHit = (FHitResult)OutHit;
    params.bIgnoreSelf = (bool)bIgnoreSelf;
    params.TraceColor = (FLinearColor)TraceColor;
    params.TraceHitColor = (FLinearColor)TraceHitColor;
    params.DrawTime = (float)DrawTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutHit = params.OutHit;
    ActorsToIgnore = params.ActorsToIgnore;
    return (bool)params.ReturnValue;
}
bool UKismetSystemLibrary::GetCurrentBundleState(FPrimaryAssetId PrimaryAssetId, bool bForceCurrentState, TArray<FName>& OutBundles) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetCurrentBundleState"));
    struct Params_GetCurrentBundleState {
        FPrimaryAssetId PrimaryAssetId; // 0x0
        bool bForceCurrentState; // 0x10
        char pad_11[0x7];
        TArray<FName> OutBundles; // 0x18
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_GetCurrentBundleState params{};
    params.PrimaryAssetId = (FPrimaryAssetId)PrimaryAssetId;
    params.bForceCurrentState = (bool)bForceCurrentState;
    params.OutBundles = (TArray<FName>)OutBundles;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutBundles = params.OutBundles;
    return (bool)params.ReturnValue;
}
int32_t UKismetSystemLibrary::GetConsoleVariableIntValue(FString VariableName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetConsoleVariableIntValue"));
    struct Params_GetConsoleVariableIntValue {
        FString VariableName; // 0x0
        int32_t ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetConsoleVariableIntValue params{};
    params.VariableName = (FString)VariableName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
float UKismetSystemLibrary::GetConsoleVariableFloatValue(FString VariableName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetConsoleVariableFloatValue"));
    struct Params_GetConsoleVariableFloatValue {
        FString VariableName; // 0x0
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetConsoleVariableFloatValue params{};
    params.VariableName = (FString)VariableName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UKismetSystemLibrary::FlushDebugStrings(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.FlushDebugStrings"));
    struct Params_FlushDebugStrings {
        UObject* WorldContextObject; // 0x0
    }; // Size: 0x8
    Params_FlushDebugStrings params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UKismetSystemLibrary::GetConsoleVariableBoolValue(FString VariableName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetConsoleVariableBoolValue"));
    struct Params_GetConsoleVariableBoolValue {
        FString VariableName; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetConsoleVariableBoolValue params{};
    params.VariableName = (FString)VariableName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UKismetSystemLibrary::EndTransaction() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.EndTransaction"));
    struct Params_EndTransaction {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_EndTransaction params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UKismetSystemLibrary::GetComponentBounds(USceneComponent* Component, FVector& Origin, FVector& BoxExtent, float& SphereRadius) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetComponentBounds"));
    struct Params_GetComponentBounds {
        USceneComponent* Component; // 0x0
        FVector Origin; // 0x8
        FVector BoxExtent; // 0x14
        float SphereRadius; // 0x20
    }; // Size: 0x24
    Params_GetComponentBounds params{};
    params.Component = (USceneComponent*)Component;
    params.Origin = (FVector)Origin;
    params.BoxExtent = (FVector)BoxExtent;
    params.SphereRadius = (float)SphereRadius;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Origin = params.Origin;
    BoxExtent = params.BoxExtent;
    SphereRadius = params.SphereRadius;
}
FString UKismetSystemLibrary::GetCommandLine() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetCommandLine"));
    struct Params_GetCommandLine {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetCommandLine params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
UClass* UKismetSystemLibrary::GetClassFromPrimaryAssetId(FPrimaryAssetId PrimaryAssetId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetClassFromPrimaryAssetId"));
    struct Params_GetClassFromPrimaryAssetId {
        FPrimaryAssetId PrimaryAssetId; // 0x0
        UClass* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetClassFromPrimaryAssetId params{};
    params.PrimaryAssetId = (FPrimaryAssetId)PrimaryAssetId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UClass*)params.ReturnValue;
}
FString UKismetSystemLibrary::GetClassDisplayName(UClass* Class) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetClassDisplayName"));
    struct Params_GetClassDisplayName {
        UClass* Class; // 0x0
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetClassDisplayName params{};
    params.Class = (UClass*)Class;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UKismetSystemLibrary::Conv_ObjectToSoftObjectReference(UObject* Object) {}
int32_t UKismetSystemLibrary::GetAdIDCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetAdIDCount"));
    struct Params_GetAdIDCount {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetAdIDCount params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UKismetSystemLibrary::GetActorBounds(AActor* Actor, FVector& Origin, FVector& BoxExtent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.GetActorBounds"));
    struct Params_GetActorBounds {
        AActor* Actor; // 0x0
        FVector Origin; // 0x8
        FVector BoxExtent; // 0x14
    }; // Size: 0x20
    Params_GetActorBounds params{};
    params.Actor = (AActor*)Actor;
    params.Origin = (FVector)Origin;
    params.BoxExtent = (FVector)BoxExtent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Origin = params.Origin;
    BoxExtent = params.BoxExtent;
}
void UKismetSystemLibrary::Conv_SoftObjectReferenceToObject() {}
void UKismetSystemLibrary::ForceCloseAdBanner() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.ForceCloseAdBanner"));
    struct Params_ForceCloseAdBanner {
    }; // Size: 0x0
    Params_ForceCloseAdBanner params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UKismetSystemLibrary::EqualEqual_SoftClassReference() {}
bool UKismetSystemLibrary::EqualEqual_PrimaryAssetType(FPrimaryAssetType A, FPrimaryAssetType B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.EqualEqual_PrimaryAssetType"));
    struct Params_EqualEqual_PrimaryAssetType {
        FPrimaryAssetType A; // 0x0
        FPrimaryAssetType B; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_EqualEqual_PrimaryAssetType params{};
    params.A = (FPrimaryAssetType)A;
    params.B = (FPrimaryAssetType)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UKismetSystemLibrary::DrawDebugSphere(UObject* WorldContextObject, FVector Center, float Radius, int32_t Segments, FLinearColor LineColor, float Duration, float Thickness) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.DrawDebugSphere"));
    struct Params_DrawDebugSphere {
        UObject* WorldContextObject; // 0x0
        FVector Center; // 0x8
        float Radius; // 0x14
        int32_t Segments; // 0x18
        FLinearColor LineColor; // 0x1c
        float Duration; // 0x2c
        float Thickness; // 0x30
    }; // Size: 0x34
    Params_DrawDebugSphere params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Center = (FVector)Center;
    params.Radius = (float)Radius;
    params.Segments = (int32_t)Segments;
    params.LineColor = (FLinearColor)LineColor;
    params.Duration = (float)Duration;
    params.Thickness = (float)Thickness;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UKismetSystemLibrary::DrawDebugPoint(UObject* WorldContextObject, FVector Position, float Size, FLinearColor PointColor, float Duration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.DrawDebugPoint"));
    struct Params_DrawDebugPoint {
        UObject* WorldContextObject; // 0x0
        FVector Position; // 0x8
        float Size; // 0x14
        FLinearColor PointColor; // 0x18
        float Duration; // 0x28
    }; // Size: 0x2c
    Params_DrawDebugPoint params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Position = (FVector)Position;
    params.Size = (float)Size;
    params.PointColor = (FLinearColor)PointColor;
    params.Duration = (float)Duration;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UKismetSystemLibrary::DrawDebugPlane(UObject* WorldContextObject, FPlane& PlaneCoordinates, FVector Location, float Size, FLinearColor PlaneColor, float Duration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.DrawDebugPlane"));
    struct Params_DrawDebugPlane {
        UObject* WorldContextObject; // 0x0
        char pad_8[0x8];
        FPlane PlaneCoordinates; // 0x10
        FVector Location; // 0x20
        float Size; // 0x2c
        FLinearColor PlaneColor; // 0x30
        float Duration; // 0x40
    }; // Size: 0x44
    Params_DrawDebugPlane params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PlaneCoordinates = (FPlane)PlaneCoordinates;
    params.Location = (FVector)Location;
    params.Size = (float)Size;
    params.PlaneColor = (FLinearColor)PlaneColor;
    params.Duration = (float)Duration;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    PlaneCoordinates = params.PlaneCoordinates;
}
void UKismetSystemLibrary::DrawDebugLine(UObject* WorldContextObject, FVector LineStart, FVector LineEnd, FLinearColor LineColor, float Duration, float Thickness) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.DrawDebugLine"));
    struct Params_DrawDebugLine {
        UObject* WorldContextObject; // 0x0
        FVector LineStart; // 0x8
        FVector LineEnd; // 0x14
        FLinearColor LineColor; // 0x20
        float Duration; // 0x30
        float Thickness; // 0x34
    }; // Size: 0x38
    Params_DrawDebugLine params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.LineStart = (FVector)LineStart;
    params.LineEnd = (FVector)LineEnd;
    params.LineColor = (FLinearColor)LineColor;
    params.Duration = (float)Duration;
    params.Thickness = (float)Thickness;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UKismetSystemLibrary::DrawDebugFrustum(UObject* WorldContextObject, FTransform& FrustumTransform, FLinearColor FrustumColor, float Duration, float Thickness) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.DrawDebugFrustum"));
    struct Params_DrawDebugFrustum {
        UObject* WorldContextObject; // 0x0
        char pad_8[0x8];
        FTransform FrustumTransform; // 0x10
        FLinearColor FrustumColor; // 0x40
        float Duration; // 0x50
        float Thickness; // 0x54
    }; // Size: 0x58
    Params_DrawDebugFrustum params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.FrustumTransform = (FTransform)FrustumTransform;
    params.FrustumColor = (FLinearColor)FrustumColor;
    params.Duration = (float)Duration;
    params.Thickness = (float)Thickness;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FrustumTransform = params.FrustumTransform;
}
void UKismetSystemLibrary::DrawDebugFloatHistoryLocation(UObject* WorldContextObject, FDebugFloatHistory& FloatHistory, FVector DrawLocation, FVector2D DrawSize, FLinearColor DrawColor, float Duration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.DrawDebugFloatHistoryLocation"));
    struct Params_DrawDebugFloatHistoryLocation {
        UObject* WorldContextObject; // 0x0
        FDebugFloatHistory FloatHistory; // 0x8
        FVector DrawLocation; // 0x28
        FVector2D DrawSize; // 0x34
        FLinearColor DrawColor; // 0x3c
        float Duration; // 0x4c
    }; // Size: 0x50
    Params_DrawDebugFloatHistoryLocation params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.FloatHistory = (FDebugFloatHistory)FloatHistory;
    params.DrawLocation = (FVector)DrawLocation;
    params.DrawSize = (FVector2D)DrawSize;
    params.DrawColor = (FLinearColor)DrawColor;
    params.Duration = (float)Duration;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FloatHistory = params.FloatHistory;
}
bool UKismetSystemLibrary::CapsuleOverlapActors(UObject* WorldContextObject, FVector CapsulePos, float Radius, float HalfHeight, TArray<EObjectTypeQuery>& ObjectTypes, UClass* ActorClassFilter, TArray<AActor*>& ActorsToIgnore, TArray<AActor*>& OutActors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.CapsuleOverlapActors"));
    struct Params_CapsuleOverlapActors {
        UObject* WorldContextObject; // 0x0
        FVector CapsulePos; // 0x8
        float Radius; // 0x14
        float HalfHeight; // 0x18
        char pad_1c[0x4];
        TArray<EObjectTypeQuery> ObjectTypes; // 0x20
        UClass* ActorClassFilter; // 0x30
        TArray<AActor*> ActorsToIgnore; // 0x38
        TArray<AActor*> OutActors; // 0x48
        bool ReturnValue; // 0x58
    }; // Size: 0x59
    Params_CapsuleOverlapActors params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.CapsulePos = (FVector)CapsulePos;
    params.Radius = (float)Radius;
    params.HalfHeight = (float)HalfHeight;
    params.ObjectTypes = (TArray<EObjectTypeQuery>)ObjectTypes;
    params.ActorClassFilter = (UClass*)ActorClassFilter;
    params.ActorsToIgnore = (TArray<AActor*>)ActorsToIgnore;
    params.OutActors = (TArray<AActor*>)OutActors;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ObjectTypes = params.ObjectTypes;
    OutActors = params.OutActors;
    ActorsToIgnore = params.ActorsToIgnore;
    return (bool)params.ReturnValue;
}
void UKismetSystemLibrary::DrawDebugCoordinateSystem(UObject* WorldContextObject, FVector AxisLoc, FRotator AxisRot, float Scale, float Duration, float Thickness) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.DrawDebugCoordinateSystem"));
    struct Params_DrawDebugCoordinateSystem {
        UObject* WorldContextObject; // 0x0
        FVector AxisLoc; // 0x8
        FRotator AxisRot; // 0x14
        float Scale; // 0x20
        float Duration; // 0x24
        float Thickness; // 0x28
    }; // Size: 0x2c
    Params_DrawDebugCoordinateSystem params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.AxisLoc = (FVector)AxisLoc;
    params.AxisRot = (FRotator)AxisRot;
    params.Scale = (float)Scale;
    params.Duration = (float)Duration;
    params.Thickness = (float)Thickness;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UKismetSystemLibrary::CapsuleTraceMulti(UObject* WorldContextObject, FVector Start, FVector End, float Radius, float HalfHeight, ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<AActor*>& ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.CapsuleTraceMulti"));
    struct Params_CapsuleTraceMulti {
        UObject* WorldContextObject; // 0x0
        FVector Start; // 0x8
        FVector End; // 0x14
        float Radius; // 0x20
        float HalfHeight; // 0x24
        ETraceTypeQuery TraceChannel; // 0x28
        bool bTraceComplex; // 0x29
        char pad_2a[0x6];
        TArray<AActor*> ActorsToIgnore; // 0x30
        EDrawDebugTrace::Type DrawDebugType; // 0x40
        char pad_41[0x7];
        TArray<FHitResult> OutHits; // 0x48
        bool bIgnoreSelf; // 0x58
        char pad_59[0x3];
        FLinearColor TraceColor; // 0x5c
        FLinearColor TraceHitColor; // 0x6c
        float DrawTime; // 0x7c
        bool ReturnValue; // 0x80
    }; // Size: 0x81
    Params_CapsuleTraceMulti params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Start = (FVector)Start;
    params.End = (FVector)End;
    params.Radius = (float)Radius;
    params.HalfHeight = (float)HalfHeight;
    params.TraceChannel = (ETraceTypeQuery)TraceChannel;
    params.bTraceComplex = (bool)bTraceComplex;
    params.ActorsToIgnore = (TArray<AActor*>)ActorsToIgnore;
    params.DrawDebugType = (EDrawDebugTrace::Type)DrawDebugType;
    params.OutHits = (TArray<FHitResult>)OutHits;
    params.bIgnoreSelf = (bool)bIgnoreSelf;
    params.TraceColor = (FLinearColor)TraceColor;
    params.TraceHitColor = (FLinearColor)TraceHitColor;
    params.DrawTime = (float)DrawTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ActorsToIgnore = params.ActorsToIgnore;
    OutHits = params.OutHits;
    return (bool)params.ReturnValue;
}
void UKismetSystemLibrary::DrawDebugCone(UObject* WorldContextObject, FVector Origin, FVector Direction, float Length, float AngleWidth, float AngleHeight, int32_t NumSides, FLinearColor LineColor, float Duration, float Thickness) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.DrawDebugCone"));
    struct Params_DrawDebugCone {
        UObject* WorldContextObject; // 0x0
        FVector Origin; // 0x8
        FVector Direction; // 0x14
        float Length; // 0x20
        float AngleWidth; // 0x24
        float AngleHeight; // 0x28
        int32_t NumSides; // 0x2c
        FLinearColor LineColor; // 0x30
        float Duration; // 0x40
        float Thickness; // 0x44
    }; // Size: 0x48
    Params_DrawDebugCone params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Origin = (FVector)Origin;
    params.Direction = (FVector)Direction;
    params.Length = (float)Length;
    params.AngleWidth = (float)AngleWidth;
    params.AngleHeight = (float)AngleHeight;
    params.NumSides = (int32_t)NumSides;
    params.LineColor = (FLinearColor)LineColor;
    params.Duration = (float)Duration;
    params.Thickness = (float)Thickness;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UKismetSystemLibrary::DrawDebugCircle(UObject* WorldContextObject, FVector Center, float Radius, int32_t NumSegments, FLinearColor LineColor, float Duration, float Thickness, FVector YAxis, FVector ZAxis, bool bDrawAxis) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.DrawDebugCircle"));
    struct Params_DrawDebugCircle {
        UObject* WorldContextObject; // 0x0
        FVector Center; // 0x8
        float Radius; // 0x14
        int32_t NumSegments; // 0x18
        FLinearColor LineColor; // 0x1c
        float Duration; // 0x2c
        float Thickness; // 0x30
        FVector YAxis; // 0x34
        FVector ZAxis; // 0x40
        bool bDrawAxis; // 0x4c
    }; // Size: 0x4d
    Params_DrawDebugCircle params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Center = (FVector)Center;
    params.Radius = (float)Radius;
    params.NumSegments = (int32_t)NumSegments;
    params.LineColor = (FLinearColor)LineColor;
    params.Duration = (float)Duration;
    params.Thickness = (float)Thickness;
    params.YAxis = (FVector)YAxis;
    params.ZAxis = (FVector)ZAxis;
    params.bDrawAxis = (bool)bDrawAxis;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UKismetSystemLibrary::DrawDebugCamera(ACameraActor* CameraActor, FLinearColor CameraColor, float Duration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.DrawDebugCamera"));
    struct Params_DrawDebugCamera {
        ACameraActor* CameraActor; // 0x0
        FLinearColor CameraColor; // 0x8
        float Duration; // 0x18
    }; // Size: 0x1c
    Params_DrawDebugCamera params{};
    params.CameraActor = (ACameraActor*)CameraActor;
    params.CameraColor = (FLinearColor)CameraColor;
    params.Duration = (float)Duration;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UKismetSystemLibrary::DrawDebugBox(UObject* WorldContextObject, FVector Center, FVector Extent, FLinearColor LineColor, FRotator Rotation, float Duration, float Thickness) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.DrawDebugBox"));
    struct Params_DrawDebugBox {
        UObject* WorldContextObject; // 0x0
        FVector Center; // 0x8
        FVector Extent; // 0x14
        FLinearColor LineColor; // 0x20
        FRotator Rotation; // 0x30
        float Duration; // 0x3c
        float Thickness; // 0x40
    }; // Size: 0x44
    Params_DrawDebugBox params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Center = (FVector)Center;
    params.Extent = (FVector)Extent;
    params.LineColor = (FLinearColor)LineColor;
    params.Rotation = (FRotator)Rotation;
    params.Duration = (float)Duration;
    params.Thickness = (float)Thickness;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UKismetSystemLibrary::DoesImplementInterface(UObject* TestObject, UClass* Interface) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.DoesImplementInterface"));
    struct Params_DoesImplementInterface {
        UObject* TestObject; // 0x0
        UClass* Interface; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_DoesImplementInterface params{};
    params.TestObject = (UObject*)TestObject;
    params.Interface = (UClass*)Interface;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UKismetSystemLibrary::Delay(UObject* WorldContextObject, float Duration, FLatentActionInfo LatentInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.Delay"));
    struct Params_Delay {
        UObject* WorldContextObject; // 0x0
        float Duration; // 0x8
        char pad_c[0x4];
        FLatentActionInfo LatentInfo; // 0x10
    }; // Size: 0x28
    Params_Delay params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Duration = (float)Duration;
    params.LatentInfo = (FLatentActionInfo)LatentInfo;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UKismetSystemLibrary::CreateCopyForUndoBuffer(UObject* ObjectToModify) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.CreateCopyForUndoBuffer"));
    struct Params_CreateCopyForUndoBuffer {
        UObject* ObjectToModify; // 0x0
    }; // Size: 0x8
    Params_CreateCopyForUndoBuffer params{};
    params.ObjectToModify = (UObject*)ObjectToModify;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FString UKismetSystemLibrary::ConvertToRelativePath(FString Filename) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.ConvertToRelativePath"));
    struct Params_ConvertToRelativePath {
        FString Filename; // 0x0
        FString ReturnValue; // 0x10
    }; // Size: 0x20
    Params_ConvertToRelativePath params{};
    params.Filename = (FString)Filename;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UKismetSystemLibrary::ConvertToAbsolutePath(FString Filename) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.ConvertToAbsolutePath"));
    struct Params_ConvertToAbsolutePath {
        FString Filename; // 0x0
        FString ReturnValue; // 0x10
    }; // Size: 0x20
    Params_ConvertToAbsolutePath params{};
    params.Filename = (FString)Filename;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UKismetSystemLibrary::Conv_SoftObjPathToSoftObjRef(FSoftObjectPath& SoftObjectPath) {}
void UKismetSystemLibrary::Conv_SoftObjectReferenceToString() {}
void UKismetSystemLibrary::Conv_SoftClassReferenceToString() {}
FString UKismetSystemLibrary::Conv_PrimaryAssetIdToString(FPrimaryAssetId PrimaryAssetId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.Conv_PrimaryAssetIdToString"));
    struct Params_Conv_PrimaryAssetIdToString {
        FPrimaryAssetId PrimaryAssetId; // 0x0
        FString ReturnValue; // 0x10
    }; // Size: 0x20
    Params_Conv_PrimaryAssetIdToString params{};
    params.PrimaryAssetId = (FPrimaryAssetId)PrimaryAssetId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UKismetSystemLibrary::Conv_InterfaceToObject() {}
void UKismetSystemLibrary::Conv_ClassToSoftClassReference(UClass*& Class) {}
void UKismetSystemLibrary::ControlScreensaver(bool bAllowScreenSaver) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.ControlScreensaver"));
    struct Params_ControlScreensaver {
        bool bAllowScreenSaver; // 0x0
    }; // Size: 0x1
    Params_ControlScreensaver params{};
    params.bAllowScreenSaver = (bool)bAllowScreenSaver;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UKismetSystemLibrary::ComponentOverlapActors(UPrimitiveComponent* Component, FTransform& ComponentTransform, TArray<EObjectTypeQuery>& ObjectTypes, UClass* ActorClassFilter, TArray<AActor*>& ActorsToIgnore, TArray<AActor*>& OutActors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.ComponentOverlapActors"));
    struct Params_ComponentOverlapActors {
        UPrimitiveComponent* Component; // 0x0
        char pad_8[0x8];
        FTransform ComponentTransform; // 0x10
        TArray<EObjectTypeQuery> ObjectTypes; // 0x40
        UClass* ActorClassFilter; // 0x50
        TArray<AActor*> ActorsToIgnore; // 0x58
        TArray<AActor*> OutActors; // 0x68
        bool ReturnValue; // 0x78
    }; // Size: 0x79
    Params_ComponentOverlapActors params{};
    params.Component = (UPrimitiveComponent*)Component;
    params.ComponentTransform = (FTransform)ComponentTransform;
    params.ObjectTypes = (TArray<EObjectTypeQuery>)ObjectTypes;
    params.ActorClassFilter = (UClass*)ActorClassFilter;
    params.ActorsToIgnore = (TArray<AActor*>)ActorsToIgnore;
    params.OutActors = (TArray<AActor*>)OutActors;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ComponentTransform = params.ComponentTransform;
    OutActors = params.OutActors;
    ActorsToIgnore = params.ActorsToIgnore;
    ObjectTypes = params.ObjectTypes;
    return (bool)params.ReturnValue;
}
void UKismetSystemLibrary::CollectGarbage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.CollectGarbage"));
    struct Params_CollectGarbage {
    }; // Size: 0x0
    Params_CollectGarbage params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UKismetSystemLibrary::CapsuleTraceSingleForObjects(UObject* WorldContextObject, FVector Start, FVector End, float Radius, float HalfHeight, TArray<EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, TArray<AActor*>& ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.CapsuleTraceSingleForObjects"));
    struct Params_CapsuleTraceSingleForObjects {
        UObject* WorldContextObject; // 0x0
        FVector Start; // 0x8
        FVector End; // 0x14
        float Radius; // 0x20
        float HalfHeight; // 0x24
        TArray<EObjectTypeQuery> ObjectTypes; // 0x28
        bool bTraceComplex; // 0x38
        char pad_39[0x7];
        TArray<AActor*> ActorsToIgnore; // 0x40
        EDrawDebugTrace::Type DrawDebugType; // 0x50
        char pad_51[0x3];
        FHitResult OutHit; // 0x54
        bool bIgnoreSelf; // 0xdc
        char pad_dd[0x3];
        FLinearColor TraceColor; // 0xe0
        FLinearColor TraceHitColor; // 0xf0
        float DrawTime; // 0x100
        bool ReturnValue; // 0x104
    }; // Size: 0x105
    Params_CapsuleTraceSingleForObjects params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Start = (FVector)Start;
    params.End = (FVector)End;
    params.Radius = (float)Radius;
    params.HalfHeight = (float)HalfHeight;
    params.ObjectTypes = (TArray<EObjectTypeQuery>)ObjectTypes;
    params.bTraceComplex = (bool)bTraceComplex;
    params.ActorsToIgnore = (TArray<AActor*>)ActorsToIgnore;
    params.DrawDebugType = (EDrawDebugTrace::Type)DrawDebugType;
    params.OutHit = (FHitResult)OutHit;
    params.bIgnoreSelf = (bool)bIgnoreSelf;
    params.TraceColor = (FLinearColor)TraceColor;
    params.TraceHitColor = (FLinearColor)TraceHitColor;
    params.DrawTime = (float)DrawTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ObjectTypes = params.ObjectTypes;
    ActorsToIgnore = params.ActorsToIgnore;
    OutHit = params.OutHit;
    return (bool)params.ReturnValue;
}
bool UKismetSystemLibrary::CapsuleTraceSingleByProfile(UObject* WorldContextObject, FVector Start, FVector End, float Radius, float HalfHeight, FName ProfileName, bool bTraceComplex, TArray<AActor*>& ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.CapsuleTraceSingleByProfile"));
    struct Params_CapsuleTraceSingleByProfile {
        UObject* WorldContextObject; // 0x0
        FVector Start; // 0x8
        FVector End; // 0x14
        float Radius; // 0x20
        float HalfHeight; // 0x24
        FName ProfileName; // 0x28
        bool bTraceComplex; // 0x30
        char pad_31[0x7];
        TArray<AActor*> ActorsToIgnore; // 0x38
        EDrawDebugTrace::Type DrawDebugType; // 0x48
        char pad_49[0x3];
        FHitResult OutHit; // 0x4c
        bool bIgnoreSelf; // 0xd4
        char pad_d5[0x3];
        FLinearColor TraceColor; // 0xd8
        FLinearColor TraceHitColor; // 0xe8
        float DrawTime; // 0xf8
        bool ReturnValue; // 0xfc
    }; // Size: 0xfd
    Params_CapsuleTraceSingleByProfile params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Start = (FVector)Start;
    params.End = (FVector)End;
    params.Radius = (float)Radius;
    params.HalfHeight = (float)HalfHeight;
    params.ProfileName = (FName)ProfileName;
    params.bTraceComplex = (bool)bTraceComplex;
    params.ActorsToIgnore = (TArray<AActor*>)ActorsToIgnore;
    params.DrawDebugType = (EDrawDebugTrace::Type)DrawDebugType;
    params.OutHit = (FHitResult)OutHit;
    params.bIgnoreSelf = (bool)bIgnoreSelf;
    params.TraceColor = (FLinearColor)TraceColor;
    params.TraceHitColor = (FLinearColor)TraceHitColor;
    params.DrawTime = (float)DrawTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutHit = params.OutHit;
    ActorsToIgnore = params.ActorsToIgnore;
    return (bool)params.ReturnValue;
}
bool UKismetSystemLibrary::CapsuleTraceSingle(UObject* WorldContextObject, FVector Start, FVector End, float Radius, float HalfHeight, ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<AActor*>& ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.CapsuleTraceSingle"));
    struct Params_CapsuleTraceSingle {
        UObject* WorldContextObject; // 0x0
        FVector Start; // 0x8
        FVector End; // 0x14
        float Radius; // 0x20
        float HalfHeight; // 0x24
        ETraceTypeQuery TraceChannel; // 0x28
        bool bTraceComplex; // 0x29
        char pad_2a[0x6];
        TArray<AActor*> ActorsToIgnore; // 0x30
        EDrawDebugTrace::Type DrawDebugType; // 0x40
        char pad_41[0x3];
        FHitResult OutHit; // 0x44
        bool bIgnoreSelf; // 0xcc
        char pad_cd[0x3];
        FLinearColor TraceColor; // 0xd0
        FLinearColor TraceHitColor; // 0xe0
        float DrawTime; // 0xf0
        bool ReturnValue; // 0xf4
    }; // Size: 0xf5
    Params_CapsuleTraceSingle params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Start = (FVector)Start;
    params.End = (FVector)End;
    params.Radius = (float)Radius;
    params.HalfHeight = (float)HalfHeight;
    params.TraceChannel = (ETraceTypeQuery)TraceChannel;
    params.bTraceComplex = (bool)bTraceComplex;
    params.ActorsToIgnore = (TArray<AActor*>)ActorsToIgnore;
    params.DrawDebugType = (EDrawDebugTrace::Type)DrawDebugType;
    params.OutHit = (FHitResult)OutHit;
    params.bIgnoreSelf = (bool)bIgnoreSelf;
    params.TraceColor = (FLinearColor)TraceColor;
    params.TraceHitColor = (FLinearColor)TraceHitColor;
    params.DrawTime = (float)DrawTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ActorsToIgnore = params.ActorsToIgnore;
    OutHit = params.OutHit;
    return (bool)params.ReturnValue;
}
bool UKismetSystemLibrary::CapsuleTraceMultiForObjects(UObject* WorldContextObject, FVector Start, FVector End, float Radius, float HalfHeight, TArray<EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, TArray<AActor*>& ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.CapsuleTraceMultiForObjects"));
    struct Params_CapsuleTraceMultiForObjects {
        UObject* WorldContextObject; // 0x0
        FVector Start; // 0x8
        FVector End; // 0x14
        float Radius; // 0x20
        float HalfHeight; // 0x24
        TArray<EObjectTypeQuery> ObjectTypes; // 0x28
        bool bTraceComplex; // 0x38
        char pad_39[0x7];
        TArray<AActor*> ActorsToIgnore; // 0x40
        EDrawDebugTrace::Type DrawDebugType; // 0x50
        char pad_51[0x7];
        TArray<FHitResult> OutHits; // 0x58
        bool bIgnoreSelf; // 0x68
        char pad_69[0x3];
        FLinearColor TraceColor; // 0x6c
        FLinearColor TraceHitColor; // 0x7c
        float DrawTime; // 0x8c
        bool ReturnValue; // 0x90
    }; // Size: 0x91
    Params_CapsuleTraceMultiForObjects params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Start = (FVector)Start;
    params.End = (FVector)End;
    params.Radius = (float)Radius;
    params.HalfHeight = (float)HalfHeight;
    params.ObjectTypes = (TArray<EObjectTypeQuery>)ObjectTypes;
    params.bTraceComplex = (bool)bTraceComplex;
    params.ActorsToIgnore = (TArray<AActor*>)ActorsToIgnore;
    params.DrawDebugType = (EDrawDebugTrace::Type)DrawDebugType;
    params.OutHits = (TArray<FHitResult>)OutHits;
    params.bIgnoreSelf = (bool)bIgnoreSelf;
    params.TraceColor = (FLinearColor)TraceColor;
    params.TraceHitColor = (FLinearColor)TraceHitColor;
    params.DrawTime = (float)DrawTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ObjectTypes = params.ObjectTypes;
    ActorsToIgnore = params.ActorsToIgnore;
    OutHits = params.OutHits;
    return (bool)params.ReturnValue;
}
bool UKismetSystemLibrary::CapsuleTraceMultiByProfile(UObject* WorldContextObject, FVector Start, FVector End, float Radius, float HalfHeight, FName ProfileName, bool bTraceComplex, TArray<AActor*>& ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.CapsuleTraceMultiByProfile"));
    struct Params_CapsuleTraceMultiByProfile {
        UObject* WorldContextObject; // 0x0
        FVector Start; // 0x8
        FVector End; // 0x14
        float Radius; // 0x20
        float HalfHeight; // 0x24
        FName ProfileName; // 0x28
        bool bTraceComplex; // 0x30
        char pad_31[0x7];
        TArray<AActor*> ActorsToIgnore; // 0x38
        EDrawDebugTrace::Type DrawDebugType; // 0x48
        char pad_49[0x7];
        TArray<FHitResult> OutHits; // 0x50
        bool bIgnoreSelf; // 0x60
        char pad_61[0x3];
        FLinearColor TraceColor; // 0x64
        FLinearColor TraceHitColor; // 0x74
        float DrawTime; // 0x84
        bool ReturnValue; // 0x88
    }; // Size: 0x89
    Params_CapsuleTraceMultiByProfile params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Start = (FVector)Start;
    params.End = (FVector)End;
    params.Radius = (float)Radius;
    params.HalfHeight = (float)HalfHeight;
    params.ProfileName = (FName)ProfileName;
    params.bTraceComplex = (bool)bTraceComplex;
    params.ActorsToIgnore = (TArray<AActor*>)ActorsToIgnore;
    params.DrawDebugType = (EDrawDebugTrace::Type)DrawDebugType;
    params.OutHits = (TArray<FHitResult>)OutHits;
    params.bIgnoreSelf = (bool)bIgnoreSelf;
    params.TraceColor = (FLinearColor)TraceColor;
    params.TraceHitColor = (FLinearColor)TraceHitColor;
    params.DrawTime = (float)DrawTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ActorsToIgnore = params.ActorsToIgnore;
    OutHits = params.OutHits;
    return (bool)params.ReturnValue;
}
bool UKismetSystemLibrary::CapsuleOverlapComponents(UObject* WorldContextObject, FVector CapsulePos, float Radius, float HalfHeight, TArray<EObjectTypeQuery>& ObjectTypes, UClass* ComponentClassFilter, TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.CapsuleOverlapComponents"));
    struct Params_CapsuleOverlapComponents {
        UObject* WorldContextObject; // 0x0
        FVector CapsulePos; // 0x8
        float Radius; // 0x14
        float HalfHeight; // 0x18
        char pad_1c[0x4];
        TArray<EObjectTypeQuery> ObjectTypes; // 0x20
        UClass* ComponentClassFilter; // 0x30
        TArray<AActor*> ActorsToIgnore; // 0x38
        TArray<UPrimitiveComponent*> OutComponents; // 0x48
        bool ReturnValue; // 0x58
    }; // Size: 0x59
    Params_CapsuleOverlapComponents params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.CapsulePos = (FVector)CapsulePos;
    params.Radius = (float)Radius;
    params.HalfHeight = (float)HalfHeight;
    params.ObjectTypes = (TArray<EObjectTypeQuery>)ObjectTypes;
    params.ComponentClassFilter = (UClass*)ComponentClassFilter;
    params.ActorsToIgnore = (TArray<AActor*>)ActorsToIgnore;
    params.OutComponents = (TArray<UPrimitiveComponent*>)OutComponents;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ObjectTypes = params.ObjectTypes;
    ActorsToIgnore = params.ActorsToIgnore;
    OutComponents = params.OutComponents;
    return (bool)params.ReturnValue;
}
bool UKismetSystemLibrary::BoxTraceSingleForObjects(UObject* WorldContextObject, FVector Start, FVector End, FVector HalfSize, FRotator Orientation, TArray<EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, TArray<AActor*>& ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.BoxTraceSingleForObjects"));
    struct Params_BoxTraceSingleForObjects {
        UObject* WorldContextObject; // 0x0
        FVector Start; // 0x8
        FVector End; // 0x14
        FVector HalfSize; // 0x20
        FRotator Orientation; // 0x2c
        TArray<EObjectTypeQuery> ObjectTypes; // 0x38
        bool bTraceComplex; // 0x48
        char pad_49[0x7];
        TArray<AActor*> ActorsToIgnore; // 0x50
        EDrawDebugTrace::Type DrawDebugType; // 0x60
        char pad_61[0x3];
        FHitResult OutHit; // 0x64
        bool bIgnoreSelf; // 0xec
        char pad_ed[0x3];
        FLinearColor TraceColor; // 0xf0
        FLinearColor TraceHitColor; // 0x100
        float DrawTime; // 0x110
        bool ReturnValue; // 0x114
    }; // Size: 0x115
    Params_BoxTraceSingleForObjects params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Start = (FVector)Start;
    params.End = (FVector)End;
    params.HalfSize = (FVector)HalfSize;
    params.Orientation = (FRotator)Orientation;
    params.ObjectTypes = (TArray<EObjectTypeQuery>)ObjectTypes;
    params.bTraceComplex = (bool)bTraceComplex;
    params.ActorsToIgnore = (TArray<AActor*>)ActorsToIgnore;
    params.DrawDebugType = (EDrawDebugTrace::Type)DrawDebugType;
    params.OutHit = (FHitResult)OutHit;
    params.bIgnoreSelf = (bool)bIgnoreSelf;
    params.TraceColor = (FLinearColor)TraceColor;
    params.TraceHitColor = (FLinearColor)TraceHitColor;
    params.DrawTime = (float)DrawTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutHit = params.OutHit;
    ObjectTypes = params.ObjectTypes;
    ActorsToIgnore = params.ActorsToIgnore;
    return (bool)params.ReturnValue;
}
bool UKismetSystemLibrary::BoxTraceSingleByProfile(UObject* WorldContextObject, FVector Start, FVector End, FVector HalfSize, FRotator Orientation, FName ProfileName, bool bTraceComplex, TArray<AActor*>& ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.BoxTraceSingleByProfile"));
    struct Params_BoxTraceSingleByProfile {
        UObject* WorldContextObject; // 0x0
        FVector Start; // 0x8
        FVector End; // 0x14
        FVector HalfSize; // 0x20
        FRotator Orientation; // 0x2c
        FName ProfileName; // 0x38
        bool bTraceComplex; // 0x40
        char pad_41[0x7];
        TArray<AActor*> ActorsToIgnore; // 0x48
        EDrawDebugTrace::Type DrawDebugType; // 0x58
        char pad_59[0x3];
        FHitResult OutHit; // 0x5c
        bool bIgnoreSelf; // 0xe4
        char pad_e5[0x3];
        FLinearColor TraceColor; // 0xe8
        FLinearColor TraceHitColor; // 0xf8
        float DrawTime; // 0x108
        bool ReturnValue; // 0x10c
    }; // Size: 0x10d
    Params_BoxTraceSingleByProfile params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Start = (FVector)Start;
    params.End = (FVector)End;
    params.HalfSize = (FVector)HalfSize;
    params.Orientation = (FRotator)Orientation;
    params.ProfileName = (FName)ProfileName;
    params.bTraceComplex = (bool)bTraceComplex;
    params.ActorsToIgnore = (TArray<AActor*>)ActorsToIgnore;
    params.DrawDebugType = (EDrawDebugTrace::Type)DrawDebugType;
    params.OutHit = (FHitResult)OutHit;
    params.bIgnoreSelf = (bool)bIgnoreSelf;
    params.TraceColor = (FLinearColor)TraceColor;
    params.TraceHitColor = (FLinearColor)TraceHitColor;
    params.DrawTime = (float)DrawTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ActorsToIgnore = params.ActorsToIgnore;
    OutHit = params.OutHit;
    return (bool)params.ReturnValue;
}
bool UKismetSystemLibrary::BoxTraceMultiForObjects(UObject* WorldContextObject, FVector Start, FVector End, FVector HalfSize, FRotator Orientation, TArray<EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, TArray<AActor*>& ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.BoxTraceMultiForObjects"));
    struct Params_BoxTraceMultiForObjects {
        UObject* WorldContextObject; // 0x0
        FVector Start; // 0x8
        FVector End; // 0x14
        FVector HalfSize; // 0x20
        FRotator Orientation; // 0x2c
        TArray<EObjectTypeQuery> ObjectTypes; // 0x38
        bool bTraceComplex; // 0x48
        char pad_49[0x7];
        TArray<AActor*> ActorsToIgnore; // 0x50
        EDrawDebugTrace::Type DrawDebugType; // 0x60
        char pad_61[0x7];
        TArray<FHitResult> OutHits; // 0x68
        bool bIgnoreSelf; // 0x78
        char pad_79[0x3];
        FLinearColor TraceColor; // 0x7c
        FLinearColor TraceHitColor; // 0x8c
        float DrawTime; // 0x9c
        bool ReturnValue; // 0xa0
    }; // Size: 0xa1
    Params_BoxTraceMultiForObjects params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Start = (FVector)Start;
    params.End = (FVector)End;
    params.HalfSize = (FVector)HalfSize;
    params.Orientation = (FRotator)Orientation;
    params.ObjectTypes = (TArray<EObjectTypeQuery>)ObjectTypes;
    params.bTraceComplex = (bool)bTraceComplex;
    params.ActorsToIgnore = (TArray<AActor*>)ActorsToIgnore;
    params.DrawDebugType = (EDrawDebugTrace::Type)DrawDebugType;
    params.OutHits = (TArray<FHitResult>)OutHits;
    params.bIgnoreSelf = (bool)bIgnoreSelf;
    params.TraceColor = (FLinearColor)TraceColor;
    params.TraceHitColor = (FLinearColor)TraceHitColor;
    params.DrawTime = (float)DrawTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ObjectTypes = params.ObjectTypes;
    ActorsToIgnore = params.ActorsToIgnore;
    OutHits = params.OutHits;
    return (bool)params.ReturnValue;
}
bool UKismetSystemLibrary::BoxTraceMultiByProfile(UObject* WorldContextObject, FVector Start, FVector End, FVector HalfSize, FRotator Orientation, FName ProfileName, bool bTraceComplex, TArray<AActor*>& ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.BoxTraceMultiByProfile"));
    struct Params_BoxTraceMultiByProfile {
        UObject* WorldContextObject; // 0x0
        FVector Start; // 0x8
        FVector End; // 0x14
        FVector HalfSize; // 0x20
        FRotator Orientation; // 0x2c
        FName ProfileName; // 0x38
        bool bTraceComplex; // 0x40
        char pad_41[0x7];
        TArray<AActor*> ActorsToIgnore; // 0x48
        EDrawDebugTrace::Type DrawDebugType; // 0x58
        char pad_59[0x7];
        TArray<FHitResult> OutHits; // 0x60
        bool bIgnoreSelf; // 0x70
        char pad_71[0x3];
        FLinearColor TraceColor; // 0x74
        FLinearColor TraceHitColor; // 0x84
        float DrawTime; // 0x94
        bool ReturnValue; // 0x98
    }; // Size: 0x99
    Params_BoxTraceMultiByProfile params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Start = (FVector)Start;
    params.End = (FVector)End;
    params.HalfSize = (FVector)HalfSize;
    params.Orientation = (FRotator)Orientation;
    params.ProfileName = (FName)ProfileName;
    params.bTraceComplex = (bool)bTraceComplex;
    params.ActorsToIgnore = (TArray<AActor*>)ActorsToIgnore;
    params.DrawDebugType = (EDrawDebugTrace::Type)DrawDebugType;
    params.OutHits = (TArray<FHitResult>)OutHits;
    params.bIgnoreSelf = (bool)bIgnoreSelf;
    params.TraceColor = (FLinearColor)TraceColor;
    params.TraceHitColor = (FLinearColor)TraceHitColor;
    params.DrawTime = (float)DrawTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutHits = params.OutHits;
    ActorsToIgnore = params.ActorsToIgnore;
    return (bool)params.ReturnValue;
}
bool UKismetSystemLibrary::BoxTraceMulti(UObject* WorldContextObject, FVector Start, FVector End, FVector HalfSize, FRotator Orientation, ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<AActor*>& ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.BoxTraceMulti"));
    struct Params_BoxTraceMulti {
        UObject* WorldContextObject; // 0x0
        FVector Start; // 0x8
        FVector End; // 0x14
        FVector HalfSize; // 0x20
        FRotator Orientation; // 0x2c
        ETraceTypeQuery TraceChannel; // 0x38
        bool bTraceComplex; // 0x39
        char pad_3a[0x6];
        TArray<AActor*> ActorsToIgnore; // 0x40
        EDrawDebugTrace::Type DrawDebugType; // 0x50
        char pad_51[0x7];
        TArray<FHitResult> OutHits; // 0x58
        bool bIgnoreSelf; // 0x68
        char pad_69[0x3];
        FLinearColor TraceColor; // 0x6c
        FLinearColor TraceHitColor; // 0x7c
        float DrawTime; // 0x8c
        bool ReturnValue; // 0x90
    }; // Size: 0x91
    Params_BoxTraceMulti params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Start = (FVector)Start;
    params.End = (FVector)End;
    params.HalfSize = (FVector)HalfSize;
    params.Orientation = (FRotator)Orientation;
    params.TraceChannel = (ETraceTypeQuery)TraceChannel;
    params.bTraceComplex = (bool)bTraceComplex;
    params.ActorsToIgnore = (TArray<AActor*>)ActorsToIgnore;
    params.DrawDebugType = (EDrawDebugTrace::Type)DrawDebugType;
    params.OutHits = (TArray<FHitResult>)OutHits;
    params.bIgnoreSelf = (bool)bIgnoreSelf;
    params.TraceColor = (FLinearColor)TraceColor;
    params.TraceHitColor = (FLinearColor)TraceHitColor;
    params.DrawTime = (float)DrawTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ActorsToIgnore = params.ActorsToIgnore;
    OutHits = params.OutHits;
    return (bool)params.ReturnValue;
}
bool UKismetSystemLibrary::BoxOverlapComponents(UObject* WorldContextObject, FVector BoxPos, FVector Extent, TArray<EObjectTypeQuery>& ObjectTypes, UClass* ComponentClassFilter, TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.BoxOverlapComponents"));
    struct Params_BoxOverlapComponents {
        UObject* WorldContextObject; // 0x0
        FVector BoxPos; // 0x8
        FVector Extent; // 0x14
        TArray<EObjectTypeQuery> ObjectTypes; // 0x20
        UClass* ComponentClassFilter; // 0x30
        TArray<AActor*> ActorsToIgnore; // 0x38
        TArray<UPrimitiveComponent*> OutComponents; // 0x48
        bool ReturnValue; // 0x58
    }; // Size: 0x59
    Params_BoxOverlapComponents params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.BoxPos = (FVector)BoxPos;
    params.Extent = (FVector)Extent;
    params.ObjectTypes = (TArray<EObjectTypeQuery>)ObjectTypes;
    params.ComponentClassFilter = (UClass*)ComponentClassFilter;
    params.ActorsToIgnore = (TArray<AActor*>)ActorsToIgnore;
    params.OutComponents = (TArray<UPrimitiveComponent*>)OutComponents;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ObjectTypes = params.ObjectTypes;
    ActorsToIgnore = params.ActorsToIgnore;
    OutComponents = params.OutComponents;
    return (bool)params.ReturnValue;
}
bool UKismetSystemLibrary::BoxOverlapActors(UObject* WorldContextObject, FVector BoxPos, FVector BoxExtent, TArray<EObjectTypeQuery>& ObjectTypes, UClass* ActorClassFilter, TArray<AActor*>& ActorsToIgnore, TArray<AActor*>& OutActors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.BoxOverlapActors"));
    struct Params_BoxOverlapActors {
        UObject* WorldContextObject; // 0x0
        FVector BoxPos; // 0x8
        FVector BoxExtent; // 0x14
        TArray<EObjectTypeQuery> ObjectTypes; // 0x20
        UClass* ActorClassFilter; // 0x30
        TArray<AActor*> ActorsToIgnore; // 0x38
        TArray<AActor*> OutActors; // 0x48
        bool ReturnValue; // 0x58
    }; // Size: 0x59
    Params_BoxOverlapActors params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.BoxPos = (FVector)BoxPos;
    params.BoxExtent = (FVector)BoxExtent;
    params.ObjectTypes = (TArray<EObjectTypeQuery>)ObjectTypes;
    params.ActorClassFilter = (UClass*)ActorClassFilter;
    params.ActorsToIgnore = (TArray<AActor*>)ActorsToIgnore;
    params.OutActors = (TArray<AActor*>)OutActors;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ObjectTypes = params.ObjectTypes;
    ActorsToIgnore = params.ActorsToIgnore;
    OutActors = params.OutActors;
    return (bool)params.ReturnValue;
}
void UKismetSystemLibrary::BeginTransaction(FString Context) {}
void UKismetSystemLibrary::AsyncLoadCallback__DelegateSignature(UObject* LoadedObject) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Engine.KismetSystemLibrary.AsyncLoadCallback__DelegateSignature"));
    struct Params_AsyncLoadCallback__DelegateSignature {
        UObject* LoadedObject; // 0x0
    }; // Size: 0x8
    Params_AsyncLoadCallback__DelegateSignature params{};
    params.LoadedObject = (UObject*)LoadedObject;
    ProcessEvent(func, &params);
}
FDebugFloatHistory UKismetSystemLibrary::AddFloatHistorySample(float Value, FDebugFloatHistory& FloatHistory) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetSystemLibrary.AddFloatHistorySample"));
    struct Params_AddFloatHistorySample {
        float Value; // 0x0
        char pad_4[0x4];
        FDebugFloatHistory FloatHistory; // 0x8
        FDebugFloatHistory ReturnValue; // 0x28
    }; // Size: 0x48
    Params_AddFloatHistorySample params{};
    params.Value = (float)Value;
    params.FloatHistory = (FDebugFloatHistory)FloatHistory;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FloatHistory = params.FloatHistory;
    return (FDebugFloatHistory)params.ReturnValue;
}
