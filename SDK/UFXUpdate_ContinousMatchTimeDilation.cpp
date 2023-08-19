#include "EMultiFXUse.hpp"
#include "UFXUpdate_ContinousMatchTimeDilation.hpp"
#include "UFXUpdate_Tick.hpp"
UFXUpdate_ContinousMatchTimeDilation* UFXUpdate_ContinousMatchTimeDilation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXUpdate_ContinousMatchTimeDilation");
    return (UFXUpdate_ContinousMatchTimeDilation*)res;
}
