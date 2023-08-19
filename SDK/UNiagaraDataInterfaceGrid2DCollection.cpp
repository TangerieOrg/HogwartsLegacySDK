#include "ENiagaraGpuBufferFormat.hpp"
#include "FNiagaraUserParameterBinding.hpp"
#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
#include "UNiagaraDataInterfaceGrid2D.hpp"
#include "UNiagaraDataInterfaceGrid2DCollection.hpp"
#include "UTextureRenderTarget2D.hpp"
void UNiagaraDataInterfaceGrid2DCollection::GetRawTextureSize(UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize"));
    struct Params_GetRawTextureSize {
        UNiagaraComponent* Component; // 0x0
        int32_t SizeX; // 0x8
        int32_t SizeY; // 0xc
    }; // Size: 0x10
    Params_GetRawTextureSize params{};
    params.Component = (UNiagaraComponent*)Component;
    params.SizeX = (int32_t)SizeX;
    params.SizeY = (int32_t)SizeY;
    ProcessEvent(func, &params);
    SizeX = params.SizeX;
    SizeY = params.SizeY;
}
UNiagaraDataInterfaceGrid2DCollection* UNiagaraDataInterfaceGrid2DCollection::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceGrid2DCollection");
    return (UNiagaraDataInterfaceGrid2DCollection*)res;
}
bool UNiagaraDataInterfaceGrid2DCollection::FillTexture2D(UNiagaraComponent* Component, UTextureRenderTarget2D* Dest, int32_t AttributeIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D"));
    struct Params_FillTexture2D {
        UNiagaraComponent* Component; // 0x0
        UTextureRenderTarget2D* Dest; // 0x8
        int32_t AttributeIndex; // 0x10
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_FillTexture2D params{};
    params.Component = (UNiagaraComponent*)Component;
    params.Dest = (UTextureRenderTarget2D*)Dest;
    params.AttributeIndex = (int32_t)AttributeIndex;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UNiagaraDataInterfaceGrid2DCollection::GetTextureSize(UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize"));
    struct Params_GetTextureSize {
        UNiagaraComponent* Component; // 0x0
        int32_t SizeX; // 0x8
        int32_t SizeY; // 0xc
    }; // Size: 0x10
    Params_GetTextureSize params{};
    params.Component = (UNiagaraComponent*)Component;
    params.SizeX = (int32_t)SizeX;
    params.SizeY = (int32_t)SizeY;
    ProcessEvent(func, &params);
    SizeX = params.SizeX;
    SizeY = params.SizeY;
}
bool UNiagaraDataInterfaceGrid2DCollection::FillRawTexture2D(UNiagaraComponent* Component, UTextureRenderTarget2D* Dest, int32_t& TilesX, int32_t& TilesY) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D"));
    struct Params_FillRawTexture2D {
        UNiagaraComponent* Component; // 0x0
        UTextureRenderTarget2D* Dest; // 0x8
        int32_t TilesX; // 0x10
        int32_t TilesY; // 0x14
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_FillRawTexture2D params{};
    params.Component = (UNiagaraComponent*)Component;
    params.Dest = (UTextureRenderTarget2D*)Dest;
    params.TilesX = (int32_t)TilesX;
    params.TilesY = (int32_t)TilesY;
    ProcessEvent(func, &params);
    TilesX = params.TilesX;
    TilesY = params.TilesY;
    return (bool)params.ReturnValue;
}
