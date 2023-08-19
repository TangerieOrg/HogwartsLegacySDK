#include "AActor.hpp"
#include "APerWorldAccessibilitySettings.hpp"
#include "EHighContrastGameplayBucket.hpp"
#include "UFunction.hpp"
#include "UMaterialParameterCollection.hpp"
#include "UPrimitiveComponent.hpp"
APerWorldAccessibilitySettings* APerWorldAccessibilitySettings::StaticClass() {
    static auto res = find_uobject("Class /Script/AccessibilitySettings.PerWorldAccessibilitySettings");
    return (APerWorldAccessibilitySettings*)res;
}
void APerWorldAccessibilitySettings::RemoveActorFromHighContrastGameplayBuckets(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AccessibilitySettings.PerWorldAccessibilitySettings.RemoveActorFromHighContrastGameplayBuckets"));
    struct Params_RemoveActorFromHighContrastGameplayBuckets {
        AActor* Actor; // 0x0
    }; // Size: 0x8
    Params_RemoveActorFromHighContrastGameplayBuckets params{};
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void APerWorldAccessibilitySettings::RemovePrimitiveFromHighContrastGameplayBuckets(UPrimitiveComponent* PrimitiveComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AccessibilitySettings.PerWorldAccessibilitySettings.RemovePrimitiveFromHighContrastGameplayBuckets"));
    struct Params_RemovePrimitiveFromHighContrastGameplayBuckets {
        UPrimitiveComponent* PrimitiveComponent; // 0x0
    }; // Size: 0x8
    Params_RemovePrimitiveFromHighContrastGameplayBuckets params{};
    params.PrimitiveComponent = (UPrimitiveComponent*)PrimitiveComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void APerWorldAccessibilitySettings::RemoveActorFromHighContrastGameplayBucket(AActor* Actor, EHighContrastGameplayBucket Bucket) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AccessibilitySettings.PerWorldAccessibilitySettings.RemoveActorFromHighContrastGameplayBucket"));
    struct Params_RemoveActorFromHighContrastGameplayBucket {
        AActor* Actor; // 0x0
        EHighContrastGameplayBucket Bucket; // 0x8
    }; // Size: 0x9
    Params_RemoveActorFromHighContrastGameplayBucket params{};
    params.Actor = (AActor*)Actor;
    params.Bucket = (EHighContrastGameplayBucket)Bucket;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void APerWorldAccessibilitySettings::PrimitiveIsInHighContrastGameplayBucket(UPrimitiveComponent* PrimitiveComponent, EHighContrastGameplayBucket& Bucket, bool& bFound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AccessibilitySettings.PerWorldAccessibilitySettings.PrimitiveIsInHighContrastGameplayBucket"));
    struct Params_PrimitiveIsInHighContrastGameplayBucket {
        UPrimitiveComponent* PrimitiveComponent; // 0x0
        EHighContrastGameplayBucket Bucket; // 0x8
        bool bFound; // 0x9
    }; // Size: 0xa
    Params_PrimitiveIsInHighContrastGameplayBucket params{};
    params.PrimitiveComponent = (UPrimitiveComponent*)PrimitiveComponent;
    params.Bucket = (EHighContrastGameplayBucket)Bucket;
    params.bFound = (bool)bFound;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Bucket = params.Bucket;
    bFound = params.bFound;
}
void APerWorldAccessibilitySettings::AddPrimitiveToHighContrastGameplayBucket(UPrimitiveComponent* PrimitiveComponent, EHighContrastGameplayBucket Bucket) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AccessibilitySettings.PerWorldAccessibilitySettings.AddPrimitiveToHighContrastGameplayBucket"));
    struct Params_AddPrimitiveToHighContrastGameplayBucket {
        UPrimitiveComponent* PrimitiveComponent; // 0x0
        EHighContrastGameplayBucket Bucket; // 0x8
    }; // Size: 0x9
    Params_AddPrimitiveToHighContrastGameplayBucket params{};
    params.PrimitiveComponent = (UPrimitiveComponent*)PrimitiveComponent;
    params.Bucket = (EHighContrastGameplayBucket)Bucket;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void APerWorldAccessibilitySettings::AddActorToHighContrastGameplayBucket(AActor* Actor, EHighContrastGameplayBucket Bucket) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AccessibilitySettings.PerWorldAccessibilitySettings.AddActorToHighContrastGameplayBucket"));
    struct Params_AddActorToHighContrastGameplayBucket {
        AActor* Actor; // 0x0
        EHighContrastGameplayBucket Bucket; // 0x8
    }; // Size: 0x9
    Params_AddActorToHighContrastGameplayBucket params{};
    params.Actor = (AActor*)Actor;
    params.Bucket = (EHighContrastGameplayBucket)Bucket;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void APerWorldAccessibilitySettings::ActorIsInHighContrastGameplayBucket(AActor* Actor, EHighContrastGameplayBucket Bucket, bool& bFound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AccessibilitySettings.PerWorldAccessibilitySettings.ActorIsInHighContrastGameplayBucket"));
    struct Params_ActorIsInHighContrastGameplayBucket {
        AActor* Actor; // 0x0
        EHighContrastGameplayBucket Bucket; // 0x8
        bool bFound; // 0x9
    }; // Size: 0xa
    Params_ActorIsInHighContrastGameplayBucket params{};
    params.Actor = (AActor*)Actor;
    params.Bucket = (EHighContrastGameplayBucket)Bucket;
    params.bFound = (bool)bFound;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bFound = params.bFound;
}
