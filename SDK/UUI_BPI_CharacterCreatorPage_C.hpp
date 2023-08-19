#pragma once
#include <cstdint>
#include "EGenderEnum.hpp"
#include "UInterface.hpp"
#pragma pack(push, 1)
class UUI_BPI_CharacterCreatorPage_C : public UInterface {
public:
    static UUI_BPI_CharacterCreatorPage_C* StaticClass();
    void I_ScrollIntoView();
    void I_TabActivated();
    void I_FinalizeFailed(FString ErrorMsg);
    void I_UpdateIcons(EGenderEnum Gender);
    void I_UpdateHighlights();
    void I_GetPageLegend(FString& PageLegend);
    void I_GetPageTitle(FString& PageTitle);
}; // Size: 0x28
#pragma pack(pop)
