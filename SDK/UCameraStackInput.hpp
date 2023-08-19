#pragma once
#include <cstdint>
#include "ELastCameraInput.hpp"
#include "FVector2D.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UCameraStackInput : public UObject {
public:
    char pad_28[0x60];
    static UCameraStackInput* StaticClass();
    bool IsLooking();
    bool HasAnyMouseLookInput();
    bool HasAnyLookInput();
    float GetZoom();
    FVector2D GetWalk(bool bInvertX, bool bInvertY);
    FVector2D GetTilt();
    float GetRoll();
    bool GetResetPressed();
    bool GetQuickTurnPressed();
    float GetPedestal();
    FVector2D GetMouseLook(bool bInvertX, bool bInvertY);
    FVector2D GetLook(bool bInvertX, bool bInvertY);
    ELastCameraInput GetLastCameraInput();
    float GetFocusDistance();
    FVector2D GetDollyAndTruck();
}; // Size: 0x88
#pragma pack(pop)
