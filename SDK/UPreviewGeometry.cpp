#include "APreviewGeometryActor.hpp"
#include "FTransform.hpp"
#include "UFunction.hpp"
#include "ULineSetComponent.hpp"
#include "UMaterialInterface.hpp"
#include "UObject.hpp"
#include "UPreviewGeometry.hpp"
#include "UWorld.hpp"
APreviewGeometryActor* UPreviewGeometry::GetActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ModelingComponents.PreviewGeometry.GetActor"));
    struct Params_GetActor {
        APreviewGeometryActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetActor params{};
    ProcessEvent(func, &params);
    return (APreviewGeometryActor*)params.ReturnValue;
}
void UPreviewGeometry::RemoveAllLineSets(bool bDestroy) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ModelingComponents.PreviewGeometry.RemoveAllLineSets"));
    struct Params_RemoveAllLineSets {
        bool bDestroy; // 0x0
    }; // Size: 0x1
    Params_RemoveAllLineSets params{};
    params.bDestroy = (bool)bDestroy;
    ProcessEvent(func, &params);
}
UPreviewGeometry* UPreviewGeometry::StaticClass() {
    static auto res = find_uobject("Class /Script/ModelingComponents.PreviewGeometry");
    return (UPreviewGeometry*)res;
}
ULineSetComponent* UPreviewGeometry::FindLineSet(FString LineSetIdentifier) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ModelingComponents.PreviewGeometry.FindLineSet"));
    struct Params_FindLineSet {
        FString LineSetIdentifier; // 0x0
        ULineSetComponent* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_FindLineSet params{};
    params.LineSetIdentifier = (FString)LineSetIdentifier;
    ProcessEvent(func, &params);
    return (ULineSetComponent*)params.ReturnValue;
}
bool UPreviewGeometry::SetLineSetVisibility(FString LineSetIdentifier, bool bVisible) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ModelingComponents.PreviewGeometry.SetLineSetVisibility"));
    struct Params_SetLineSetVisibility {
        FString LineSetIdentifier; // 0x0
        bool bVisible; // 0x10
        bool ReturnValue; // 0x11
    }; // Size: 0x12
    Params_SetLineSetVisibility params{};
    params.LineSetIdentifier = (FString)LineSetIdentifier;
    params.bVisible = (bool)bVisible;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPreviewGeometry::SetLineSetMaterial(FString LineSetIdentifier, UMaterialInterface* NewMaterial) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ModelingComponents.PreviewGeometry.SetLineSetMaterial"));
    struct Params_SetLineSetMaterial {
        FString LineSetIdentifier; // 0x0
        UMaterialInterface* NewMaterial; // 0x10
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_SetLineSetMaterial params{};
    params.LineSetIdentifier = (FString)LineSetIdentifier;
    params.NewMaterial = (UMaterialInterface*)NewMaterial;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPreviewGeometry::SetAllLineSetsMaterial(UMaterialInterface* Material) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ModelingComponents.PreviewGeometry.SetAllLineSetsMaterial"));
    struct Params_SetAllLineSetsMaterial {
        UMaterialInterface* Material; // 0x0
    }; // Size: 0x8
    Params_SetAllLineSetsMaterial params{};
    params.Material = (UMaterialInterface*)Material;
    ProcessEvent(func, &params);
}
bool UPreviewGeometry::RemoveLineSet(FString LineSetIdentifier, bool bDestroy) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ModelingComponents.PreviewGeometry.RemoveLineSet"));
    struct Params_RemoveLineSet {
        FString LineSetIdentifier; // 0x0
        bool bDestroy; // 0x10
        bool ReturnValue; // 0x11
    }; // Size: 0x12
    Params_RemoveLineSet params{};
    params.LineSetIdentifier = (FString)LineSetIdentifier;
    params.bDestroy = (bool)bDestroy;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPreviewGeometry::Disconnect() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ModelingComponents.PreviewGeometry.Disconnect"));
    struct Params_Disconnect {
    }; // Size: 0x0
    Params_Disconnect params{};
    ProcessEvent(func, &params);
}
void UPreviewGeometry::CreateInWorld(UWorld* World, FTransform& WithTransform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ModelingComponents.PreviewGeometry.CreateInWorld"));
    struct Params_CreateInWorld {
        UWorld* World; // 0x0
        char pad_8[0x8];
        FTransform WithTransform; // 0x10
    }; // Size: 0x40
    Params_CreateInWorld params{};
    params.World = (UWorld*)World;
    params.WithTransform = (FTransform)WithTransform;
    ProcessEvent(func, &params);
    WithTransform = params.WithTransform;
}
ULineSetComponent* UPreviewGeometry::AddLineSet(FString LineSetIdentifier) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ModelingComponents.PreviewGeometry.AddLineSet"));
    struct Params_AddLineSet {
        FString LineSetIdentifier; // 0x0
        ULineSetComponent* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_AddLineSet params{};
    params.LineSetIdentifier = (FString)LineSetIdentifier;
    ProcessEvent(func, &params);
    return (ULineSetComponent*)params.ReturnValue;
}
