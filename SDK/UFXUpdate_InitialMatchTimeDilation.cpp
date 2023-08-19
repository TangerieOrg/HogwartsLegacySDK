#include "EMultiFXUse.hpp"
#include "UFXUpdate.hpp"
#include "UFXUpdate_InitialMatchTimeDilation.hpp"
UFXUpdate_InitialMatchTimeDilation* UFXUpdate_InitialMatchTimeDilation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXUpdate_InitialMatchTimeDilation");
    return (UFXUpdate_InitialMatchTimeDilation*)res;
}
