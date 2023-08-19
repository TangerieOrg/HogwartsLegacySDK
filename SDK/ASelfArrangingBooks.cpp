#include "AActor.hpp"
#include "ASelfArrangingBooks.hpp"
#include "FRotator.hpp"
#include "UCurveFloat.hpp"
#include "UFunction.hpp"
#include "USplineComponent.hpp"
#include "UStaticMeshComponent.hpp"
#include "UTimelineComponent.hpp"
void ASelfArrangingBooks::UpdateBookTransform(int32_t idx, float Path, float Rot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SelfArrangingBooks.UpdateBookTransform"));
    struct Params_UpdateBookTransform {
        int32_t idx; // 0x0
        float Path; // 0x4
        float Rot; // 0x8
    }; // Size: 0xc
    Params_UpdateBookTransform params{};
    params.idx = (int32_t)idx;
    params.Path = (float)Path;
    params.Rot = (float)Rot;
    ProcessEvent(func, &params);
}
ASelfArrangingBooks* ASelfArrangingBooks::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SelfArrangingBooks");
    return (ASelfArrangingBooks*)res;
}
void ASelfArrangingBooks::OnTimelineUpdate(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SelfArrangingBooks.OnTimelineUpdate"));
    struct Params_OnTimelineUpdate {
        float Value; // 0x0
    }; // Size: 0x4
    Params_OnTimelineUpdate params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void ASelfArrangingBooks::OnTimelineFinished() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SelfArrangingBooks.OnTimelineFinished"));
    struct Params_OnTimelineFinished {
    }; // Size: 0x0
    Params_OnTimelineFinished params{};
    ProcessEvent(func, &params);
}
