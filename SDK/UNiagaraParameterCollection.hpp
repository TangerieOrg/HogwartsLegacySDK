#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "FNiagaraVariable.hpp"
#include "UObject.hpp"
class UMaterialParameterCollection;
class UNiagaraParameterCollectionInstance;
#pragma pack(push, 1)
class UNiagaraParameterCollection : public UObject {
public:
    FName Namespace; // 0x28
    TArray<FNiagaraVariable> Parameters; // 0x30
    UMaterialParameterCollection* SourceMaterialCollection; // 0x40
    UNiagaraParameterCollectionInstance* DefaultInstance; // 0x48
    FGuid CompileId; // 0x50
    static UNiagaraParameterCollection* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
