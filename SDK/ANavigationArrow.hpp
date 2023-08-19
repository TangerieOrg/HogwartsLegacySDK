#pragma once
#include <cstdint>
#include "AActor.hpp"
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
class ANavigationArrow : public AActor {
public:
    float PathActivationRadius; // 0x248
    float NearFadeDistanceOutterRadius; // 0x24c
    float NearFadeDistanceInnerRadius; // 0x250
    float FarFadeDistanceOutterRadius; // 0x254
    float FarFadeDistanceInnerRadius; // 0x258
    char pad_25c[0xc];
    static ANavigationArrow* StaticClass();
    void ShowEvent();
    void Show();
    bool IsListVisible();
    void HideEvent();
    void Hide();
    UMaterialInstanceDynamic* GetMaterial();
}; // Size: 0x268
#pragma pack(pop)
