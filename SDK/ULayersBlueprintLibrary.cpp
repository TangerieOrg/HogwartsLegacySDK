#include "AActor.hpp"
#include "FActorLayer.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "ULayersBlueprintLibrary.hpp"
#include "UObject.hpp"
ULayersBlueprintLibrary* ULayersBlueprintLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/ActorLayerUtilities.LayersBlueprintLibrary");
    return (ULayersBlueprintLibrary*)res;
}
void ULayersBlueprintLibrary::RemoveActorFromLayer(AActor* InActor, FActorLayer& Layer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ActorLayerUtilities.LayersBlueprintLibrary.RemoveActorFromLayer"));
    struct Params_RemoveActorFromLayer {
        AActor* InActor; // 0x0
        FActorLayer Layer; // 0x8
    }; // Size: 0x10
    Params_RemoveActorFromLayer params{};
    params.InActor = (AActor*)InActor;
    params.Layer = (FActorLayer)Layer;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Layer = params.Layer;
}
TArray<AActor*> ULayersBlueprintLibrary::GetActors(UObject* WorldContextObject, FActorLayer& ActorLayer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ActorLayerUtilities.LayersBlueprintLibrary.GetActors"));
    struct Params_GetActors {
        UObject* WorldContextObject; // 0x0
        FActorLayer ActorLayer; // 0x8
        TArray<AActor*> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetActors params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.ActorLayer = (FActorLayer)ActorLayer;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ActorLayer = params.ActorLayer;
    return (TArray<AActor*>)params.ReturnValue;
}
void ULayersBlueprintLibrary::AddActorToLayer(AActor* InActor, FActorLayer& Layer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ActorLayerUtilities.LayersBlueprintLibrary.AddActorToLayer"));
    struct Params_AddActorToLayer {
        AActor* InActor; // 0x0
        FActorLayer Layer; // 0x8
    }; // Size: 0x10
    Params_AddActorToLayer params{};
    params.InActor = (AActor*)InActor;
    params.Layer = (FActorLayer)Layer;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Layer = params.Layer;
}
