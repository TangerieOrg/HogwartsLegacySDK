#include "AActor.hpp"
#include "AHippogriffStatue.hpp"
#include "UFunction.hpp"
void AHippogriffStatue::RepairAll() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HippogriffStatue.RepairAll"));
    struct Params_RepairAll {
    }; // Size: 0x0
    Params_RepairAll params{};
    ProcessEvent(func, &params);
}
AHippogriffStatue* AHippogriffStatue::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.HippogriffStatue");
    return (AHippogriffStatue*)res;
}
