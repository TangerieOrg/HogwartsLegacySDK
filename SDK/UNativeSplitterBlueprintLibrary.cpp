#include "UActorComponent.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UNativeSplitterBlueprintLibrary.hpp"
#include "UStaticMeshComponent.hpp"
bool UNativeSplitterBlueprintLibrary::CopyProperties(UActorComponent* SourceComponent, UActorComponent* TargetComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ComponentNativize.NativeSplitterBlueprintLibrary.CopyProperties"));
    struct Params_CopyProperties {
        UActorComponent* SourceComponent; // 0x0
        UActorComponent* TargetComponent; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_CopyProperties params{};
    params.SourceComponent = (UActorComponent*)SourceComponent;
    params.TargetComponent = (UActorComponent*)TargetComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UNativeSplitterBlueprintLibrary::RemoveInstanceVertexColors(UStaticMeshComponent* StaticMeshComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ComponentNativize.NativeSplitterBlueprintLibrary.RemoveInstanceVertexColors"));
    struct Params_RemoveInstanceVertexColors {
        UStaticMeshComponent* StaticMeshComponent; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_RemoveInstanceVertexColors params{};
    params.StaticMeshComponent = (UStaticMeshComponent*)StaticMeshComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UNativeSplitterBlueprintLibrary::RequiresOverrideVertexColorsFixup(UStaticMeshComponent* StaticMeshComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ComponentNativize.NativeSplitterBlueprintLibrary.RequiresOverrideVertexColorsFixup"));
    struct Params_RequiresOverrideVertexColorsFixup {
        UStaticMeshComponent* StaticMeshComponent; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_RequiresOverrideVertexColorsFixup params{};
    params.StaticMeshComponent = (UStaticMeshComponent*)StaticMeshComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UNativeSplitterBlueprintLibrary* UNativeSplitterBlueprintLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/ComponentNativize.NativeSplitterBlueprintLibrary");
    return (UNativeSplitterBlueprintLibrary*)res;
}
bool UNativeSplitterBlueprintLibrary::RemoveInstanceVertexColorsFromLOD(UStaticMeshComponent* StaticMeshComponent, int32_t LODToRemoveColorsFrom) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ComponentNativize.NativeSplitterBlueprintLibrary.RemoveInstanceVertexColorsFromLOD"));
    struct Params_RemoveInstanceVertexColorsFromLOD {
        UStaticMeshComponent* StaticMeshComponent; // 0x0
        int32_t LODToRemoveColorsFrom; // 0x8
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_RemoveInstanceVertexColorsFromLOD params{};
    params.StaticMeshComponent = (UStaticMeshComponent*)StaticMeshComponent;
    params.LODToRemoveColorsFrom = (int32_t)LODToRemoveColorsFrom;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UNativeSplitterBlueprintLibrary::CopyInstanceVertexColorsIfCompatible(UStaticMeshComponent* SourceComponent, UStaticMeshComponent* TargetComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ComponentNativize.NativeSplitterBlueprintLibrary.CopyInstanceVertexColorsIfCompatible"));
    struct Params_CopyInstanceVertexColorsIfCompatible {
        UStaticMeshComponent* SourceComponent; // 0x0
        UStaticMeshComponent* TargetComponent; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_CopyInstanceVertexColorsIfCompatible params{};
    params.SourceComponent = (UStaticMeshComponent*)SourceComponent;
    params.TargetComponent = (UStaticMeshComponent*)TargetComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UNativeSplitterBlueprintLibrary::FixupOverrideColorsIfNecessary(UStaticMeshComponent* StaticMeshComponent, bool bRebuildingStaticMesh) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ComponentNativize.NativeSplitterBlueprintLibrary.FixupOverrideColorsIfNecessary"));
    struct Params_FixupOverrideColorsIfNecessary {
        UStaticMeshComponent* StaticMeshComponent; // 0x0
        bool bRebuildingStaticMesh; // 0x8
        bool ReturnValue; // 0x9
    }; // Size: 0xa
    Params_FixupOverrideColorsIfNecessary params{};
    params.StaticMeshComponent = (UStaticMeshComponent*)StaticMeshComponent;
    params.bRebuildingStaticMesh = (bool)bRebuildingStaticMesh;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UNativeSplitterBlueprintLibrary::CachePaintedDataIfNecessary(UStaticMeshComponent* StaticMeshComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ComponentNativize.NativeSplitterBlueprintLibrary.CachePaintedDataIfNecessary"));
    struct Params_CachePaintedDataIfNecessary {
        UStaticMeshComponent* StaticMeshComponent; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_CachePaintedDataIfNecessary params{};
    params.StaticMeshComponent = (UStaticMeshComponent*)StaticMeshComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
