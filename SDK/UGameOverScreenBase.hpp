#pragma once
#include <cstdint>
#include "EUIGameOverReason.hpp"
#include "UScreen.hpp"
#pragma pack(push, 1)
class UGameOverScreenBase : public UScreen {
public:
    EUIGameOverReason MyReason; // 0x370
    char pad_371[0x7];
    static UGameOverScreenBase* StaticClass();
    void ShowLoadSaveResultPopup(FString ResultMessage, float Duration);
    void SetRestartButtonText(FString ButtonText);
    void SetGameOverReason(EUIGameOverReason Reason);
    void CannotAbandonQuest();
}; // Size: 0x378
#pragma pack(pop)
