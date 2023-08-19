#pragma once
#include <cstdint>
#include "UHUDElementGroup.hpp"
#pragma pack(push, 1)
class UOwlMailNotification : public UHUDElementGroup {
public:
    static UOwlMailNotification* StaticClass();
    int32_t PlayMailDialogLine(FString MailID);
}; // Size: 0x2e8
#pragma pack(pop)
