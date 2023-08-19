#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ENiagaraPreviewGridResetMode.hpp"
class UNiagaraSystem;
class UNiagaraComponent;
class UNiagaraPreviewAxis;
class UClass;
class UChildActorComponent;
#pragma pack(push, 1)
class ANiagaraPreviewGrid : public AActor {
public:
    UNiagaraSystem* System; // 0x248
    ENiagaraPreviewGridResetMode ResetMode; // 0x250
    char pad_251[0x7];
    UNiagaraPreviewAxis* PreviewAxisX; // 0x258
    UNiagaraPreviewAxis* PreviewAxisY; // 0x260
    UClass* PreviewClass; // 0x268
    float SpacingX; // 0x270
    float SpacingY; // 0x274
    int32_t NumX; // 0x278
    int32_t NumY; // 0x27c
    TArray<UChildActorComponent*> PreviewComponents; // 0x280
    char pad_290[0x8];
    static ANiagaraPreviewGrid* StaticClass();
    void SetPaused(bool bPaused);
    void GetPreviews(TArray<UNiagaraComponent*>& OutPreviews);
    void DeactivatePreviews();
    void ActivatePreviews(bool bReset);
}; // Size: 0x298
#pragma pack(pop)
