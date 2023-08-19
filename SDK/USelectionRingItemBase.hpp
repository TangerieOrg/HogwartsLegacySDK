#pragma once
#include <cstdint>
#include "ESpellCategory.hpp"
#include "UIconButtonWidget.hpp"
class UTexture2D;
class UObject;
#pragma pack(push, 1)
class USelectionRingItemBase : public UIconButtonWidget {
public:
    char pad_4a8[0x8];
    static USelectionRingItemBase* StaticClass();
    void ShowUpdateVFX();
    void SetItemData(int32_t GroupIndex, int32_t MacroIndex, int32_t ItemIndex, bool ShowNone);
    void OnShowUpdateVFX();
    void OnIconTextureLoaded(UTexture2D* Texture, bool IsBlacklisted);
    void OnBackgroundTextureLoaded(UTexture2D* Texture, bool IsBlacklisted);
    void LoadIconCallback(UTexture2D* Texture, UObject* Param);
    void LoadBackgroundCallback(UTexture2D* Texture, UObject* Param);
    ESpellCategory GetSpellCategory();
}; // Size: 0x4b0
#pragma pack(pop)
