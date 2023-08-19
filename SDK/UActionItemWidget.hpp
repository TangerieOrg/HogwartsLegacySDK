#pragma once
#include <cstdint>
#include "UUserWidget.hpp"
class UImage;
#pragma pack(push, 1)
class UActionItemWidget : public UUserWidget {
public:
    static UActionItemWidget* StaticClass();
    void ExecuteAction();
    void CollectItemData(int32_t LoadoutIndex, int32_t ItemIndex, UImage* ItemIcon);
}; // Size: 0x268
#pragma pack(pop)
