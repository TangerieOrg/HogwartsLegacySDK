#include "UFunction.hpp"
#include "USpellToolRecord.hpp"
#include "UToolRecord.hpp"
USpellToolRecord* USpellToolRecord::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SpellToolRecord");
    return (USpellToolRecord*)res;
}
void USpellToolRecord::LoadComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellToolRecord.LoadComplete"));
    struct Params_LoadComplete {
    }; // Size: 0x0
    Params_LoadComplete params{};
    ProcessEvent(func, &params);
}
