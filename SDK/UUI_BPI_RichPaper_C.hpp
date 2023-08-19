#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UUI_BPI_RichPaper_C : public UInterface {
public:
    static UUI_BPI_RichPaper_C* StaticClass();
    void MenuReadRichPaper();
    void SetBackgroundImage(FString NewBackground);
    void SetRichPaper(FString RichPaperID, FString sender);
}; // Size: 0x28
#pragma pack(pop)
