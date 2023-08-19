#pragma once
#include <cstdint>
#include "UInterface.hpp"
class URichTextBlock;
#pragma pack(push, 1)
class UUI_BPI_SubtitleInterface_C : public UInterface {
public:
    static UUI_BPI_SubtitleInterface_C* StaticClass();
    void AdjustHeight(float PixelsUP);
    void ResetHeight();
    void SubtitlesCleanup();
    void SetRichText(FString InputString);
    void GetRichText(URichTextBlock*& NewParam);
}; // Size: 0x28
#pragma pack(pop)
