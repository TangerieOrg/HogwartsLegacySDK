#include "UGenlockedTimecodeProvider.hpp"
#include "UTimecodeProvider.hpp"
UGenlockedTimecodeProvider* UGenlockedTimecodeProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeManagement.GenlockedTimecodeProvider");
    return (UGenlockedTimecodeProvider*)res;
}
