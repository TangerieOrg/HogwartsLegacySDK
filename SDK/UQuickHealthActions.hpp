#pragma once
#include <cstdint>
#include "UHUDElementGroup.hpp"
class UTexture2D;
class UObject;
class AActor;
#pragma pack(push, 1)
class UQuickHealthActions : public UHUDElementGroup {
public:
    FString CurrentHealthItem; // 0x2e8
    char pad_2f8[0x8];
    static UQuickHealthActions* StaticClass();
    void UpdateHealthBar(float NewPct);
    void SetMaxHealth(int32_t NewMaxHealth);
    void OnSetMaxHealth(float NewHealthSize);
    void OnIconTextureLoaded(UTexture2D* Texture);
    void OnHealthChanged(AActor* Actor, float Delta, bool IndicateHUD);
    void LoadIconCallback(UTexture2D* Texture, UObject* Param);
    void DisplayItemCount(int32_t Count);
}; // Size: 0x300
#pragma pack(pop)
