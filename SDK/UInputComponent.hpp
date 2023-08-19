#pragma once
#include <cstdint>
#include "EControllerAnalogStick\Type.hpp"
#include "FCachedKeyToActionInfo.hpp"
#include "FKey.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class UInputComponent : public UActorComponent {
public:
    char pad_c8[0x70];
    TArray<FCachedKeyToActionInfo> CachedKeyToActionInfo; // 0x138
    char pad_148[0x8];
    static UInputComponent* StaticClass();
    bool WasControllerKeyJustReleased(FKey Key);
    bool WasControllerKeyJustPressed(FKey Key);
    bool IsControllerKeyDown(FKey Key);
    void GetTouchState(int32_t FingerIndex, float& LocationX, float& LocationY, bool& bIsCurrentlyPressed);
    FVector GetControllerVectorKeyState(FKey Key);
    void GetControllerMouseDelta(float& DeltaX, float& DeltaY);
    float GetControllerKeyTimeDown(FKey Key);
    void GetControllerAnalogStickState(EControllerAnalogStick::Type WhichStick, float& StickX, float& StickY);
    float GetControllerAnalogKeyState(FKey Key);
}; // Size: 0x150
#pragma pack(pop)
