#include "ESlateGesture.hpp"
#include "EUINavigation.hpp"
#include "EUINavigationAction.hpp"
#include "FAnalogInputEvent.hpp"
#include "FInputChord.hpp"
#include "FInputEvent.hpp"
#include "FKey.hpp"
#include "FKeyEvent.hpp"
#include "FPointerEvent.hpp"
#include "FVector2D.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UKismetInputLibrary.hpp"
float UKismetInputLibrary::GetAnalogValue(FAnalogInputEvent& Input) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.GetAnalogValue"));
    struct Params_GetAnalogValue {
        FAnalogInputEvent Input; // 0x0
        float ReturnValue; // 0x40
    }; // Size: 0x44
    Params_GetAnalogValue params{};
    params.Input = (FAnalogInputEvent)Input;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Input = params.Input;
    return (float)params.ReturnValue;
}
UKismetInputLibrary* UKismetInputLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.KismetInputLibrary");
    return (UKismetInputLibrary*)res;
}
bool UKismetInputLibrary::PointerEvent_IsMouseButtonDown(FPointerEvent& Input, FKey MouseButton) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.PointerEvent_IsMouseButtonDown"));
    struct Params_PointerEvent_IsMouseButtonDown {
        FPointerEvent Input; // 0x0
        FKey MouseButton; // 0x70
        bool ReturnValue; // 0x88
    }; // Size: 0x89
    Params_PointerEvent_IsMouseButtonDown params{};
    params.Input = (FPointerEvent)Input;
    params.MouseButton = (FKey)MouseButton;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Input = params.Input;
    return (bool)params.ReturnValue;
}
bool UKismetInputLibrary::PointerEvent_IsTouchEvent(FPointerEvent& Input) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.PointerEvent_IsTouchEvent"));
    struct Params_PointerEvent_IsTouchEvent {
        FPointerEvent Input; // 0x0
        bool ReturnValue; // 0x70
    }; // Size: 0x71
    Params_PointerEvent_IsTouchEvent params{};
    params.Input = (FPointerEvent)Input;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Input = params.Input;
    return (bool)params.ReturnValue;
}
FVector2D UKismetInputLibrary::PointerEvent_GetGestureDelta(FPointerEvent& Input) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.PointerEvent_GetGestureDelta"));
    struct Params_PointerEvent_GetGestureDelta {
        FPointerEvent Input; // 0x0
        FVector2D ReturnValue; // 0x70
    }; // Size: 0x78
    Params_PointerEvent_GetGestureDelta params{};
    params.Input = (FPointerEvent)Input;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Input = params.Input;
    return (FVector2D)params.ReturnValue;
}
int32_t UKismetInputLibrary::PointerEvent_GetUserIndex(FPointerEvent& Input) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.PointerEvent_GetUserIndex"));
    struct Params_PointerEvent_GetUserIndex {
        FPointerEvent Input; // 0x0
        int32_t ReturnValue; // 0x70
    }; // Size: 0x74
    Params_PointerEvent_GetUserIndex params{};
    params.Input = (FPointerEvent)Input;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Input = params.Input;
    return (int32_t)params.ReturnValue;
}
float UKismetInputLibrary::PointerEvent_GetWheelDelta(FPointerEvent& Input) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.PointerEvent_GetWheelDelta"));
    struct Params_PointerEvent_GetWheelDelta {
        FPointerEvent Input; // 0x0
        float ReturnValue; // 0x70
    }; // Size: 0x74
    Params_PointerEvent_GetWheelDelta params{};
    params.Input = (FPointerEvent)Input;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Input = params.Input;
    return (float)params.ReturnValue;
}
FVector2D UKismetInputLibrary::PointerEvent_GetScreenSpacePosition(FPointerEvent& Input) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.PointerEvent_GetScreenSpacePosition"));
    struct Params_PointerEvent_GetScreenSpacePosition {
        FPointerEvent Input; // 0x0
        FVector2D ReturnValue; // 0x70
    }; // Size: 0x78
    Params_PointerEvent_GetScreenSpacePosition params{};
    params.Input = (FPointerEvent)Input;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Input = params.Input;
    return (FVector2D)params.ReturnValue;
}
int32_t UKismetInputLibrary::PointerEvent_GetTouchpadIndex(FPointerEvent& Input) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.PointerEvent_GetTouchpadIndex"));
    struct Params_PointerEvent_GetTouchpadIndex {
        FPointerEvent Input; // 0x0
        int32_t ReturnValue; // 0x70
    }; // Size: 0x74
    Params_PointerEvent_GetTouchpadIndex params{};
    params.Input = (FPointerEvent)Input;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Input = params.Input;
    return (int32_t)params.ReturnValue;
}
FVector2D UKismetInputLibrary::PointerEvent_GetCursorDelta(FPointerEvent& Input) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.PointerEvent_GetCursorDelta"));
    struct Params_PointerEvent_GetCursorDelta {
        FPointerEvent Input; // 0x0
        FVector2D ReturnValue; // 0x70
    }; // Size: 0x78
    Params_PointerEvent_GetCursorDelta params{};
    params.Input = (FPointerEvent)Input;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Input = params.Input;
    return (FVector2D)params.ReturnValue;
}
int32_t UKismetInputLibrary::PointerEvent_GetPointerIndex(FPointerEvent& Input) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.PointerEvent_GetPointerIndex"));
    struct Params_PointerEvent_GetPointerIndex {
        FPointerEvent Input; // 0x0
        int32_t ReturnValue; // 0x70
    }; // Size: 0x74
    Params_PointerEvent_GetPointerIndex params{};
    params.Input = (FPointerEvent)Input;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Input = params.Input;
    return (int32_t)params.ReturnValue;
}
FVector2D UKismetInputLibrary::PointerEvent_GetLastScreenSpacePosition(FPointerEvent& Input) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.PointerEvent_GetLastScreenSpacePosition"));
    struct Params_PointerEvent_GetLastScreenSpacePosition {
        FPointerEvent Input; // 0x0
        FVector2D ReturnValue; // 0x70
    }; // Size: 0x78
    Params_PointerEvent_GetLastScreenSpacePosition params{};
    params.Input = (FPointerEvent)Input;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Input = params.Input;
    return (FVector2D)params.ReturnValue;
}
ESlateGesture UKismetInputLibrary::PointerEvent_GetGestureType(FPointerEvent& Input) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.PointerEvent_GetGestureType"));
    struct Params_PointerEvent_GetGestureType {
        FPointerEvent Input; // 0x0
        ESlateGesture ReturnValue; // 0x70
    }; // Size: 0x71
    Params_PointerEvent_GetGestureType params{};
    params.Input = (FPointerEvent)Input;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Input = params.Input;
    return (ESlateGesture)params.ReturnValue;
}
bool UKismetInputLibrary::Key_IsAxis1D(FKey& Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.Key_IsAxis1D"));
    struct Params_Key_IsAxis1D {
        FKey Key; // 0x0
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_Key_IsAxis1D params{};
    params.Key = (FKey)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Key = params.Key;
    return (bool)params.ReturnValue;
}
bool UKismetInputLibrary::Key_IsButtonAxis(FKey& Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.Key_IsButtonAxis"));
    struct Params_Key_IsButtonAxis {
        FKey Key; // 0x0
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_Key_IsButtonAxis params{};
    params.Key = (FKey)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Key = params.Key;
    return (bool)params.ReturnValue;
}
FKey UKismetInputLibrary::PointerEvent_GetEffectingButton(FPointerEvent& Input) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.PointerEvent_GetEffectingButton"));
    struct Params_PointerEvent_GetEffectingButton {
        FPointerEvent Input; // 0x0
        FKey ReturnValue; // 0x70
    }; // Size: 0x88
    Params_PointerEvent_GetEffectingButton params{};
    params.Input = (FPointerEvent)Input;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Input = params.Input;
    return (FKey)params.ReturnValue;
}
bool UKismetInputLibrary::InputEvent_IsControlDown(FInputEvent& Input) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.InputEvent_IsControlDown"));
    struct Params_InputEvent_IsControlDown {
        FInputEvent Input; // 0x0
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_InputEvent_IsControlDown params{};
    params.Input = (FInputEvent)Input;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Input = params.Input;
    return (bool)params.ReturnValue;
}
bool UKismetInputLibrary::Key_IsVectorAxis(FKey& Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.Key_IsVectorAxis"));
    struct Params_Key_IsVectorAxis {
        FKey Key; // 0x0
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_Key_IsVectorAxis params{};
    params.Key = (FKey)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Key = params.Key;
    return (bool)params.ReturnValue;
}
bool UKismetInputLibrary::Key_IsValid(FKey& Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.Key_IsValid"));
    struct Params_Key_IsValid {
        FKey Key; // 0x0
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_Key_IsValid params{};
    params.Key = (FKey)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Key = params.Key;
    return (bool)params.ReturnValue;
}
bool UKismetInputLibrary::Key_IsDigital(FKey& Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.Key_IsDigital"));
    struct Params_Key_IsDigital {
        FKey Key; // 0x0
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_Key_IsDigital params{};
    params.Key = (FKey)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Key = params.Key;
    return (bool)params.ReturnValue;
}
bool UKismetInputLibrary::Key_IsMouseButton(FKey& Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.Key_IsMouseButton"));
    struct Params_Key_IsMouseButton {
        FKey Key; // 0x0
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_Key_IsMouseButton params{};
    params.Key = (FKey)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Key = params.Key;
    return (bool)params.ReturnValue;
}
bool UKismetInputLibrary::Key_IsModifierKey(FKey& Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.Key_IsModifierKey"));
    struct Params_Key_IsModifierKey {
        FKey Key; // 0x0
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_Key_IsModifierKey params{};
    params.Key = (FKey)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Key = params.Key;
    return (bool)params.ReturnValue;
}
bool UKismetInputLibrary::Key_IsKeyboardKey(FKey& Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.Key_IsKeyboardKey"));
    struct Params_Key_IsKeyboardKey {
        FKey Key; // 0x0
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_Key_IsKeyboardKey params{};
    params.Key = (FKey)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Key = params.Key;
    return (bool)params.ReturnValue;
}
bool UKismetInputLibrary::Key_IsGamepadKey(FKey& Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.Key_IsGamepadKey"));
    struct Params_Key_IsGamepadKey {
        FKey Key; // 0x0
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_Key_IsGamepadKey params{};
    params.Key = (FKey)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Key = params.Key;
    return (bool)params.ReturnValue;
}
bool UKismetInputLibrary::InputEvent_IsLeftAltDown(FInputEvent& Input) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.InputEvent_IsLeftAltDown"));
    struct Params_InputEvent_IsLeftAltDown {
        FInputEvent Input; // 0x0
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_InputEvent_IsLeftAltDown params{};
    params.Input = (FInputEvent)Input;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Input = params.Input;
    return (bool)params.ReturnValue;
}
bool UKismetInputLibrary::Key_IsAxis3D(FKey& Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.Key_IsAxis3D"));
    struct Params_Key_IsAxis3D {
        FKey Key; // 0x0
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_Key_IsAxis3D params{};
    params.Key = (FKey)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Key = params.Key;
    return (bool)params.ReturnValue;
}
bool UKismetInputLibrary::Key_IsAxis2D(FKey& Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.Key_IsAxis2D"));
    struct Params_Key_IsAxis2D {
        FKey Key; // 0x0
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_Key_IsAxis2D params{};
    params.Key = (FKey)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Key = params.Key;
    return (bool)params.ReturnValue;
}
bool UKismetInputLibrary::EqualEqual_KeyKey(FKey A, FKey B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.EqualEqual_KeyKey"));
    struct Params_EqualEqual_KeyKey {
        FKey A; // 0x0
        FKey B; // 0x18
        bool ReturnValue; // 0x30
    }; // Size: 0x31
    Params_EqualEqual_KeyKey params{};
    params.A = (FKey)A;
    params.B = (FKey)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetInputLibrary::InputEvent_IsLeftControlDown(FInputEvent& Input) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.InputEvent_IsLeftControlDown"));
    struct Params_InputEvent_IsLeftControlDown {
        FInputEvent Input; // 0x0
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_InputEvent_IsLeftControlDown params{};
    params.Input = (FInputEvent)Input;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Input = params.Input;
    return (bool)params.ReturnValue;
}
bool UKismetInputLibrary::Key_IsAnalog(FKey& Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.Key_IsAnalog"));
    struct Params_Key_IsAnalog {
        FKey Key; // 0x0
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_Key_IsAnalog params{};
    params.Key = (FKey)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Key = params.Key;
    return (bool)params.ReturnValue;
}
EUINavigation UKismetInputLibrary::Key_GetNavigationDirectionFromKey(FKeyEvent& InKeyEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.Key_GetNavigationDirectionFromKey"));
    struct Params_Key_GetNavigationDirectionFromKey {
        FKeyEvent InKeyEvent; // 0x0
        EUINavigation ReturnValue; // 0x38
    }; // Size: 0x39
    Params_Key_GetNavigationDirectionFromKey params{};
    params.InKeyEvent = (FKeyEvent)InKeyEvent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InKeyEvent = params.InKeyEvent;
    return (EUINavigation)params.ReturnValue;
}
bool UKismetInputLibrary::InputEvent_IsRightShiftDown(FInputEvent& Input) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.InputEvent_IsRightShiftDown"));
    struct Params_InputEvent_IsRightShiftDown {
        FInputEvent Input; // 0x0
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_InputEvent_IsRightShiftDown params{};
    params.Input = (FInputEvent)Input;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Input = params.Input;
    return (bool)params.ReturnValue;
}
EUINavigation UKismetInputLibrary::Key_GetNavigationDirectionFromAnalog(FAnalogInputEvent& InAnalogEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.Key_GetNavigationDirectionFromAnalog"));
    struct Params_Key_GetNavigationDirectionFromAnalog {
        FAnalogInputEvent InAnalogEvent; // 0x0
        EUINavigation ReturnValue; // 0x40
    }; // Size: 0x41
    Params_Key_GetNavigationDirectionFromAnalog params{};
    params.InAnalogEvent = (FAnalogInputEvent)InAnalogEvent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InAnalogEvent = params.InAnalogEvent;
    return (EUINavigation)params.ReturnValue;
}
EUINavigationAction UKismetInputLibrary::Key_GetNavigationActionFromKey(FKeyEvent& InKeyEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.Key_GetNavigationActionFromKey"));
    struct Params_Key_GetNavigationActionFromKey {
        FKeyEvent InKeyEvent; // 0x0
        EUINavigationAction ReturnValue; // 0x38
    }; // Size: 0x39
    Params_Key_GetNavigationActionFromKey params{};
    params.InKeyEvent = (FKeyEvent)InKeyEvent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InKeyEvent = params.InKeyEvent;
    return (EUINavigationAction)params.ReturnValue;
}
bool UKismetInputLibrary::InputEvent_IsRepeat(FInputEvent& Input) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.InputEvent_IsRepeat"));
    struct Params_InputEvent_IsRepeat {
        FInputEvent Input; // 0x0
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_InputEvent_IsRepeat params{};
    params.Input = (FInputEvent)Input;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Input = params.Input;
    return (bool)params.ReturnValue;
}
EUINavigationAction UKismetInputLibrary::Key_GetNavigationAction(FKey& InKey) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.Key_GetNavigationAction"));
    struct Params_Key_GetNavigationAction {
        FKey InKey; // 0x0
        EUINavigationAction ReturnValue; // 0x18
    }; // Size: 0x19
    Params_Key_GetNavigationAction params{};
    params.InKey = (FKey)InKey;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InKey = params.InKey;
    return (EUINavigationAction)params.ReturnValue;
}
void UKismetInputLibrary::Key_GetDisplayName(FKey& Key) {}
bool UKismetInputLibrary::InputEvent_IsShiftDown(FInputEvent& Input) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.InputEvent_IsShiftDown"));
    struct Params_InputEvent_IsShiftDown {
        FInputEvent Input; // 0x0
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_InputEvent_IsShiftDown params{};
    params.Input = (FInputEvent)Input;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Input = params.Input;
    return (bool)params.ReturnValue;
}
bool UKismetInputLibrary::InputEvent_IsRightControlDown(FInputEvent& Input) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.InputEvent_IsRightControlDown"));
    struct Params_InputEvent_IsRightControlDown {
        FInputEvent Input; // 0x0
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_InputEvent_IsRightControlDown params{};
    params.Input = (FInputEvent)Input;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Input = params.Input;
    return (bool)params.ReturnValue;
}
bool UKismetInputLibrary::InputEvent_IsRightCommandDown(FInputEvent& Input) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.InputEvent_IsRightCommandDown"));
    struct Params_InputEvent_IsRightCommandDown {
        FInputEvent Input; // 0x0
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_InputEvent_IsRightCommandDown params{};
    params.Input = (FInputEvent)Input;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Input = params.Input;
    return (bool)params.ReturnValue;
}
bool UKismetInputLibrary::InputEvent_IsRightAltDown(FInputEvent& Input) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.InputEvent_IsRightAltDown"));
    struct Params_InputEvent_IsRightAltDown {
        FInputEvent Input; // 0x0
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_InputEvent_IsRightAltDown params{};
    params.Input = (FInputEvent)Input;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Input = params.Input;
    return (bool)params.ReturnValue;
}
bool UKismetInputLibrary::InputEvent_IsLeftShiftDown(FInputEvent& Input) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.InputEvent_IsLeftShiftDown"));
    struct Params_InputEvent_IsLeftShiftDown {
        FInputEvent Input; // 0x0
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_InputEvent_IsLeftShiftDown params{};
    params.Input = (FInputEvent)Input;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Input = params.Input;
    return (bool)params.ReturnValue;
}
bool UKismetInputLibrary::InputEvent_IsLeftCommandDown(FInputEvent& Input) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.InputEvent_IsLeftCommandDown"));
    struct Params_InputEvent_IsLeftCommandDown {
        FInputEvent Input; // 0x0
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_InputEvent_IsLeftCommandDown params{};
    params.Input = (FInputEvent)Input;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Input = params.Input;
    return (bool)params.ReturnValue;
}
bool UKismetInputLibrary::InputEvent_IsCommandDown(FInputEvent& Input) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.InputEvent_IsCommandDown"));
    struct Params_InputEvent_IsCommandDown {
        FInputEvent Input; // 0x0
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_InputEvent_IsCommandDown params{};
    params.Input = (FInputEvent)Input;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Input = params.Input;
    return (bool)params.ReturnValue;
}
bool UKismetInputLibrary::InputEvent_IsAltDown(FInputEvent& Input) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.InputEvent_IsAltDown"));
    struct Params_InputEvent_IsAltDown {
        FInputEvent Input; // 0x0
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_InputEvent_IsAltDown params{};
    params.Input = (FInputEvent)Input;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Input = params.Input;
    return (bool)params.ReturnValue;
}
void UKismetInputLibrary::InputChord_GetDisplayName(FInputChord& Key) {}
int32_t UKismetInputLibrary::GetUserIndex(FKeyEvent& Input) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.GetUserIndex"));
    struct Params_GetUserIndex {
        FKeyEvent Input; // 0x0
        int32_t ReturnValue; // 0x38
    }; // Size: 0x3c
    Params_GetUserIndex params{};
    params.Input = (FKeyEvent)Input;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Input = params.Input;
    return (int32_t)params.ReturnValue;
}
FKey UKismetInputLibrary::GetKey(FKeyEvent& Input) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.GetKey"));
    struct Params_GetKey {
        FKeyEvent Input; // 0x0
        FKey ReturnValue; // 0x38
    }; // Size: 0x50
    Params_GetKey params{};
    params.Input = (FKeyEvent)Input;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Input = params.Input;
    return (FKey)params.ReturnValue;
}
bool UKismetInputLibrary::EqualEqual_InputChordInputChord(FInputChord A, FInputChord B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.EqualEqual_InputChordInputChord"));
    struct Params_EqualEqual_InputChordInputChord {
        FInputChord A; // 0x0
        FInputChord B; // 0x20
        bool ReturnValue; // 0x40
    }; // Size: 0x41
    Params_EqualEqual_InputChordInputChord params{};
    params.A = (FInputChord)A;
    params.B = (FInputChord)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UKismetInputLibrary::CalibrateTilt() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInputLibrary.CalibrateTilt"));
    struct Params_CalibrateTilt {
    }; // Size: 0x0
    Params_CalibrateTilt params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
