#include "AActor.hpp"
#include "ADecalActor.hpp"
#include "AMapCursor.hpp"
#include "APlayerController.hpp"
#include "ECursorControlTypes\Type.hpp"
#include "FVector.hpp"
#include "FVector4.hpp"
#include "UFunction.hpp"
#include "ULocalPlayer.hpp"
#include "UMapBase.hpp"
#include "UMapHogsmeade.hpp"
#include "UMapHogwarts.hpp"
#include "UMapMovementComponent.hpp"
#include "UMapOverland.hpp"
#include "UMapScreenBase.hpp"
#include "UMapSubSystem.hpp"
#include "UMaterial.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "USceneComponent.hpp"
#include "UTexture2D.hpp"
#include "UUIManager.hpp"
#include "UWorld.hpp"
AMapCursor* AMapCursor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MapCursor");
    return (AMapCursor*)res;
}
void AMapCursor::SetToMouse() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapCursor.SetToMouse"));
    struct Params_SetToMouse {
    }; // Size: 0x0
    Params_SetToMouse params{};
    ProcessEvent(func, &params);
}
void AMapCursor::ToggleShowScreenPosition() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapCursor.ToggleShowScreenPosition"));
    struct Params_ToggleShowScreenPosition {
    }; // Size: 0x0
    Params_ToggleShowScreenPosition params{};
    ProcessEvent(func, &params);
}
FVector4 AMapCursor::GetScreenBounds() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapCursor.GetScreenBounds"));
    struct Params_GetScreenBounds {
        FVector4 ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetScreenBounds params{};
    ProcessEvent(func, &params);
    return (FVector4)params.ReturnValue;
}
void AMapCursor::ToggleShowMouseLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapCursor.ToggleShowMouseLocation"));
    struct Params_ToggleShowMouseLocation {
    }; // Size: 0x0
    Params_ToggleShowMouseLocation params{};
    ProcessEvent(func, &params);
}
void AMapCursor::ToggleShowCursorLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapCursor.ToggleShowCursorLocation"));
    struct Params_ToggleShowCursorLocation {
    }; // Size: 0x0
    Params_ToggleShowCursorLocation params{};
    ProcessEvent(func, &params);
}
void AMapCursor::ToggleShowCollisionActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapCursor.ToggleShowCollisionActor"));
    struct Params_ToggleShowCollisionActor {
    }; // Size: 0x0
    Params_ToggleShowCollisionActor params{};
    ProcessEvent(func, &params);
}
void AMapCursor::SetToGamePad(bool doLerp, FVector lerpLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapCursor.SetToGamePad"));
    struct Params_SetToGamePad {
        bool doLerp; // 0x0
        char pad_1[0x3];
        FVector lerpLocation; // 0x4
    }; // Size: 0x10
    Params_SetToGamePad params{};
    params.doLerp = (bool)doLerp;
    params.lerpLocation = (FVector)lerpLocation;
    ProcessEvent(func, &params);
}
void AMapCursor::SetScreenBounds(FVector4 BoundsArray) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapCursor.SetScreenBounds"));
    struct Params_SetScreenBounds {
        FVector4 BoundsArray; // 0x0
    }; // Size: 0x10
    Params_SetScreenBounds params{};
    params.BoundsArray = (FVector4)BoundsArray;
    ProcessEvent(func, &params);
}
void AMapCursor::SetRightMouseButtonClicked(bool Clicked) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapCursor.SetRightMouseButtonClicked"));
    struct Params_SetRightMouseButtonClicked {
        bool Clicked; // 0x0
    }; // Size: 0x1
    Params_SetRightMouseButtonClicked params{};
    params.Clicked = (bool)Clicked;
    ProcessEvent(func, &params);
}
void AMapCursor::SetCursorControl(ECursorControlTypes::Type& ControlType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapCursor.SetCursorControl"));
    struct Params_SetCursorControl {
        ECursorControlTypes::Type ControlType; // 0x0
    }; // Size: 0x1
    Params_SetCursorControl params{};
    params.ControlType = (ECursorControlTypes::Type)ControlType;
    ProcessEvent(func, &params);
    ControlType = params.ControlType;
}
void AMapCursor::SetCursorBounds(FVector4 BoundsArray) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapCursor.SetCursorBounds"));
    struct Params_SetCursorBounds {
        FVector4 BoundsArray; // 0x0
    }; // Size: 0x10
    Params_SetCursorBounds params{};
    params.BoundsArray = (FVector4)BoundsArray;
    ProcessEvent(func, &params);
}
void AMapCursor::MouseSnapToPlayer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapCursor.MouseSnapToPlayer"));
    struct Params_MouseSnapToPlayer {
    }; // Size: 0x0
    Params_MouseSnapToPlayer params{};
    ProcessEvent(func, &params);
}
bool AMapCursor::GetMouseActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapCursor.GetMouseActive"));
    struct Params_GetMouseActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetMouseActive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool AMapCursor::GetLerpingToNewLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapCursor.GetLerpingToNewLocation"));
    struct Params_GetLerpingToNewLocation {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetLerpingToNewLocation params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool AMapCursor::GetGamePadActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapCursor.GetGamePadActive"));
    struct Params_GetGamePadActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetGamePadActive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVector AMapCursor::GetCursorTranslation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapCursor.GetCursorTranslation"));
    struct Params_GetCursorTranslation {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetCursorTranslation params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector4 AMapCursor::GetCursorBounds() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapCursor.GetCursorBounds"));
    struct Params_GetCursorBounds {
        FVector4 ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetCursorBounds params{};
    ProcessEvent(func, &params);
    return (FVector4)params.ReturnValue;
}
void AMapCursor::GamepadSnapToPlayer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapCursor.GamepadSnapToPlayer"));
    struct Params_GamepadSnapToPlayer {
    }; // Size: 0x0
    Params_GamepadSnapToPlayer params{};
    ProcessEvent(func, &params);
}
