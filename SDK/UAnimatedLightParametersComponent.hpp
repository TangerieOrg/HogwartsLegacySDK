#pragma once
#include <cstdint>
#include "FAnimatedLightExtraParameter.hpp"
#include "FAnimatedLightExtraSetupMaterialParameter.hpp"
#include "FAnimatedLightExtraSetupNiagaraParameter.hpp"
#include "UAnimatedLightParametersComponentAuto.hpp"
class UNiagaraComponent;
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
class UAnimatedLightParametersComponent : public UAnimatedLightParametersComponentAuto {
public:
    char pad_230[0x8];
    TArray<FAnimatedLightExtraSetupNiagaraParameter> NiagaraParameters; // 0x238
    char pad_248[0x8];
    static UAnimatedLightParametersComponent* StaticClass();
    bool RemoveAnimatedLightParameters();
    bool RemoveAnimatedLightParameter(FName Parameter);
    bool RemoveAnimatedLightNiagaraParameters(UNiagaraComponent* NiagaraComponent);
    bool RemoveAnimatedLightNiagaraParameter(FName Parameter);
    bool RemoveAnimatedLightMaterialParameters(UMaterialInstanceDynamic* MaterialInstanceDynamic);
    bool RemoveAnimatedLightMaterialParameter(FName Parameter);
    bool AddAnimatedLightNiagaraParameters(UNiagaraComponent* NiagaraComponent, TArray<FAnimatedLightExtraParameter> ParameterList);
    bool AddAnimatedLightNiagaraParameter(UNiagaraComponent* NiagaraComponent, FAnimatedLightExtraParameter Parameter);
    bool AddAnimatedLightMaterialParameters(UMaterialInstanceDynamic* MaterialInstanceDynamic, TArray<FAnimatedLightExtraParameter> ParameterList);
    bool AddAnimatedLightMaterialParameter(UMaterialInstanceDynamic* MaterialInstanceDynamic, FAnimatedLightExtraParameter Parameter);
}; // Size: 0x250
#pragma pack(pop)
