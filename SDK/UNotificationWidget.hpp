#pragma once
#include <cstdint>
#include "UUserWidget.hpp"
class UPhoenixTextBlock;
class UImage;
#pragma pack(push, 1)
class UNotificationWidget : public UUserWidget {
public:
    UPhoenixTextBlock* Subheader; // 0x268
    UImage* Icon; // 0x270
    UPhoenixTextBlock* Header; // 0x278
    FString ItemName; // 0x280
    FName Variation; // 0x290
    FString ImageId; // 0x298
    int32_t ItemCount; // 0x2a8
    float LifeTime; // 0x2ac
    static UNotificationWidget* StaticClass();
    void ToggleCountVisibility(bool IsVisible);
    void SetIsInventoryFullNotification(bool IsInventoryFull);
    void InitDetails(FString NewItemName, FName NewVariation, FString DisplayName, bool bIsHeaderTranslatable, int32_t NewItemCount, FString NewIconName, bool bSpecialCollection);
    bool IncrementCount(int32_t Amount);
}; // Size: 0x2b0
#pragma pack(pop)
