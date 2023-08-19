#pragma once
#include <cstdint>
#include "FAudioDialogueLineData.hpp"
#include "UUserWidget.hpp"
#pragma pack(push, 1)
class USubtitleElement : public UUserWidget {
public:
    uint8_t AudioPriority; // 0x268
    char pad_269[0x7];
    FAudioDialogueLineData ElementAudioDialogueLineData; // 0x270
    bool bAudioEndedRecieved; // 0x2c0
    char pad_2c1[0x7];
    static USubtitleElement* StaticClass();
    void InitAudioDialogueLineData(FAudioDialogueLineData& AudioDialogueLineData);
}; // Size: 0x2c8
#pragma pack(pop)
