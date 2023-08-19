#include "EBeaconState.hpp"
#include "FLinearColor.hpp"
#include "FVector2D.hpp"
#include "UBeaconInfo.hpp"
#include "UFunction.hpp"
#include "UMapIconInstance.hpp"
#include "UMapIconMeshRenderWidget.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMaterialInterface.hpp"
#include "UObject.hpp"
#include "URUserVectorArtData.hpp"
#include "UTexture2D.hpp"
#include "UUserWidget.hpp"
void UMapIconMeshRenderWidget::SetCurrentTextureName(FString pTextureName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIconMeshRenderWidget.SetCurrentTextureName"));
    struct Params_SetCurrentTextureName {
        FString pTextureName; // 0x0
    }; // Size: 0x10
    Params_SetCurrentTextureName params{};
    params.pTextureName = (FString)pTextureName;
    ProcessEvent(func, &params);
}
UMapIconMeshRenderWidget* UMapIconMeshRenderWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MapIconMeshRenderWidget");
    return (UMapIconMeshRenderWidget*)res;
}
void UMapIconMeshRenderWidget::SetTexture(UTexture2D* Texture) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIconMeshRenderWidget.SetTexture"));
    struct Params_SetTexture {
        UTexture2D* Texture; // 0x0
    }; // Size: 0x8
    Params_SetTexture params{};
    params.Texture = (UTexture2D*)Texture;
    ProcessEvent(func, &params);
}
void UMapIconMeshRenderWidget::SetLayer3Texture(UTexture2D* Texture) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIconMeshRenderWidget.SetLayer3Texture"));
    struct Params_SetLayer3Texture {
        UTexture2D* Texture; // 0x0
    }; // Size: 0x8
    Params_SetLayer3Texture params{};
    params.Texture = (UTexture2D*)Texture;
    ProcessEvent(func, &params);
}
void UMapIconMeshRenderWidget::SetOutlineTexture(UTexture2D* Texture) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIconMeshRenderWidget.SetOutlineTexture"));
    struct Params_SetOutlineTexture {
        UTexture2D* Texture; // 0x0
    }; // Size: 0x8
    Params_SetOutlineTexture params{};
    params.Texture = (UTexture2D*)Texture;
    ProcessEvent(func, &params);
}
void UMapIconMeshRenderWidget::SetName(FString pName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIconMeshRenderWidget.SetName"));
    struct Params_SetName {
        FString pName; // 0x0
    }; // Size: 0x10
    Params_SetName params{};
    params.pName = (FString)pName;
    ProcessEvent(func, &params);
}
UMaterialInstanceDynamic* UMapIconMeshRenderWidget::CreateMaterial(UMaterialInterface* pMaterial) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIconMeshRenderWidget.CreateMaterial"));
    struct Params_CreateMaterial {
        UMaterialInterface* pMaterial; // 0x0
        UMaterialInstanceDynamic* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_CreateMaterial params{};
    params.pMaterial = (UMaterialInterface*)pMaterial;
    ProcessEvent(func, &params);
    return (UMaterialInstanceDynamic*)params.ReturnValue;
}
void UMapIconMeshRenderWidget::SetMaterial(UMaterialInterface* pMaterial) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIconMeshRenderWidget.SetMaterial"));
    struct Params_SetMaterial {
        UMaterialInterface* pMaterial; // 0x0
    }; // Size: 0x8
    Params_SetMaterial params{};
    params.pMaterial = (UMaterialInterface*)pMaterial;
    ProcessEvent(func, &params);
}
void UMapIconMeshRenderWidget::SetLayer2Texture(UTexture2D* Texture) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIconMeshRenderWidget.SetLayer2Texture"));
    struct Params_SetLayer2Texture {
        UTexture2D* Texture; // 0x0
    }; // Size: 0x8
    Params_SetLayer2Texture params{};
    params.Texture = (UTexture2D*)Texture;
    ProcessEvent(func, &params);
}
void UMapIconMeshRenderWidget::AddBeaconToList(UBeaconInfo* pBeaconInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIconMeshRenderWidget.AddBeaconToList"));
    struct Params_AddBeaconToList {
        UBeaconInfo* pBeaconInfo; // 0x0
    }; // Size: 0x8
    Params_AddBeaconToList params{};
    params.pBeaconInfo = (UBeaconInfo*)pBeaconInfo;
    ProcessEvent(func, &params);
}
FLinearColor UMapIconMeshRenderWidget::GetColorAndOpacity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIconMeshRenderWidget.GetColorAndOpacity"));
    struct Params_GetColorAndOpacity {
        FLinearColor ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetColorAndOpacity params{};
    ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
void UMapIconMeshRenderWidget::SetCurrentBeaconState(EBeaconState pCurrentBeaconState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIconMeshRenderWidget.SetCurrentBeaconState"));
    struct Params_SetCurrentBeaconState {
        EBeaconState pCurrentBeaconState; // 0x0
    }; // Size: 0x1
    Params_SetCurrentBeaconState params{};
    params.pCurrentBeaconState = (EBeaconState)pCurrentBeaconState;
    ProcessEvent(func, &params);
}
bool UMapIconMeshRenderWidget::RemoveIcon(UMapIconInstance* Icon) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIconMeshRenderWidget.RemoveIcon"));
    struct Params_RemoveIcon {
        UMapIconInstance* Icon; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_RemoveIcon params{};
    params.Icon = (UMapIconInstance*)Icon;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMapIconMeshRenderWidget::IconTextureCallback(UTexture2D* Texture, UObject* Param) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIconMeshRenderWidget.IconTextureCallback"));
    struct Params_IconTextureCallback {
        UTexture2D* Texture; // 0x0
        UObject* Param; // 0x8
    }; // Size: 0x10
    Params_IconTextureCallback params{};
    params.Texture = (UTexture2D*)Texture;
    params.Param = (UObject*)Param;
    ProcessEvent(func, &params);
}
FString UMapIconMeshRenderWidget::GetWidgetName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIconMeshRenderWidget.GetWidgetName"));
    struct Params_GetWidgetName {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetWidgetName params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
UMapIconInstance* UMapIconMeshRenderWidget::AddIcon(UBeaconInfo* Beacon, FVector2D Position, float Scale, float flags, FLinearColor Color) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIconMeshRenderWidget.AddIcon"));
    struct Params_AddIcon {
        UBeaconInfo* Beacon; // 0x0
        FVector2D Position; // 0x8
        float Scale; // 0x10
        float flags; // 0x14
        FLinearColor Color; // 0x18
        UMapIconInstance* ReturnValue; // 0x28
    }; // Size: 0x30
    Params_AddIcon params{};
    params.Beacon = (UBeaconInfo*)Beacon;
    params.Position = (FVector2D)Position;
    params.Scale = (float)Scale;
    params.flags = (float)flags;
    params.Color = (FLinearColor)Color;
    ProcessEvent(func, &params);
    return (UMapIconInstance*)params.ReturnValue;
}
UMaterialInstanceDynamic* UMapIconMeshRenderWidget::GetMaterialDynamic() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIconMeshRenderWidget.GetMaterialDynamic"));
    struct Params_GetMaterialDynamic {
        UMaterialInstanceDynamic* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMaterialDynamic params{};
    ProcessEvent(func, &params);
    return (UMaterialInstanceDynamic*)params.ReturnValue;
}
UMaterialInterface* UMapIconMeshRenderWidget::GetMaterial() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIconMeshRenderWidget.GetMaterial"));
    struct Params_GetMaterial {
        UMaterialInterface* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMaterial params{};
    ProcessEvent(func, &params);
    return (UMaterialInterface*)params.ReturnValue;
}
FString UMapIconMeshRenderWidget::GetCurrentTextureName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIconMeshRenderWidget.GetCurrentTextureName"));
    struct Params_GetCurrentTextureName {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetCurrentTextureName params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
EBeaconState UMapIconMeshRenderWidget::GetCurrentBeaconState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIconMeshRenderWidget.GetCurrentBeaconState"));
    struct Params_GetCurrentBeaconState {
        EBeaconState ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetCurrentBeaconState params{};
    ProcessEvent(func, &params);
    return (EBeaconState)params.ReturnValue;
}
bool UMapIconMeshRenderWidget::CONTAINS(UMapIconInstance* Icon) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIconMeshRenderWidget.CONTAINS"));
    struct Params_CONTAINS {
        UMapIconInstance* Icon; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_CONTAINS params{};
    params.Icon = (UMapIconInstance*)Icon;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMapIconMeshRenderWidget::ClearIcons() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIconMeshRenderWidget.ClearIcons"));
    struct Params_ClearIcons {
    }; // Size: 0x0
    Params_ClearIcons params{};
    ProcessEvent(func, &params);
}
void UMapIconMeshRenderWidget::ClearBeaconList() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIconMeshRenderWidget.ClearBeaconList"));
    struct Params_ClearBeaconList {
    }; // Size: 0x0
    Params_ClearBeaconList params{};
    ProcessEvent(func, &params);
}
void UMapIconMeshRenderWidget::AddIconToList(UMapIconInstance* MapIconInstance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIconMeshRenderWidget.AddIconToList"));
    struct Params_AddIconToList {
        UMapIconInstance* MapIconInstance; // 0x0
    }; // Size: 0x8
    Params_AddIconToList params{};
    params.MapIconInstance = (UMapIconInstance*)MapIconInstance;
    ProcessEvent(func, &params);
}
