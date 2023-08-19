#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "EUMGInputAxis.hpp"
struct FUMGInputListener;
#pragma pack(push, 1)
class AUMGInputManager : public AActor {
public:
    EUMGInputAction ReferenceUMGInputAction; // 0x248
    EUMGInputAxis ReferenceUMGInputAxis; // 0x249
    char pad_24a[0x146];
    static AUMGInputManager* StaticClass();
    void UnregisterUMGInputListener(FUMGInputListener& InputListener);
    void UnregisterUMGInputAxis(FUMGInputListener& InputListener, EUMGInputAxis InputAxis);
    void UnregisterUMGInputAction(FUMGInputListener& InputListener, EUMGInputAction InputAction, EInputEvent InputEvent);
    void UnregisterInputAxis(EUMGInputAxis InputAxis);
    void UnregisterInputAction(EUMGInputAction InputAction, EInputEvent InputEvent);
    void RegisterUMGInputAxis(FUMGInputListener& InputListener, EUMGInputAxis InputAxis);
    void RegisterUMGInputAction(FUMGInputListener& InputListener, EUMGInputAction InputAction, EInputEvent InputEvent);
    void RegisterInputAxis(EUMGInputAxis InputAxis);
    void RegisterInputAction(EUMGInputAction InputAction, EInputEvent InputEvent);
    void OnInputAxis(EUMGInputAxis InputAxis, float AxisValue);
    void OnInputAction(EUMGInputAction InputAction, EInputEvent InputEvent);
    FString GetInputAxisEnumValueAsString(EUMGInputAxis InputAxis);
    FString GetInputActionEnumValueAsString(EUMGInputAction InputAction);
    void CreateInputAxisBinding(EUMGInputAxis InputAxis);
    void CreateInputActionBinding(EUMGInputAction InputAction, EInputEvent InputEvent);
}; // Size: 0x390
#pragma pack(pop)
