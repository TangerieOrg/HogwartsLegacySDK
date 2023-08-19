#include "ASanctuaryDesk.hpp"
#include "ATransfigurationObjectBase.hpp"
#include "UCurveFloat.hpp"
#include "UFunction.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMaterialInterface.hpp"
#include "UPrimitiveComponent.hpp"
ASanctuaryDesk* ASanctuaryDesk::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SanctuaryDesk");
    return (ASanctuaryDesk*)res;
}
void ASanctuaryDesk::ClearPage(bool bFrontSide) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryDesk.ClearPage"));
    struct Params_ClearPage {
        bool bFrontSide; // 0x0
    }; // Size: 0x1
    Params_ClearPage params{};
    params.bFrontSide = (bool)bFrontSide;
    ProcessEvent(func, &params);
}
void ASanctuaryDesk::BeginWritingPage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryDesk.BeginWritingPage"));
    struct Params_BeginWritingPage {
    }; // Size: 0x0
    Params_BeginWritingPage params{};
    ProcessEvent(func, &params);
}
void ASanctuaryDesk::ApplyMaterialsToPaper(UPrimitiveComponent* InPaperComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryDesk.ApplyMaterialsToPaper"));
    struct Params_ApplyMaterialsToPaper {
        UPrimitiveComponent* InPaperComponent; // 0x0
    }; // Size: 0x8
    Params_ApplyMaterialsToPaper params{};
    params.InPaperComponent = (UPrimitiveComponent*)InPaperComponent;
    ProcessEvent(func, &params);
}
