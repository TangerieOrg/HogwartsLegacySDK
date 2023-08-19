#include "AActor.hpp"
#include "ATent.hpp"
#include "UFunction.hpp"
ATent* ATent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Tent");
    return (ATent*)res;
}
void ATent::SetTentMesh() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Tent.SetTentMesh"));
    struct Params_SetTentMesh {
    }; // Size: 0x0
    Params_SetTentMesh params{};
    ProcessEvent(func, &params);
}
