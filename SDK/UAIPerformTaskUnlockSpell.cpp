#include "UAIPerformTaskBase.hpp"
#include "UAIPerformTaskUnlockSpell.hpp"
UAIPerformTaskUnlockSpell* UAIPerformTaskUnlockSpell::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIPerformTaskUnlockSpell");
    return (UAIPerformTaskUnlockSpell*)res;
}
