#pragma once
#include <cstdint>
#include "EPerformTasksChannelingSpell.hpp"
#include "UAIPerformTaskCastSpell.hpp"
#pragma pack(push, 1)
class UAIPerformTaskCastChannelingSpell : public UAIPerformTaskCastSpell {
public:
    EPerformTasksChannelingSpell ChannelingSpellType; // 0x100
    bool bShouldStopChannelingSpell; // 0x101
    char pad_102[0xe];
    static UAIPerformTaskCastChannelingSpell* StaticClass();
    void DisillusionmentFinished(uint8_t InAction);
}; // Size: 0x110
#pragma pack(pop)
