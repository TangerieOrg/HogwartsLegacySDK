#pragma once
#include <cstdint>
#include "FNiagaraUserParameterBinding.hpp"
#include "UNiagaraDataInterface.hpp"
class AActor;
#pragma pack(push, 1)
class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface {
public:
    AActor* Source; // 0x38
    FNiagaraUserParameterBinding SplineUserParameter; // 0x40
    static UNiagaraDataInterfaceSpline* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
