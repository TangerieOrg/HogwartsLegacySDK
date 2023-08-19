#pragma once
#include <cstdint>
#include "UScreen.hpp"
#pragma pack(push, 1)
class URichPaperScreen : public UScreen {
public:
    static URichPaperScreen* StaticClass();
    void SetRichPaperID(FString RichPaperID);
}; // Size: 0x370
#pragma pack(pop)
