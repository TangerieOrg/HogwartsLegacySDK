#pragma once
#include <cstdint>
#include "UObject.hpp"
class UNiagaraComponent;
#pragma pack(push, 1)
class UNiagaraPreviewAxis : public UObject {
public:
    static UNiagaraPreviewAxis* StaticClass();
    int32_t Num();
    void ApplyToPreview(UNiagaraComponent* PreviewComponent, int32_t PreviewIndex, bool bIsXAxis, FString& OutLabelText);
}; // Size: 0x28
#pragma pack(pop)
