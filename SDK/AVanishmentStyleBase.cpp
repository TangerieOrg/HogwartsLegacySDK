#include "AActor.hpp"
#include "ATransfigurationPreviewActor.hpp"
#include "AVanishmentStyleBase.hpp"
#include "UFunction.hpp"
AVanishmentStyleBase* AVanishmentStyleBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.VanishmentStyleBase");
    return (AVanishmentStyleBase*)res;
}
void AVanishmentStyleBase::StartVanishment() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VanishmentStyleBase.StartVanishment"));
    struct Params_StartVanishment {
    }; // Size: 0x0
    Params_StartVanishment params{};
    ProcessEvent(func, &params);
}
