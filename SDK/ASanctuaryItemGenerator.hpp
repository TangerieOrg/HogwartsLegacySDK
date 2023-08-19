#pragma once
#include <cstdint>
#include "ATransfigurationObjectBase.hpp"
#pragma pack(push, 1)
class ASanctuaryItemGenerator : public ATransfigurationObjectBase {
public:
    char pad_2a8[0x10];
    static ASanctuaryItemGenerator* StaticClass();
    void ShowCallout();
    void BP_NotifyItemHeldUpdated(FName NewItemHeld, bool bIsInitialState);
}; // Size: 0x2b8
#pragma pack(pop)
