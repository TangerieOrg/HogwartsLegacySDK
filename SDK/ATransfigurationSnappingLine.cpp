#include "AActor.hpp"
#include "ATransfigurationSnappingLine.hpp"
#include "UFunction.hpp"
void ATransfigurationSnappingLine::FadeOutAndDestroy() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationSnappingLine.FadeOutAndDestroy"));
    struct Params_FadeOutAndDestroy {
    }; // Size: 0x0
    Params_FadeOutAndDestroy params{};
    ProcessEvent(func, &params);
}
void ATransfigurationSnappingLine::SetLineLength(float Length) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationSnappingLine.SetLineLength"));
    struct Params_SetLineLength {
        float Length; // 0x0
    }; // Size: 0x4
    Params_SetLineLength params{};
    params.Length = (float)Length;
    ProcessEvent(func, &params);
}
ATransfigurationSnappingLine* ATransfigurationSnappingLine::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TransfigurationSnappingLine");
    return (ATransfigurationSnappingLine*)res;
}
