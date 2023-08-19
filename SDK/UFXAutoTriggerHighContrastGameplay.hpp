#pragma once
#include <cstdint>
#include "EHighContrastGameplayMarkup.hpp"
#include "EHighContrastGameplayNPCHint.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class AActor;
class UObject;
class UMeshComponent;
#pragma pack(push, 1)
class UFXAutoTriggerHighContrastGameplay : public UBlueprintFunctionLibrary {
public:
    static UFXAutoTriggerHighContrastGameplay* StaticClass();
    static void RemoveNPCHighContrastGameplayHints(AActor* Actor);
    static void IsHighContrastGameplay(UObject* WorldContextObject, bool& bHighContrastGameplay);
    static void HighContrastGameplayMarkupMeshImmediateVeryDangerous(UMeshComponent* MeshComponent, EHighContrastGameplayMarkup Markup);
    static void HighContrastGameplayMarkupActorImmediateVeryDangerous(AActor* Actor, EHighContrastGameplayMarkup Markup, bool bIncludeChildren);
    static void GetNPCHighContrastGameplayHint(AActor* Actor, EHighContrastGameplayNPCHint& Hint, bool& bHasHint);
    static void AddNPCHighContrastGameplayHint(AActor* Actor, EHighContrastGameplayNPCHint Hint);
}; // Size: 0x28
#pragma pack(pop)
