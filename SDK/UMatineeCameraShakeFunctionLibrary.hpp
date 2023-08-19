#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class UCameraShakeBase;
class UMatineeCameraShake;
#pragma pack(push, 1)
class UMatineeCameraShakeFunctionLibrary : public UBlueprintFunctionLibrary {
public:
    static UMatineeCameraShakeFunctionLibrary* StaticClass();
    static UMatineeCameraShake* Conv_MatineeCameraShake(UCameraShakeBase* CameraShake);
}; // Size: 0x28
#pragma pack(pop)
