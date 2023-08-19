#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
#include "UNiagaraPreviewAxis.hpp"
#include "UObject.hpp"
void UNiagaraPreviewAxis::ApplyToPreview(UNiagaraComponent* PreviewComponent, int32_t PreviewIndex, bool bIsXAxis, FString& OutLabelText) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraPreviewAxis.ApplyToPreview"));
    struct Params_ApplyToPreview {
        UNiagaraComponent* PreviewComponent; // 0x0
        int32_t PreviewIndex; // 0x8
        bool bIsXAxis; // 0xc
        char pad_d[0x3];
        FString OutLabelText; // 0x10
    }; // Size: 0x20
    Params_ApplyToPreview params{};
    params.PreviewComponent = (UNiagaraComponent*)PreviewComponent;
    params.PreviewIndex = (int32_t)PreviewIndex;
    params.bIsXAxis = (bool)bIsXAxis;
    params.OutLabelText = (FString)OutLabelText;
    ProcessEvent(func, &params);
    OutLabelText = params.OutLabelText;
}
UNiagaraPreviewAxis* UNiagaraPreviewAxis::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraPreviewAxis");
    return (UNiagaraPreviewAxis*)res;
}
int32_t UNiagaraPreviewAxis::Num() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraPreviewAxis.Num"));
    struct Params_Num {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_Num params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
