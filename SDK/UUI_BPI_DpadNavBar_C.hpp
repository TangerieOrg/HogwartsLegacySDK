#pragma once
#include <cstdint>
#include "UInterface.hpp"
class UUserWidget;
#pragma pack(push, 1)
class UUI_BPI_DpadNavBar_C : public UInterface {
public:
    static UUI_BPI_DpadNavBar_C* StaticClass();
    void RefreshCategoryNewCounts();
    void SetOwner(UUserWidget* NewOwner);
    void NavBar_InitCategoryButtons();
    void SetCurCategoryIndex(int32_t Index);
    void GoToCategoryNext();
    void GoToCategoryPrev();
    void I_SetCategoryNames(TArray<void*>& Categories);
}; // Size: 0x28
#pragma pack(pop)
