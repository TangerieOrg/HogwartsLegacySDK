#pragma once
#include <cstdint>
#include "EUIGameOverReason.hpp"
#include "UScreen.hpp"
#pragma pack(push, 1)
class UMissionFailScreenBase : public UScreen {
public:
    EUIGameOverReason MyReason; // 0x370
    char pad_371[0x7];
    static UMissionFailScreenBase* StaticClass();
    void SetReason(EUIGameOverReason Reason);
    void SetDisplayText(FString Title, FString Description);
    void CannotAbandonQuest();
}; // Size: 0x378
#pragma pack(pop)
