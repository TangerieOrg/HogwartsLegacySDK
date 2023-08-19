#include "AFloo.hpp"
#include "UClass.hpp"
#include "UFlooSelect.hpp"
#include "UFunction.hpp"
#include "UScreen.hpp"
#include "UVerticalBox.hpp"
UFlooSelect* UFlooSelect::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FlooSelect");
    return (UFlooSelect*)res;
}
void UFlooSelect::CreateButtonsC() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlooSelect.CreateButtonsC"));
    struct Params_CreateButtonsC {
    }; // Size: 0x0
    Params_CreateButtonsC params{};
    ProcessEvent(func, &params);
}
